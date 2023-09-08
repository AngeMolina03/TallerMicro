
#ifndef SECUENCIA_H
#define	SECUENCIA_H

#include <xc.h> //reconocer todo lo del microcontrolador

//CONEXIONES donde y como estan conectados (encender o apgar))
#define led1 LATBbits.LATB0
#define led2 LATBbits.LATB1
#define led3 LATBbits.LATB2
#define led4 LATBbits.LATB3
#define led5 LATBbits.LATB4
#define led6 LATBbits.LATB5
#define led7 LATBbits.LATB6
#define led8 LATBbits.LATB7

//NOMBRAR ETIQEUTAS MACROS
#define DIR_led1 TRISBbits.TRISB0
#define DIR_led2 TRISBbits.TRISB1
#define DIR_led3 TRISBbits.TRISB2
#define DIR_led4 TRISBbits.TRISB3
#define DIR_led5 TRISBbits.TRISB4
#define DIR_led6 TRISBbits.TRISB5
#define DIR_led7 TRISBbits.TRISB6
#define DIR_led8 TRISBbits.TRISB7



// DEFINIT MACROS
#define OUT 0
#define IN 1

//iniciar como salidas digitales los leds
void iniciar_leds(void);

//metodo con la secuencia de encendido
void secuencia();


#endif	/* SECUENCIA_H */






