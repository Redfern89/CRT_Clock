/*
 * font.h
 *
 * Created: 19.03.2023 22:20:51
 *  Author: 123
 */ 


#ifndef FONT_H_
#define FONT_H_

static const PROGMEM unsigned char Font[] = {
	/*   */
	0b00000000,

	/* ! */
	0b00000110, 0b00000100, 0b00000000, 0b00000100, 0b00000010,
	0b00000100, 0b00000100, 0b00000100, 0b00000110, 0b00000100,
	0b00001000, 0b00000100, 0b00001100,

	/* " */
	0b00000110, 0b00000010, 0b00000000, 0b00000010, 0b00000010,
	0b00000010, 0b00000100, 0b00000110, 0b00000100, 0b00000110,
	0b00000010, 0b00000110, 0b00000000,

	/* # */
	0b00010100, 0b00000000, 0b00000100, 0b00000010, 0b00000100,
	0b00000010, 0b00000010, 0b00000010, 0b00000000, 0b00000110,
	0b00000000, 0b00000110, 0b00000010, 0b00000110, 0b00000100,
	0b00000100, 0b00000100, 0b00000010, 0b00000110, 0b00000010,
	0b00001000, 0b00000000, 0b00001000, 0b00000010, 0b00001010,
	0b00000010, 0b00001100, 0b00000110, 0b00001100, 0b00000110,
	0b00001010, 0b00000110, 0b00001000, 0b00000100, 0b00001000,
	0b00000110, 0b00000110, 0b00001000, 0b00000100, 0b00001000,
	0b00001000,

	/* $ */
	0b00010001, 0b00000000, 0b00000100, 0b00000010, 0b00000010,
	0b00000100, 0b00000010, 0b00000100, 0b00000000, 0b00000110,
	0b00000010, 0b00001000, 0b00000010, 0b00000100, 0b00000100,
	0b00000100, 0b00000110, 0b00000010, 0b00000110, 0b00000100,
	0b00001000, 0b00000100, 0b00001010, 0b00000010, 0b00001010,
	0b00000000, 0b00001010, 0b00000100, 0b00001100, 0b00000110,
	0b00001010, 0b00001000, 0b00001000, 0b00000110, 0b00000110,

	/* % */
	0b00001101, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000010, 0b00000010, 0b00000010, 0b00000000, 0b00000110,
	0b00000100, 0b00000100, 0b00000110, 0b00000010, 0b00001000,
	0b00000000, 0b00001010, 0b00000110, 0b00001010, 0b00000110,
	0b00001100, 0b00001000, 0b00001100, 0b00001000, 0b00001010,
	0b00001000, 0b00000010,

	/* & */
	0b00001111, 0b00000000, 0b00000010, 0b00000000, 0b00000100,
	0b00000010, 0b00000110, 0b00000000, 0b00001000, 0b00000000,
	0b00001010, 0b00000010, 0b00001100, 0b00000100, 0b00001100,
	0b00000110, 0b00001010, 0b00000100, 0b00001000, 0b00000100,
	0b00000100, 0b00000110, 0b00000010, 0b00000100, 0b00000000,
	0b00000010, 0b00000000, 0b00001000, 0b00001000, 0b00001000,
	0b00001100,

	/* ' */
	0b00000100, 0b00000010, 0b00000000, 0b00000100, 0b00000000,
	0b00000100, 0b00000010, 0b00000010, 0b00000100,

	/* ( */
	0b00000111, 0b00000010, 0b00000100, 0b00000010, 0b00000110,
	0b00000010, 0b00001000, 0b00000100, 0b00001010, 0b00000110,
	0b00001100, 0b00000100, 0b00000010, 0b00000110, 0b00000000,

	/* ) */
	0b00000111, 0b00000010, 0b00000000, 0b00000100, 0b00000010,
	0b00000110, 0b00000100, 0b00000110, 0b00000110, 0b00000110,
	0b00001000, 0b00000100, 0b00001010, 0b00000010, 0b00001100,

	/* * */
	0b00001011, 0b00000000, 0b00000100, 0b00000010, 0b00000110,
	0b00000100, 0b00000110, 0b00000100, 0b00000100, 0b00000100,
	0b00000010, 0b00000110, 0b00000110, 0b00000100, 0b00001000,
	0b00000100, 0b00001010, 0b00000000, 0b00001000, 0b00001000,
	0b00001000, 0b00001000, 0b00000100,

	/* + */
	0b00001001, 0b00000000, 0b00000110, 0b00000010, 0b00000110,
	0b00000100, 0b00000110, 0b00000100, 0b00000100, 0b00000100,
	0b00000010, 0b00000110, 0b00000110, 0b00001000, 0b00000110,
	0b00000100, 0b00001000, 0b00000100, 0b00001010,

	/* , */
	0b00000100, 0b00000010, 0b00001000, 0b00000100, 0b00001000,
	0b00000100, 0b00001010, 0b00000010, 0b00001100,

	/* - */
	0b00000101, 0b00000000, 0b00000110, 0b00000010, 0b00000110,
	0b00000100, 0b00000110, 0b00000110, 0b00000110, 0b00001000,
	0b00000110,

	/* . */
	0b00000100, 0b00000010, 0b00001010, 0b00000010, 0b00001100,
	0b00000100, 0b00001100, 0b00000100, 0b00001010,

	/* / */
	0b00000101, 0b00000000, 0b00001010, 0b00000010, 0b00001000,
	0b00000100, 0b00000110, 0b00000110, 0b00000100, 0b00001000,
	0b00000010,

	/* 0 */
	0b00010011, 0b00000000, 0b00000010, 0b00000000, 0b00000100,
	0b00000000, 0b00000110, 0b00000000, 0b00001000, 0b00000000,
	0b00001010, 0b00000010, 0b00001000, 0b00000100, 0b00000110,
	0b00000110, 0b00000100, 0b00001000, 0b00000100, 0b00001000,
	0b00000010, 0b00000110, 0b00000000, 0b00000100, 0b00000000,
	0b00000010, 0b00000000, 0b00001000, 0b00000110, 0b00001000,
	0b00001000, 0b00001000, 0b00001010, 0b00000110, 0b00001100,
	0b00000100, 0b00001100, 0b00000010, 0b00001100,

	/* 1 */
	0b00001010, 0b00000010, 0b00000010, 0b00000100, 0b00000010,
	0b00000100, 0b00000000, 0b00000100, 0b00000100, 0b00000100,
	0b00000110, 0b00000100, 0b00001000, 0b00000100, 0b00001010,
	0b00000100, 0b00001100, 0b00000010, 0b00001100, 0b00000110,
	0b00001100,

	/* 2 */
	0b00001110, 0b00000000, 0b00000010, 0b00000010, 0b00000000,
	0b00000100, 0b00000000, 0b00000110, 0b00000000, 0b00001000,
	0b00000010, 0b00001000, 0b00000100, 0b00000110, 0b00000110,
	0b00000100, 0b00001000, 0b00000010, 0b00001010, 0b00000010,
	0b00001100, 0b00000000, 0b00001100, 0b00000100, 0b00001100,
	0b00000110, 0b00001100, 0b00001000, 0b00001100,

	/* 3 */
	0b00001110, 0b00000000, 0b00000000, 0b00000010, 0b00000000,
	0b00000100, 0b00000000, 0b00000110, 0b00000000, 0b00000110,
	0b00000010, 0b00000100, 0b00000100, 0b00000110, 0b00000110,
	0b00001000, 0b00001000, 0b00001000, 0b00001010, 0b00000110,
	0b00001100, 0b00000100, 0b00001100, 0b00000010, 0b00001100,
	0b00000000, 0b00001010, 0b00001000, 0b00000000,

	/* 4 */
	0b00001110, 0b00000000, 0b00000110, 0b00000000, 0b00001000,
	0b00000010, 0b00001000, 0b00000100, 0b00001000, 0b00000110,
	0b00001000, 0b00000110, 0b00000110, 0b00000110, 0b00000100,
	0b00000110, 0b00000010, 0b00000100, 0b00000010, 0b00000010,
	0b00000100, 0b00000110, 0b00000000, 0b00001000, 0b00001000,
	0b00000110, 0b00001010, 0b00000110, 0b00001100,

	/* 5 */
	0b00010001, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000010, 0b00000100, 0b00000100,
	0b00000100, 0b00000110, 0b00000100, 0b00001000, 0b00000110,
	0b00001000, 0b00001000, 0b00001000, 0b00001010, 0b00000110,
	0b00001100, 0b00000100, 0b00001100, 0b00000010, 0b00001100,
	0b00000000, 0b00001010, 0b00000010, 0b00000000, 0b00000100,
	0b00000000, 0b00000110, 0b00000000, 0b00001000, 0b00000000,

	/* 6 */
	0b00001111, 0b00000000, 0b00000100, 0b00000000, 0b00000110,
	0b00000000, 0b00001000, 0b00000000, 0b00001010, 0b00000010,
	0b00001100, 0b00000100, 0b00001100, 0b00000110, 0b00001100,
	0b00001000, 0b00001010, 0b00001000, 0b00001000, 0b00000110,
	0b00000110, 0b00000100, 0b00000110, 0b00000010, 0b00000110,
	0b00000010, 0b00000010, 0b00000100, 0b00000000, 0b00000110,
	0b00000000,

	/* 7 */
	0b00001011, 0b00000000, 0b00000000, 0b00000010, 0b00000000,
	0b00000100, 0b00000000, 0b00000110, 0b00000000, 0b00001000,
	0b00000000, 0b00001000, 0b00000010, 0b00000110, 0b00000100,
	0b00000100, 0b00000110, 0b00000010, 0b00001000, 0b00000010,
	0b00001010, 0b00000010, 0b00001100,

	/* 8 */
	0b00010001, 0b00000000, 0b00000010, 0b00000000, 0b00000100,
	0b00000010, 0b00000110, 0b00000100, 0b00000110, 0b00000110,
	0b00000110, 0b00001000, 0b00000100, 0b00001000, 0b00000010,
	0b00000110, 0b00000000, 0b00000100, 0b00000000, 0b00000010,
	0b00000000, 0b00000000, 0b00001000, 0b00000000, 0b00001010,
	0b00000010, 0b00001100, 0b00000100, 0b00001100, 0b00000110,
	0b00001100, 0b00001000, 0b00001010, 0b00001000, 0b00001000,

	/* 9 */
	0b00001111, 0b00000000, 0b00000010, 0b00000000, 0b00000100,
	0b00000010, 0b00000110, 0b00000100, 0b00000110, 0b00000110,
	0b00000110, 0b00001000, 0b00000110, 0b00001000, 0b00000100,
	0b00001000, 0b00000010, 0b00000110, 0b00000000, 0b00000100,
	0b00000000, 0b00000010, 0b00000000, 0b00001000, 0b00001000,
	0b00000110, 0b00001010, 0b00000100, 0b00001100, 0b00000010,
	0b00001100,

	/* : */
	0b00001000, 0b00000010, 0b00000010, 0b00000010, 0b00000100,
	0b00000100, 0b00000100, 0b00000100, 0b00000010, 0b00000100,
	0b00001000, 0b00000010, 0b00001000, 0b00000010, 0b00001010,
	0b00000100, 0b00001010,

	/* ; */
	0b00001000, 0b00000010, 0b00000010, 0b00000010, 0b00000100,
	0b00000100, 0b00000100, 0b00000100, 0b00000010, 0b00000100,
	0b00001000, 0b00000010, 0b00001000, 0b00000100, 0b00001010,
	0b00000010, 0b00001100,

	/* < */
	0b00000111, 0b00000000, 0b00000110, 0b00000010, 0b00000100,
	0b00000100, 0b00000010, 0b00000110, 0b00000000, 0b00000010,
	0b00001000, 0b00000100, 0b00001010, 0b00000110, 0b00001100,

	/* = */
	0b00001010, 0b00000000, 0b00000100, 0b00000010, 0b00000100,
	0b00000100, 0b00000100, 0b00000110, 0b00000100, 0b00001000,
	0b00000100, 0b00001000, 0b00001000, 0b00000110, 0b00001000,
	0b00000100, 0b00001000, 0b00000010, 0b00001000, 0b00000000,
	0b00001000,

	/* > */
	0b00000111, 0b00000010, 0b00000000, 0b00000100, 0b00000010,
	0b00000110, 0b00000100, 0b00001000, 0b00000110, 0b00000110,
	0b00001000, 0b00000100, 0b00001010, 0b00000010, 0b00001100,

	/* ? */
	0b00001001, 0b00000000, 0b00000010, 0b00000010, 0b00000000,
	0b00000100, 0b00000000, 0b00000110, 0b00000000, 0b00001000,
	0b00000010, 0b00001000, 0b00000100, 0b00000110, 0b00000110,
	0b00000100, 0b00001000, 0b00000100, 0b00001100,

	/* @ */
	0b00010010, 0b00000000, 0b00000010, 0b00000010, 0b00000000,
	0b00000100, 0b00000000, 0b00000110, 0b00000000, 0b00001000,
	0b00000010, 0b00001000, 0b00000100, 0b00001000, 0b00000110,
	0b00001000, 0b00001000, 0b00001000, 0b00001010, 0b00000110,
	0b00001100, 0b00000100, 0b00001100, 0b00000010, 0b00001100,
	0b00000000, 0b00001010, 0b00000000, 0b00001000, 0b00000010,
	0b00000110, 0b00000100, 0b00000110, 0b00000100, 0b00001000,
	0b00000100, 0b00001010,

	/* A */
	0b00010010, 0b00000000, 0b00000010, 0b00000000, 0b00000100,
	0b00000000, 0b00000110, 0b00000000, 0b00001000, 0b00000000,
	0b00001010, 0b00000000, 0b00001100, 0b00000010, 0b00001000,
	0b00000100, 0b00001000, 0b00000110, 0b00001000, 0b00001000,
	0b00001000, 0b00001000, 0b00000110, 0b00001000, 0b00000100,
	0b00001000, 0b00000010, 0b00000110, 0b00000000, 0b00000100,
	0b00000000, 0b00000010, 0b00000000, 0b00001000, 0b00001010,
	0b00001000, 0b00001100,

	/* B */
	0b00010100, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000010, 0b00001100, 0b00000100, 0b00001100, 0b00000110,
	0b00001100, 0b00001000, 0b00001010, 0b00001000, 0b00001000,
	0b00000110, 0b00000110, 0b00000100, 0b00000110, 0b00000010,
	0b00000110, 0b00000010, 0b00000000, 0b00000100, 0b00000000,
	0b00000110, 0b00000000, 0b00001000, 0b00000010, 0b00001000,
	0b00000100,

	/* C */
	0b00001101, 0b00000000, 0b00000010, 0b00000000, 0b00000100,
	0b00000000, 0b00000110, 0b00000000, 0b00001000, 0b00000000,
	0b00001010, 0b00000010, 0b00001100, 0b00000100, 0b00001100,
	0b00000110, 0b00001100, 0b00001000, 0b00001010, 0b00001000,
	0b00000010, 0b00000110, 0b00000000, 0b00000100, 0b00000000,
	0b00000010, 0b00000000,

	/* D */
	0b00010000, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000010, 0b00001100, 0b00000100, 0b00001100, 0b00000110,
	0b00001010, 0b00001000, 0b00001000, 0b00001000, 0b00000110,
	0b00001000, 0b00000100, 0b00000110, 0b00000010, 0b00000100,
	0b00000000, 0b00000010, 0b00000000,

	/* E */
	0b00010010, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000010, 0b00001100, 0b00000100, 0b00001100, 0b00000110,
	0b00001100, 0b00001000, 0b00001100, 0b00000110, 0b00000110,
	0b00000100, 0b00000110, 0b00000010, 0b00000110, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000,

	/* F */
	0b00001110, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000010, 0b00000110, 0b00000100, 0b00000110, 0b00000110,
	0b00000110, 0b00000110, 0b00000000, 0b00000100, 0b00000000,
	0b00000010, 0b00000000, 0b00001000, 0b00000000,

	/* G */
	0b00010010, 0b00000000, 0b00000010, 0b00000000, 0b00000100,
	0b00000000, 0b00000110, 0b00000000, 0b00001000, 0b00000000,
	0b00001010, 0b00000010, 0b00001100, 0b00000100, 0b00001100,
	0b00000110, 0b00001100, 0b00001000, 0b00001100, 0b00001000,
	0b00001010, 0b00001000, 0b00001000, 0b00001000, 0b00000110,
	0b00000110, 0b00000110, 0b00000100, 0b00000110, 0b00001000,
	0b00000010, 0b00000110, 0b00000000, 0b00000100, 0b00000000,
	0b00000010, 0b00000000,

	/* H */
	0b00010001, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000010, 0b00000110, 0b00000100, 0b00000110, 0b00000110,
	0b00000110, 0b00001000, 0b00000110, 0b00001000, 0b00000100,
	0b00001000, 0b00000010, 0b00001000, 0b00000000, 0b00001000,
	0b00001000, 0b00001000, 0b00001010, 0b00001000, 0b00001100,

	/* I */
	0b00001011, 0b00000010, 0b00000000, 0b00000100, 0b00000000,
	0b00000100, 0b00000010, 0b00000100, 0b00000100, 0b00000100,
	0b00000110, 0b00000100, 0b00001000, 0b00000100, 0b00001010,
	0b00000100, 0b00001100, 0b00000010, 0b00001100, 0b00000110,
	0b00001100, 0b00000110, 0b00000000,

	/* J */
	0b00001011, 0b00000000, 0b00001010, 0b00000010, 0b00001100,
	0b00000100, 0b00001100, 0b00000110, 0b00001010, 0b00000110,
	0b00001000, 0b00000110, 0b00000110, 0b00000110, 0b00000100,
	0b00000110, 0b00000010, 0b00000110, 0b00000000, 0b00000100,
	0b00000000, 0b00001000, 0b00000000,

	/* K */
	0b00001110, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000100, 0b00001000, 0b00000010, 0b00000110, 0b00000100,
	0b00000100, 0b00000110, 0b00000010, 0b00001000, 0b00000000,
	0b00000110, 0b00001010, 0b00001000, 0b00001100,

	/* L */
	0b00001011, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000010, 0b00001100, 0b00000100, 0b00001100, 0b00000110,
	0b00001100, 0b00001000, 0b00001100,

	/* M */
	0b00010010, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000100, 0b00000110, 0b00000100, 0b00000100, 0b00000010,
	0b00000010, 0b00000110, 0b00000010, 0b00001000, 0b00000010,
	0b00001000, 0b00000000, 0b00001000, 0b00000100, 0b00001000,
	0b00000110, 0b00001000, 0b00001000, 0b00001000, 0b00001010,
	0b00001000, 0b00001100,

	/* N */
	0b00010001, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000100, 0b00000110, 0b00000010, 0b00000100, 0b00000110,
	0b00001000, 0b00001000, 0b00001000, 0b00001000, 0b00000110,
	0b00001000, 0b00000100, 0b00001000, 0b00000010, 0b00001000,
	0b00000000, 0b00001000, 0b00001010, 0b00001000, 0b00001100,

	/* O */
	0b00010000, 0b00000000, 0b00000010, 0b00000000, 0b00000100,
	0b00000000, 0b00000110, 0b00000000, 0b00001000, 0b00000000,
	0b00001010, 0b00000010, 0b00001100, 0b00000100, 0b00001100,
	0b00000110, 0b00001100, 0b00001000, 0b00001010, 0b00001000,
	0b00001000, 0b00001000, 0b00000110, 0b00001000, 0b00000100,
	0b00001000, 0b00000010, 0b00000110, 0b00000000, 0b00000100,
	0b00000000, 0b00000010, 0b00000000,

	/* P */
	0b00001111, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000010, 0b00000110, 0b00000100, 0b00000110, 0b00000110,
	0b00000110, 0b00001000, 0b00000100, 0b00001000, 0b00000010,
	0b00000110, 0b00000000, 0b00000100, 0b00000000, 0b00000010,
	0b00000000,

	/* Q */
	0b00010001, 0b00000000, 0b00000010, 0b00000000, 0b00000100,
	0b00000000, 0b00000110, 0b00000000, 0b00001000, 0b00000000,
	0b00001010, 0b00000010, 0b00001100, 0b00000100, 0b00001100,
	0b00000110, 0b00001010, 0b00000100, 0b00001000, 0b00001000,
	0b00001000, 0b00001000, 0b00000110, 0b00001000, 0b00000100,
	0b00001000, 0b00000010, 0b00000110, 0b00000000, 0b00000100,
	0b00000000, 0b00000010, 0b00000000, 0b00001000, 0b00001100,

	/* R */
	0b00010010, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000100, 0b00001000, 0b00000100, 0b00000110, 0b00000010,
	0b00000110, 0b00000110, 0b00000110, 0b00001000, 0b00000100,
	0b00001000, 0b00000010, 0b00000110, 0b00000000, 0b00000100,
	0b00000000, 0b00000010, 0b00000000, 0b00000110, 0b00001010,
	0b00001000, 0b00001100,

	/* S */
	0b00001111, 0b00000000, 0b00000010, 0b00000000, 0b00000100,
	0b00000010, 0b00000110, 0b00000100, 0b00000110, 0b00000110,
	0b00000110, 0b00001000, 0b00001000, 0b00001000, 0b00001010,
	0b00000110, 0b00001100, 0b00000100, 0b00001100, 0b00000010,
	0b00001100, 0b00000000, 0b00001100, 0b00000010, 0b00000000,
	0b00000100, 0b00000000, 0b00000110, 0b00000000, 0b00001000,
	0b00000000,

	/* T */
	0b00001011, 0b00000000, 0b00000000, 0b00000010, 0b00000000,
	0b00000100, 0b00000000, 0b00000100, 0b00000010, 0b00000100,
	0b00000100, 0b00000100, 0b00000110, 0b00000100, 0b00001000,
	0b00000100, 0b00001010, 0b00000100, 0b00001100, 0b00000110,
	0b00000000, 0b00001000, 0b00000000,

	/* U */
	0b00001111, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000010, 0b00001100,
	0b00000100, 0b00001100, 0b00000110, 0b00001100, 0b00001000,
	0b00001010, 0b00001000, 0b00001000, 0b00001000, 0b00000110,
	0b00001000, 0b00000100, 0b00001000, 0b00000010, 0b00001000,
	0b00000000,

	/* V */
	0b00001101, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000010, 0b00001010, 0b00000100, 0b00001100,
	0b00000110, 0b00001010, 0b00001000, 0b00001000, 0b00001000,
	0b00000110, 0b00001000, 0b00000100, 0b00001000, 0b00000010,
	0b00001000, 0b00000000,

	/* W */
	0b00010001, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000010, 0b00001100,
	0b00000100, 0b00001010, 0b00000100, 0b00001000, 0b00000100,
	0b00000110, 0b00001000, 0b00000110, 0b00001000, 0b00000100,
	0b00001000, 0b00000010, 0b00001000, 0b00000000, 0b00001000,
	0b00001000, 0b00001000, 0b00001010, 0b00000110, 0b00001100,

	/* X */
	0b00001101, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000010, 0b00000100, 0b00000100, 0b00000110, 0b00000010,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000110, 0b00001000, 0b00001000, 0b00001010, 0b00001000,
	0b00001100, 0b00000110, 0b00000100, 0b00001000, 0b00000010,
	0b00001000, 0b00000000,

	/* Y */
	0b00001011, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000010, 0b00000110, 0b00000100,
	0b00001000, 0b00000100, 0b00001010, 0b00000100, 0b00001100,
	0b00000110, 0b00000110, 0b00001000, 0b00000100, 0b00001000,
	0b00000010, 0b00001000, 0b00000000,

	/* Z */
	0b00001111, 0b00000000, 0b00000000, 0b00000010, 0b00000000,
	0b00000100, 0b00000000, 0b00000110, 0b00000000, 0b00001000,
	0b00000000, 0b00001000, 0b00000010, 0b00000110, 0b00000100,
	0b00000100, 0b00000110, 0b00000010, 0b00001000, 0b00000000,
	0b00001010, 0b00000000, 0b00001100, 0b00000010, 0b00001100,
	0b00000100, 0b00001100, 0b00000110, 0b00001100, 0b00001000,
	0b00001100,

	/* [ */
	0b00001011, 0b00000010, 0b00000000, 0b00000010, 0b00000010,
	0b00000010, 0b00000100, 0b00000010, 0b00000110, 0b00000010,
	0b00001000, 0b00000010, 0b00001010, 0b00000010, 0b00001100,
	0b00000100, 0b00001100, 0b00000110, 0b00001100, 0b00000110,
	0b00000000, 0b00000100, 0b00000000,

	/* \ */
	0b00000101, 0b00000000, 0b00000010, 0b00000010, 0b00000100,
	0b00000100, 0b00000110, 0b00000110, 0b00001000, 0b00001000,
	0b00001010,

	/* ] */
	0b00001011, 0b00000010, 0b00000000, 0b00000100, 0b00000000,
	0b00000110, 0b00000000, 0b00000110, 0b00000010, 0b00000110,
	0b00000100, 0b00000110, 0b00000110, 0b00000110, 0b00001000,
	0b00000110, 0b00001010, 0b00000110, 0b00001100, 0b00000100,
	0b00001100, 0b00000010, 0b00001100,

	/* ^ */
	0b00000101, 0b00000000, 0b00000100, 0b00000010, 0b00000010,
	0b00000100, 0b00000000, 0b00000110, 0b00000010, 0b00001000,
	0b00000100,

	/* _ */
	0b00000101, 0b00000000, 0b00001100, 0b00000010, 0b00001100,
	0b00000100, 0b00001100, 0b00000110, 0b00001100, 0b00001000,
	0b00001100,

	/* ` */
	0b00000011, 0b00000010, 0b00000000, 0b00000100, 0b00000010,
	0b00000110, 0b00000100,

	/* a */
	0b00001110, 0b00000000, 0b00001010, 0b00000010, 0b00001000,
	0b00000100, 0b00001000, 0b00000110, 0b00001000, 0b00001000,
	0b00001000, 0b00001000, 0b00000110, 0b00000110, 0b00000100,
	0b00000100, 0b00000100, 0b00000010, 0b00000100, 0b00000010,
	0b00001100, 0b00000100, 0b00001100, 0b00000110, 0b00001100,
	0b00001000, 0b00001100, 0b00001000, 0b00001010,

	/* b */
	0b00010000, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000010, 0b00001100, 0b00000100, 0b00001100, 0b00000110,
	0b00001100, 0b00001000, 0b00001010, 0b00001000, 0b00001000,
	0b00001000, 0b00000110, 0b00000110, 0b00000100, 0b00000100,
	0b00000100, 0b00000010, 0b00000110,

	/* c */
	0b00001010, 0b00000000, 0b00000110, 0b00000000, 0b00001000,
	0b00000000, 0b00001010, 0b00000010, 0b00001100, 0b00000100,
	0b00001100, 0b00000110, 0b00001100, 0b00001000, 0b00001010,
	0b00000110, 0b00000100, 0b00000100, 0b00000100, 0b00000010,
	0b00000100,

	/* d */
	0b00010000, 0b00000000, 0b00000110, 0b00000000, 0b00001000,
	0b00000000, 0b00001010, 0b00000010, 0b00001100, 0b00000100,
	0b00001100, 0b00000110, 0b00001100, 0b00001000, 0b00001100,
	0b00001000, 0b00001010, 0b00001000, 0b00001000, 0b00001000,
	0b00000110, 0b00000110, 0b00000110, 0b00000100, 0b00000100,
	0b00000010, 0b00000100, 0b00001000, 0b00000100, 0b00001000,
	0b00000010, 0b00001000, 0b00000000,

	/* e */
	0b00001110, 0b00000000, 0b00000110, 0b00000000, 0b00001000,
	0b00000000, 0b00001010, 0b00000010, 0b00001000, 0b00000100,
	0b00001000, 0b00000110, 0b00001000, 0b00001000, 0b00001000,
	0b00001000, 0b00000110, 0b00000110, 0b00000100, 0b00000100,
	0b00000100, 0b00000010, 0b00000100, 0b00000010, 0b00001100,
	0b00000100, 0b00001100, 0b00000110, 0b00001100,

	/* f */
	0b00001011, 0b00000000, 0b00000110, 0b00000010, 0b00000110,
	0b00000010, 0b00000100, 0b00000010, 0b00000010, 0b00000100,
	0b00000000, 0b00000110, 0b00000000, 0b00001000, 0b00000010,
	0b00000100, 0b00000110, 0b00000010, 0b00001000, 0b00000010,
	0b00001010, 0b00000010, 0b00001100,

	/* g */
	0b00010000, 0b00000000, 0b00000100, 0b00000000, 0b00000110,
	0b00000010, 0b00001000, 0b00000100, 0b00001000, 0b00000110,
	0b00001000, 0b00001000, 0b00001000, 0b00001000, 0b00000110,
	0b00001000, 0b00000100, 0b00001000, 0b00000010, 0b00000110,
	0b00000010, 0b00000100, 0b00000010, 0b00000010, 0b00000010,
	0b00000010, 0b00001100, 0b00000100, 0b00001100, 0b00000110,
	0b00001100, 0b00001000, 0b00001010,

	/* h */
	0b00001110, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000010, 0b00000110, 0b00000100, 0b00000100, 0b00000110,
	0b00000100, 0b00001000, 0b00000110, 0b00001000, 0b00001000,
	0b00001000, 0b00001010, 0b00001000, 0b00001100,

	/* i */
	0b00001001, 0b00000010, 0b00000100, 0b00000100, 0b00000100,
	0b00000100, 0b00000110, 0b00000100, 0b00001000, 0b00000100,
	0b00001010, 0b00000100, 0b00001100, 0b00000010, 0b00001100,
	0b00000110, 0b00001100, 0b00000100, 0b00000000,

	/* j */
	0b00001001, 0b00000000, 0b00001010, 0b00000010, 0b00001100,
	0b00000100, 0b00001100, 0b00000110, 0b00001010, 0b00000110,
	0b00001000, 0b00000110, 0b00000110, 0b00000110, 0b00000100,
	0b00000100, 0b00000100, 0b00000110, 0b00000000,

	/* k */
	0b00001100, 0b00000000, 0b00000000, 0b00000000, 0b00000010,
	0b00000000, 0b00000100, 0b00000000, 0b00000110, 0b00000000,
	0b00001000, 0b00000000, 0b00001010, 0b00000000, 0b00001100,
	0b00000010, 0b00001000, 0b00000100, 0b00000110, 0b00000110,
	0b00000100, 0b00000100, 0b00001010, 0b00000110, 0b00001100,

	/* l */
	0b00001010, 0b00000010, 0b00000000, 0b00000100, 0b00000000,
	0b00000100, 0b00000010, 0b00000100, 0b00000100, 0b00000100,
	0b00000110, 0b00000100, 0b00001000, 0b00000100, 0b00001010,
	0b00000100, 0b00001100, 0b00000010, 0b00001100, 0b00000110,
	0b00001100,

	/* m */
	0b00001101, 0b00000000, 0b00000100, 0b00000000, 0b00000110,
	0b00000000, 0b00001000, 0b00000000, 0b00001010, 0b00000000,
	0b00001100, 0b00000100, 0b00001000, 0b00000100, 0b00000110,
	0b00000010, 0b00000100, 0b00000110, 0b00000100, 0b00001000,
	0b00000110, 0b00001000, 0b00001000, 0b00001000, 0b00001010,
	0b00001000, 0b00001100,

	/* n */
	0b00001100, 0b00000000, 0b00000100, 0b00000000, 0b00000110,
	0b00000000, 0b00001000, 0b00000000, 0b00001010, 0b00000000,
	0b00001100, 0b00000010, 0b00000110, 0b00000100, 0b00000100,
	0b00000110, 0b00000100, 0b00001000, 0b00000110, 0b00001000,
	0b00001000, 0b00001000, 0b00001010, 0b00001000, 0b00001100,

	/* o */
	0b00001100, 0b00000000, 0b00000110, 0b00000000, 0b00001000,
	0b00000000, 0b00001010, 0b00000010, 0b00001100, 0b00000100,
	0b00001100, 0b00000110, 0b00001100, 0b00001000, 0b00001010,
	0b00001000, 0b00001000, 0b00001000, 0b00000110, 0b00000110,
	0b00000100, 0b00000100, 0b00000100, 0b00000010, 0b00000100,

	/* p */
	0b00001100, 0b00000000, 0b00000100, 0b00000000, 0b00000110,
	0b00000000, 0b00001000, 0b00000000, 0b00001010, 0b00000000,
	0b00001100, 0b00000010, 0b00001000, 0b00000100, 0b00001000,
	0b00000110, 0b00001000, 0b00001000, 0b00000110, 0b00000110,
	0b00000100, 0b00000100, 0b00000100, 0b00000010, 0b00000100,

	/* q */
	0b00001100, 0b00000000, 0b00000110, 0b00000010, 0b00000100,
	0b00000100, 0b00000100, 0b00000110, 0b00000110, 0b00000110,
	0b00001000, 0b00000100, 0b00001000, 0b00000010, 0b00001000,
	0b00001000, 0b00001000, 0b00001000, 0b00000110, 0b00001000,
	0b00000100, 0b00001000, 0b00001010, 0b00001000, 0b00001100,

	/* r */
	0b00001001, 0b00000000, 0b00000100, 0b00000000, 0b00000110,
	0b00000000, 0b00001000, 0b00000000, 0b00001010, 0b00000000,
	0b00001100, 0b00000010, 0b00000110, 0b00000100, 0b00000100,
	0b00000110, 0b00000100, 0b00001000, 0b00000110,

	/* s */
	0b00001100, 0b00000000, 0b00000110, 0b00000010, 0b00000100,
	0b00000100, 0b00000100, 0b00000110, 0b00000100, 0b00000110,
	0b00001000, 0b00000100, 0b00001000, 0b00000010, 0b00001000,
	0b00000010, 0b00001100, 0b00000000, 0b00001100, 0b00000100,
	0b00001100, 0b00000110, 0b00001100, 0b00001000, 0b00001010,

	/* t */
	0b00001011, 0b00000000, 0b00000100, 0b00000010, 0b00000100,
	0b00000010, 0b00000010, 0b00000010, 0b00000000, 0b00000100,
	0b00000100, 0b00000010, 0b00000110, 0b00000010, 0b00001000,
	0b00000010, 0b00001010, 0b00000100, 0b00001100, 0b00000110,
	0b00001100, 0b00001000, 0b00001010,

	/* u */
	0b00001100, 0b00000000, 0b00000100, 0b00000000, 0b00000110,
	0b00000000, 0b00001000, 0b00000000, 0b00001010, 0b00000010,
	0b00001100, 0b00000100, 0b00001100, 0b00000110, 0b00001010,
	0b00001000, 0b00001010, 0b00001000, 0b00001000, 0b00001000,
	0b00000110, 0b00001000, 0b00000100, 0b00001000, 0b00001100,

	/* v */
	0b00001001, 0b00000000, 0b00000100, 0b00000000, 0b00000110,
	0b00000000, 0b00001000, 0b00000010, 0b00001010, 0b00000100,
	0b00001100, 0b00000110, 0b00001010, 0b00001000, 0b00001000,
	0b00001000, 0b00000110, 0b00001000, 0b00000100,

	/* w */
	0b00001100, 0b00000000, 0b00000100, 0b00000000, 0b00000110,
	0b00000000, 0b00001000, 0b00000000, 0b00001010, 0b00000010,
	0b00001100, 0b00000100, 0b00001010, 0b00000100, 0b00001000,
	0b00001000, 0b00001000, 0b00001000, 0b00000110, 0b00001000,
	0b00000100, 0b00001000, 0b00001010, 0b00000110, 0b00001100,

	/* x */
	0b00001001, 0b00000000, 0b00000100, 0b00000010, 0b00000110,
	0b00000100, 0b00001000, 0b00000010, 0b00001010, 0b00000000,
	0b00001100, 0b00000110, 0b00001010, 0b00001000, 0b00001100,
	0b00000110, 0b00000110, 0b00001000, 0b00000100,

	/* y */
	0b00001100, 0b00000000, 0b00000100, 0b00000000, 0b00000110,
	0b00000010, 0b00001000, 0b00000100, 0b00001000, 0b00000110,
	0b00001000, 0b00001000, 0b00001000, 0b00001000, 0b00000110,
	0b00001000, 0b00000100, 0b00001000, 0b00001010, 0b00000110,
	0b00001100, 0b00000100, 0b00001100, 0b00000010, 0b00001100,

	/* z */
	0b00001101, 0b00000000, 0b00000100, 0b00000010, 0b00000100,
	0b00000100, 0b00000100, 0b00000110, 0b00000100, 0b00000110,
	0b00000110, 0b00000100, 0b00001000, 0b00000010, 0b00001010,
	0b00000010, 0b00001100, 0b00000000, 0b00001100, 0b00000100,
	0b00001100, 0b00000110, 0b00001100, 0b00001000, 0b00001100,
	0b00001000, 0b00000100,

/* { */
	0b00000111, 0b00000010, 0b00000110, 0b00000100, 0b00000100,
	0b00000100, 0b00000010, 0b00000110, 0b00000000, 0b00000100,
	0b00001000, 0b00000100, 0b00001010, 0b00000110, 0b00001100,

	/* | */
	0b00000111, 0b00000100, 0b00000000, 0b00000100, 0b00000010,
	0b00000100, 0b00000100, 0b00000100, 0b00000110, 0b00000100,
	0b00001000, 0b00000100, 0b00001010, 0b00000100, 0b00001100,

	/* } */
	0b00000111, 0b00000010, 0b00000000, 0b00000100, 0b00000010,
	0b00000100, 0b00000100, 0b00000110, 0b00000110, 0b00000100,
	0b00001000, 0b00000100, 0b00001010, 0b00000010, 0b00001100,

	/* ~ */
	0b00000101, 0b00000000, 0b00001000, 0b00000010, 0b00000110,
	0b00000100, 0b00000110, 0b00000110, 0b00001000, 0b00001000,
	0b00000110
};

unsigned int CharsPositions[] = {
	0, 1, 14, 27, 68, 103, 130, 161, 170, 185, 200,
	223, 242, 251, 262, 271, 282, 321, 342, 371, 400,
	429, 464, 495, 518, 553, 584, 601, 618, 633, 654,
	669, 688, 725, 762, 803, 830, 863, 900, 929, 966,
	1001, 1024, 1047, 1076, 1099, 1136, 1171, 1204, 1235, 1270,
	1307, 1338, 1361, 1392, 1419, 1454, 1481, 1504, 1535, 1558,
	1569, 1592, 1603, 1614, 1621, 1650, 1683, 1704, 1737, 1766,
	1789, 1822, 1851, 1870, 1889, 1914, 1935, 1962, 1987, 2012,
	2037, 2062, 2081, 2106, 2129, 2154, 2173, 2198, 2217, 2242,
	2269, 2284, 2299, 2314
};


#endif /* FONT_H_ */