#include "secuencias.h"
#include "configuracion.h"
#include <xc.h>


//desarrollo de los metodos
void secuencia_0() {
    LATD = 0x0F;
    __delay_ms(500);
    LATD = 0xF0;
    __delay_ms(500);
}

void secuencia_1() {
    LATD = 0b10101010;
    __delay_ms(500);
    LATD = 0b01010101;
    __delay_ms(500);
}

void secuencia_2() {
    LATD = 0b10000001;
    __delay_ms(500);
    LATD = 0b11000011;
    __delay_ms(500);
    LATD = 0b11100111;
    __delay_ms(500);
    LATD = 0b11111111;
    __delay_ms(500);
}

void secuencia_3(){
    LATD = 0b1100110011;
    __delay_ms(500);
    LATD = 0b1100110011;
    __delay_ms(500);
}

void secuencia_4(){
    LATD = 0xFF;
    __delay_ms(500);
    LATD = 0x00;
    __delay_ms(500);
}

void secuencia_5(){
    LATD = 0b00000001;
    __delay_ms(500);
    LATD = 0b10000000;
    __delay_ms(500);
}

void secuencia_6(){
     LATD = 0b11100000;
    __delay_ms(500);
    LATD = 0b00000111;
    __delay_ms(500);
     LATD = 0b00011000;
    __delay_ms(500);
    LATD = 0b10000001;
    __delay_ms(500);
}

void secuencia_7(){
     LATD = 0b00000001;
    __delay_ms(500);
    LATD = 0b00000011;
    __delay_ms(500);
     LATD = 0b00000111;
    __delay_ms(500);
    LATD = 0b00001111;
    __delay_ms(500);
    
}

void secuencia_8(){
    LATD = 0b11111110;
    __delay_ms(500);
    LATD = 0b00000001;
    __delay_ms(500);
     LATD = 0b11110000;
    __delay_ms(500);
    LATD = 0b00001111;
    __delay_ms(500);  
}
