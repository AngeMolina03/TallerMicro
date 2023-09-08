#include <xc.h>
#include "configuracion.h"

#define led PORTCbits.RC0
#define DIR_led TRISCbits.TRISC0

#define boton1 PORTDbits.RD0
#define DIR_boton1 TRISDbits.TRISD0

#define boton2 PORTDbits.RD1
#define DIR_boton2 TRISDbits.TRISD1

char estado_led; //0--> apagado, 1--> encendido

void main(void){
    ANSELDbits.ANSD0 = 0;
    ANSELDbits.ANSD1 = 0;
    DIR_led = 0;    //salida digital
    DIR_boton1 = 1; //entrada digital
    DIR_boton2 = 1; //entrada digital
    led = 0;        //iniciar led apagado
    estado_led = 0; //estado del led inicia en 0 (apagado)
    
    while (1) {
        if (!boton1){        //boton se ponga en estado low al presionarlo
            __delay_ms(60);      //esperar     
            estado_led = !estado_led;
            led = estado_led;
            while(!boton1);
           
        }
        
         if (boton2 == 0){        //boton se ponga en estado low al presionarlo
            __delay_ms(60);      //esperar     
            estado_led = !estado_led;
            led = estado_led;
            while(boton2 == 0);
           
        }
        
       
    }
    return; 
}



