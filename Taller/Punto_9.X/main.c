#include <xc.h>
#include "configuracion.h"

//DIR_BOTON CONFIGURAR
#define DIR_boton1 TRISCbits.TRISC0
#define DIR_boton2 TRISCbits.TRISC1
#define DIR_boton3 TRISCbits.TRISC2
#define DIR_boton4 TRISCbits.TRISC3

#define boton1 PORTCbits.RC0
#define boton2 PORTCbits.RC1
#define boton3 PORTCbits.RC2
#define boton4 PORTCbits.RC3
//DIR_LED CONFIGURAR
#define DIR_led1 TRISDbits.TRISD0
#define DIR_led2 TRISDbits.TRISD1
#define DIR_led3 TRISDbits.TRISD2

#define led1 LATDbits.LATD0
#define led2 LATDbits.LATD1
#define led3 LATDbits.LATD2


void main(void){
    
    //salida
    DIR_boton1 = 1;
    DIR_boton2 = 1;
    DIR_boton3 = 1;
    DIR_boton4 = 1;
    
    //entrada
    DIR_led1 = 0;
    DIR_led2 = 0;
    DIR_led3 = 0;
    
    led1 = 0;
    led2 = 0;
    led3 = 0;
    
    
    while(1){
        while(led1==0 && led2==0 && led3==0){
            if (boton1==0)
                led1=1;
            
            if (boton2==0)
                led2=1;
            
            if (boton3==0)
                led3=1;
            
        }
        if (boton4==0){
            led1 = 0;
            led2 = 0;
            led3 = 0;
        }
        
    }
    
    return;
}
