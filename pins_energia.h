/*
  ************************************************************************
  *	pins_energia.h
  *
  *	Energia core files for MSP430
  *		Copyright (c) 2012 Robert Wessels. All right reserved.
  *
  *     Contribution: Rei VILO
  *
  ***********************************************************************
  Derived from:
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA
*/
#define __MSP430_HAS_PORT3_R__
#define IOT_SENSOR_NODE
#ifndef Pins_Energia_h
#define Pins_Energia_h
#ifndef BV
#define BV(x) (1 << (x))
#endif

#if defined(__MSP430_HAS_USCI__)
static const uint8_t SS      = 16;  /* P2.4 */
static const uint8_t SCK     = 5;  /* P1.5 */
static const uint8_t MOSI    = 22; /* P1.7 */
static const uint8_t MISO    = 21; /* P1.6 */
static const uint8_t TWISDA  = 22;  /* P1.6 */
static const uint8_t TWISCL  = 21;  /* P1.7 */
static const uint8_t DEBUG_UARTRXD = 1;  /* Receive  Data (RXD) at P1.1 */
static const uint8_t DEBUG_UARTTXD = 2;  /* Transmit Data (TXD) at P1.2 */
#define TWISDA_SET_MODE  (PORT_SELECTION0 | PORT_SELECTION1 /* | INPUT_PULLUP*/) /* do not enable the pull ups for this device */
#define TWISCL_SET_MODE  (PORT_SELECTION0 | PORT_SELECTION1 /* | INPUT_PULLUP*/)
#define DEBUG_UARTRXD_SET_MODE (PORT_SELECTION0 | PORT_SELECTION1 | INPUT)
#define DEBUG_UARTTXD_SET_MODE (PORT_SELECTION0 | PORT_SELECTION1 | OUTPUT)
#define SPISCK_SET_MODE (PORT_SELECTION0 | PORT_SELECTION1)
#define SPIMOSI_SET_MODE (PORT_SELECTION0 | PORT_SELECTION1)
#define SPIMISO_SET_MODE (PORT_SELECTION0 | PORT_SELECTION1)
#endif

#define DEBUG_UART_MODULE_OFFSET 0x0

#if defined(__MSP430_HAS_USI__)
static const uint8_t SS      = 16;  /* P2.4 */
static const uint8_t SCK     = 5;  /* P1.5 */
static const uint8_t MOSI    = 22; /* P1.7 */
static const uint8_t MISO    = 21; /* P1.6 */
static const uint8_t TWISDA  = 22;  /* P1.6 */
static const uint8_t TWISCL  = 21;  /* P1.7 */
static const uint8_t DEBUG_UARTRXD = 1;  /* Receive  Data (RXD) at P1.1 */
static const uint8_t DEBUG_UARTTXD = 2;  /* Transmit Data (TXD) at P1.2 */
#define TWISDA_SET_MODE  (PORT_SELECTION0 | INPUT_PULLUP)
#define TWISCL_SET_MODE  (PORT_SELECTION0 | INPUT_PULLUP)
#define DEBUG_UARTRXD_SET_MODE (PORT_SELECTION0 | INPUT)
#define DEBUG_UARTTXD_SET_MODE (PORT_SELECTION0 | OUTPUT)
#endif

#define DEBUG_UART_MODULE 0x0

static const uint8_t A0  = 31;
static const uint8_t A1  = 1;
static const uint8_t A2  = 2;
static const uint8_t A3  = 3;
static const uint8_t A4  = 4;
static const uint8_t A5  = 5;
static const uint8_t A6  = 21;
static const uint8_t A7  = 22;
static const uint8_t A10 = 128 + 10; // special. This is the internal temp sensor

//                      +-+-+-+-+-+-+-+-+-+
//               VCC   1|                 |20  GND
//         (A0)  P1.0  2|                 |19  XIN
//         (A1)  P1.1  3|                 |18  XOUT
//         (A2)  P1.2  4|                 |17  TEST
//         (A3)  P1.3  5|                 |16  RST#
//         (A4)  P1.4  6|                 |15  P1.7  (A7) (SCL) (MISO) depends on chip
//         (A5)  P1.5  7|                 |14  P1.6  (A6) (SDA) (MOSI)
//               P2.0  8|                 |13  P2.5
//               P2.1  9|                 |12  P2.4
//               P2.2 10|                 |11  P2.3
//                      +-+-+-+-+-+-+-+-+-+
//

// Pin names based on the silkscreen
//
static const uint8_t P1_1 = 1;
static const uint8_t P1_2 = 2;
static const uint8_t P1_3 = 3;
static const uint8_t P1_4 = 4;
static const uint8_t P1_5 = 5;
static const uint8_t P3_1 = 6;
static const uint8_t P3_0 = 7;
static const uint8_t P2_0 = 9;
static const uint8_t P2_1 = 10;
static const uint8_t P2_2 = 11;
static const uint8_t P3_2 = 12;
static const uint8_t P3_3 = 13;
static const uint8_t P3_4 = 14;
static const uint8_t P2_3 = 15;
static const uint8_t P2_4 = 16;
static const uint8_t P2_5 = 17;
static const uint8_t P3_5 = 18;
static const uint8_t P3_6 = 19;
static const uint8_t P3_7 = 20;
static const uint8_t P1_6 = 21;
static const uint8_t P1_7 = 22;
static const uint8_t P2_7 = 25;
static const uint8_t P2_6 = 26;
static const uint8_t P1_0 = 31;

static const uint8_t RED_LED = 25;
static const uint8_t GREEN_LED = 26;

#define PIN_MOSI  P1_7
#define PIN_MISO  P1_6
#define PIN_CLK	  P1_5
#define PIN_CE	  P3_5
#define PIN_nCS	  P3_6
#define PIN_IRQ   P2_5

#define PIN_SCL   P1_3
#define PIN_SDA   P3_1

#define BATTERY_ADC A0

static const uint8_t TEMPSENSOR = 10; // depends on chip


#ifdef ARDUINO_MAIN

const uint16_t port_to_input[] = {
	NOT_A_PORT,
	(uint16_t) &P1IN,
	(uint16_t) &P2IN,
#ifdef __MSP430_HAS_PORT3_R__
	(uint16_t) &P3IN,
#endif
};

const uint16_t port_to_output[] = {
	NOT_A_PORT,
	(uint16_t) &P1OUT,
	(uint16_t) &P2OUT,
#ifdef __MSP430_HAS_PORT3_R__
	(uint16_t) &P3OUT,
#endif
};

const uint16_t port_to_dir[] = {
	NOT_A_PORT,
	(uint16_t) &P1DIR,
	(uint16_t) &P2DIR,
#ifdef __MSP430_HAS_PORT3_R__
	(uint16_t) &P3DIR,
#endif
};

const uint16_t port_to_ren[] = {
	NOT_A_PORT,
	(uint16_t) &P1REN,
	(uint16_t) &P2REN,
#ifdef __MSP430_HAS_PORT3_R__
	(uint16_t) &P3REN,
#endif
};

const uint16_t port_to_sel0[] = {  /* put this PxSEL register under the group of PxSEL0 */
	NOT_A_PORT,
	(uint16_t) &P1SEL,
	(uint16_t) &P2SEL,
#ifdef __MSP430_HAS_PORT3_R__
	(uint16_t) &P3SEL,
#endif
};

const uint16_t port_to_sel2[] = {
	NOT_A_PORT,
#ifdef P1SEL2_
	(uint16_t) &P1SEL2,
#else
        NOT_A_PORT,
#endif
#ifdef P2SEL2_
	(uint16_t) &P2SEL2,
#else 
        NOT_A_PORT,
#endif
#ifdef P3SEL2_
	(uint16_t) &P3SEL2,
#else
        NOT_A_PORT,
#endif
};


/* 
 * Defines for devices with 2x TA3 timers (e.g. MSP430g2553). On the 20pin devices, upto 3 analog outputs are available
 * T0A1, T1A1 and T1A2 
 */
const uint8_t digital_pin_to_timer[] = {
	NOT_ON_TIMER, /*  dummy */
	NOT_ON_TIMER, /*  1 - VCC */
	NOT_ON_TIMER, /*  2 - P1.0 */
	T0A0,         /*  3 - P1.1, note: A0 output cannot be used with analogWrite */
	T0A1,         /*  4 - P1.2 */
	NOT_ON_TIMER, /*  5 - P1.3 */
	NOT_ON_TIMER, /*  6 - P1.4 note: special case. Leaving as no timer due to difficulty determining if available */
	T0A0,         /*  7 - P1.5 note: A0 output cannot be used with analogWrite  */
#if defined(__MSP430_HAS_T1A3__) 
	T1A0,         /*  8 - P2.0 note: A0 output cannot be used with analogWrite */
	T1A1,         /*  9 - P2.1 */
	T1A1,         /* 10 - P2.2 */
	T1A0,         /* 11 - P2.3 note: A0 output cannot be used with analogWrite  */
	T1A2,         /* 12 - P2.4 */
	T1A2,         /* 13 - P2.5 */
#else
	NOT_ON_TIMER, /*  8 - P2.0 */
	NOT_ON_TIMER, /*  9 - P2.1 */
	NOT_ON_TIMER, /* 10 - P2.3 */
	NOT_ON_TIMER, /* 11 - P2.4 */
	NOT_ON_TIMER, /* 12 - P2.5 */
	NOT_ON_TIMER, /* 13 - P2.6 */
#endif
	T0A1,         /* 14 - P1.6 */
	NOT_ON_TIMER, /* 15 - P1.7 */
	NOT_ON_TIMER, /* 16 - /RESET */  
	NOT_ON_TIMER, /* 17 - TEST */  
	NOT_ON_TIMER, /* 18 - XOUT - P2.7 */
	T0A1,         /* 19 - XIN - P2.6: */
	NOT_ON_TIMER, /* 20 - GND */
};

const uint8_t digital_pin_to_port[] = {
	NOT_A_PIN, /* dummy */
	P1, /* 1 */
	P1, /* 2 */
	P1, /* 3 */
	P1, /* 4 */
	P1, /* 5 */
	P3, /* 6 */
	P3, /* 7 */
	NOT_A_PIN, /* 8 */
	P2, /* 9 */
	P2, /* 10 */
	P2, /* 11 */
	P3, /* 12 */
	P3, /* 13 */
	P3, /* 14 */
	P2, /* 15 */
	P2, /* 16 */
	P2, /* 17 */
	P3, /* 18 */
	P3, /* 19 */
	P3, /* 20 */
	P1, /* 21 */
	P1, /* 22 */
	NOT_A_PIN, /* 23 */
	NOT_A_PIN, /* 24 */
	P2, /* 25 */
	P2, /* 26 */
	NOT_A_PIN, /* 27 */
	NOT_A_PIN, /* 28 */
	NOT_A_PIN, /* 29 */
	NOT_A_PIN, /* 30 */
	P1, /* 31 */
	NOT_A_PIN, /* 32 */
};

const uint8_t digital_pin_to_bit_mask[] = {
	NOT_A_PIN, /* 0,  pin count starts at 1 */
	BV(1),     /* 1,  P1.1 */
	BV(2),     /* 2,  port P1.2 */
	BV(3),     /* 3,  port P1.3 */
	BV(4),     /* 4,  port P1.4 */
	BV(5),     /* 5,  port P1.5 */
	BV(1),     /* 6,  port P3.1 */
	BV(0),     /* 7,  port P3.0 */
	NOT_A_PIN, /* 8,  NC */
	BV(0),     /* 9,  port P2.0 */
	BV(1),     /* 10, port P2.1 */
	BV(2),     /* 11, port P2.2 */
	BV(2),     /* 12, port P3.2 */
	BV(3),     /* 13, port P3.3 */
	BV(4),     /* 14, port P3.4 */
	BV(3),     /* 15, port P2.3 */
	BV(4), /* 16, P2.4 */
	BV(5), /* 17, P2.5 */
	BV(5),     /* 18, P3.5 */
	BV(6),     /* 19, P3.6 */
	BV(7),     /* 20, P3.7 */
	BV(6),     /* 21, P1.6 */
	BV(7),     /* 22, P1.7 */
	NOT_A_PIN, /* 23, RST */
	NOT_A_PIN, /* 24, TEST */
	BV(7),     /* 25, P2.7 */
	BV(6),     /* 26, P2.6 */
	NOT_A_PIN, /* 27, GND */
	NOT_A_PIN, /* 28, GND */
	NOT_A_PIN, /* 29, VCC */
	NOT_A_PIN, /* 30, VCC */
	BV(0),     /* 31, P1.0 */
	NOT_A_PIN, /* 32, NC */
};
const uint32_t digital_pin_to_analog_in[] = {
        NOT_ON_ADC,     /* 0,  pin count starts at 1 */
        1,     			/* 1,  A1 */
        2,				/* 2,  A2 */
        3,     			/* 3,  A3 */
        4, 				/* 4,  A4 */
        5, 				/* 5,  A5 */
        NOT_ON_ADC, 	/* 6,  port P3.1 */
        NOT_ON_ADC,   	/* 7,  port P3.0 */
        NOT_ON_ADC, 	/* 8,  NC */
        NOT_ON_ADC, 	/* 9,  port P2.0 */
        NOT_ON_ADC, 	/* 10, port P2.1 */
        NOT_ON_ADC, 	/* 11, port P2.2 */
        NOT_ON_ADC, 	/* 12, port P3.2 */
        NOT_ON_ADC, 	/* 13, port P3.3 */
        NOT_ON_ADC,     /* 14, port P3.4 */
        NOT_ON_ADC,     /* 15, port P2.3 */
        NOT_ON_ADC, 	/* 16, P2.4 */
        NOT_ON_ADC,     /* 17, P2.5 */
        NOT_ON_ADC, 	/* 18, P3.5 */
        NOT_ON_ADC,     /* 19, P3.6 */
        NOT_ON_ADC,  	/* 20, P3.7 */
        6,  	        /* 21, A6 */
        7,              /* 22, A7 */
        NOT_ON_ADC,  	/* 23, RST */
        NOT_ON_ADC,  	/* 24, TEST */
        NOT_ON_ADC,  	/* 25, P2.7 */
        NOT_ON_ADC,  	/* 26, P2.6 */
        NOT_ON_ADC,  	/* 27, GND */
        NOT_ON_ADC,  	/* 28, GND */
        NOT_ON_ADC,  	/* 29, VCC */
        NOT_ON_ADC,  	/* 30, VCC */
        0,  			/* 31, A0 */
        NOT_ON_ADC  	/* 32, NC */
};

#endif
#endif
