#include <xc.h>
#include <pic16f1939.h>
#include <builtins.h>
#include "configuracion.h"

#define IN PORTBbits.RB0
#define DIR_IN TRISBbits.TRISB0

#define OUT PORTBbits.RB7
#define DIR_OUT TRISBbits.TRISB7

char contador = 0;

void main(void){
    
    ANSELB = 0x00;
    DIR_IN = 1;
    DIR_OUT = 0;
    
   
    while(1){
        //es como tener == 0
        if (!IN){
            while(!IN);
            contador ++;
            
        }
        
        if (contador == 3){
            contador = 0;
            // FORMAS DE NEGAR OUT ^= 1;
            OUT = ~(OUT);
        }

        
        
    } 
    
    return;
}


