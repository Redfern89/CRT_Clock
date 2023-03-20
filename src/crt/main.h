/*
 * main.h
 *
 * Created: 19.03.2023 23:27:44
 *  Author: 123
 */ 
#ifndef MAIN_H_
#define MAIN_H_

#define F_CPU 16000000UL

#include <avr/io.h>
#include <avr/pgmspace.h>
#include "font.h"

#define SPI_DDR DDRB
#define SPI_PORT PORTB
#define SCLK_PORT PB5
#define DATA_PORT PB3
#define RCLK_PORT PB2

#define DDRB_SPI_INIT SPI_DDR |= (1 << SCLK_PORT) | (1 << DATA_PORT) | (1 << RCLK_PORT)
#define _74HC595_LATCH { PORTB &= ~(1 << RCLK_PORT); PORTB |= (1 << RCLK_PORT); }

#endif /* MAIN_H_ */