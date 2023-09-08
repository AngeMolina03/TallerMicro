#ifndef CONTADOR_H
#define	CONTADOR_H
#include <xc.h>

//MACROS
//configuracion slider de entrada
#define DIR_Slider_1 TRISBbits.TRISB0
#define DIR_Slider_2 TRISBbits.TRISB1
//conexion para leer los slider
#define Slider_1 PORTBbits.RB0
#define Slider_2 PORTBbits.RB1

//definir a que puerto esta conectado cada segmento (decenas)
#define seg_A1 LATDbits.LATD0
#define seg_B1 LATDbits.LATD1
#define seg_C1 LATDbits.LATD2
#define seg_D1 LATDbits.LATD3
#define seg_E1 LATDbits.LATD4
#define seg_F1 LATDbits.LATD5
#define seg_G1 LATDbits.LATD6

//definir a que puerto esta conectado cada segmento (unidades)
#define seg_A2 LATCbits.LATC0
#define seg_B2 LATCbits.LATC1
#define seg_C2 LATCbits.LATC2
#define seg_D2 LATCbits.LATC3
#define seg_E2 LATCbits.LATC4
#define seg_F2 LATCbits.LATC5
#define seg_G2 LATCbits.LATC6


//METODOS
void ascendente();
void descendente();
void pausa();
void paso_dos();

// Variables
// numero en binario que enciende cada segemento del display 7 segments --> desde el A hasta el G
char decoCC[10]={191,134,219,207,230,237,253,135,255,231};




#endif	/* CONTADOR_H */

