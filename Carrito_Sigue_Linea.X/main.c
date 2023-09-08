#include <xc.h>
#include "config.h"

//DEFINICION X MACROS
#define MA1 LATDbits.LATD0
#define MA2 LATDbits.LATD1
#define MB1 LATDbits.LATD2
#define MB2 LATDbits.LATD3

#define MA1_DIR TRISDbits.TRISD0
#define MA2_DIR TRISDbits.TRISD1
#define MB1_DIR TRISDbits.TRISD2
#define MB2_DIR TRISDbits.TRISD3

//CONFIGURACIÓN SALIDAS SENSORES
#define SensorIzquierda PORTBbits.RB0
#define SensorCentro PORTBbits.RB1
#define SensorDerecha PORTBbits.RB2

//CONFIGURACIÓN DIRECCIÓN SENSORES
#define SensorIzquierda_DIR TRISBbits.TRISB0
#define SensorCentro_DIR TRISBbits.TRISB1
#define SensorDerecha_DIR TRISBbits.TRISB2

void girar_derecha();
void girar_izquierda();
void avanzar();
void atras();

void main(void) {

    ANSELB = 0x00; //CONFIGURACIÓN PUERTO DIGITAL

    MA1_DIR = 0;
    MA2_DIR = 0;
    MB1_DIR = 0;
    MB2_DIR = 0;
    
    OPTION_REGbits.nWPUEN = 0; //Habilitamos resistencias internas de PULL UP
    WPUB = 0x0F; //habilitando los pines a usar
    
    
    SensorIzquierda_DIR = 1;
    SensorCentro_DIR = 1;
    SensorDerecha_DIR = 1;

    while (1) {

        if (SensorIzquierda == 1) {
            girar_izquierda();
        }
        if (SensorCentro == 1) {
            avanzar();
        }
        if (SensorDerecha == 1) {
            girar_derecha();
        }
        /*
        if ((SensorIzquierda == 0) && (SensorDerecha == 0) && (SensorCentro == 0)) {
            atras();
        }*/

        if ((PORTB & 0x0F) == 15) {
            MA1 = 0;
            MA2 = 0;
            MB1 = 0;
            MB2 = 0;
        }

    }
    return;

}

void girar_derecha() {
    MA1 = 0;
    MA2 = 1;
    MB1 = 0;
    MB2 = 0;
}

void girar_izquierda() {
    MA1 = 0;
    MA2 = 0;
    MB1 = 1;
    MB2 = 0;
}

void avanzar() {
    MA1 = 0;
    MA2 = 1;
    MB1 = 1;
    MB2 = 0;
}
/*
void atras() {
    MA1 = 1;
    MA2 = 0;
    MB1 = 0;
    MB2 = 1;
}*/