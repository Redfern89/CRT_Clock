/*
 * crt.cpp
 *
 * Created: 19.03.2023 23:26:58
 * Author : 123
 */ 

#include "main.h"

void spi_init() {
	DDRB_SPI_INIT;
	
	SPCR =  (1 << SPE) | (0 << DORD) | (1 << MSTR) | (0 << CPOL) | (0 << CPHA) | (1 << SPR1) | (0 << SPR0);
	SPSR = (0 << SPI2X);
	SPDR = 0x00;
}

void spi_write(unsigned char data) {
	SPDR = data;
	while (!(SPSR & (1 << SPIF)));
}

void sendxy(unsigned char x, unsigned char y) {
	spi_write(y);
	spi_write(x);
	_74HC595_LATCH;
}


void crt_send_char(uint8_t chr, uint8_t x, uint8_t y){
	unsigned char c = (chr < 0xe0) ? chr - 0x20 : chr - 0x50;
	unsigned int offset = 0;
	unsigned char charLen = 0;

	offset = CharsPositions[c];
	charLen = pgm_read_byte(&Font[offset]);
	offset++;
	
	for(unsigned char j = 0; j < 2; j++) {
		for(unsigned char i = 0; i < charLen; i++) {
			sendxy(pgm_read_byte(&Font[offset + 2 * i]) + x, pgm_read_byte(&Font[offset + 2 * i + 1]) + y);
		}
	}
}


void crt_send_str (const char *str, unsigned char x, unsigned char y) {
	while(*str) {
		if((unsigned char) *str == 0xd0 || (unsigned char) *str == 0xd1) str++;
		if(*str == '\r'){
			x = 0;
			str++;
		}
		if(*str == '\n') {
			y += 8 * 2;
			str++;
		}
		crt_send_char((unsigned char) *str++, x, y);
		x += 6 * 2;
	}
}

int main(void) {
	spi_init();

	while (1) {
		crt_send_str("FUCK WORLD!", 10, 10);
	}
}

