#include <xc.h>
#include "config.h"
#include <stdbool.h>
#include "DisplaySeven.h"


//Sentencia para configurar

#define APAGAR    PORTBbits.RB0
#define ENCENDER  PORTBbits.RB1
#define SEL_MAS   PORTBbits.RB2
#define SEL_MENOS PORTBbits.RB3

//Sentecia para leer
#define BTN_APAGAR    TRISBbits.TRISB0
#define BTN_ENCENDER  TRISBbits.TRISB1
#define BTN_SEL_MAS   TRISBbits.TRISB2
#define BTN_SEL_MENOS TRISBbits.TRISB3

signed char cont;
char Nbb1, Nbb2;
int decena, unidad;


//punto11

void punto11() {
    if (!APAGAR) {
        LATD = 0x00;
    }

    if (!ENCENDER) {
        LATD = 0x00;
        __delay_ms(50);
        LATD = (1 << cont);
    }

    if (!SEL_MAS) {
        cont++;
        LATD = 0x00;
    }
    while (!SEL_MAS);

    if (!SEL_MENOS) {
        cont--;
        LATD = 0x00;
    }
    while (!SEL_MENOS);

    if (cont > 7) {
        cont = 0;
        LATD = 0x00;
    }

    if (cont < 0) {
        cont = 7;
        LATD = 0x00;
    }
    display_cc(cont);
    __delay_ms(200);

}

void set_up() {

    // configuracion de resistencias pull up

    OPTION_REGbits.nWPUEN = 0;
    WPUB = 0xFF;

    //configuracion de los botones de entrada
    TRISB = 0xFF;
    PORTB = 0xFF;
    ANSELB = 0x00;

    //configurar los puertos D y C como salida
    TRISD = TRISC = PORTD = PORTC = 0x00;

    //configurar los puertos A
    TRISA = 0xFF;
    TRISAbits.TRISA4 = 0;
    TRISAbits.TRISA5 = 0;
    ANSELA = 0x00;


    //display 7 segmentos
    display_init();


}

void displayUD(int aux) {
    decena = aux / 10;
    unidad = aux % 10;
    display_cc(unidad);
    __delay_ms(500);

    LATAbits.LATA4 = 1;
    LATAbits.LATA5 = 0;

    __delay_ms(500);
    display_cc(decena);

    LATAbits.LATA4 = 0;
    LATAbits.LATA5 = 1;

}

void punto12() {
    Nbb1 = (PORTB & 0x0F);
    Nbb2 = ((PORTB & 0xF0) >> 4);

    if (PORTAbits.RA1) {
        displayUD(Nbb1 + Nbb2);
        LATD = Nbb1 + Nbb2;
    }
    if (PORTAbits.RA2) {
        displayUD(Nbb1 * Nbb2);
        LATD = Nbb1*Nbb2;
    }
    if (PORTAbits.RA3) {
        displayUD(Nbb1 / Nbb2);
        LATD = Nbb1 / Nbb2;
    }

    __delay_ms(200);
}

void loop() {


    while (1) {

        //punto11();
        punto12();
    }

}

void main(void) {

    set_up();
    loop();

    return;
}

