//MASACARAS DE BITS

#include <xc.h>
#include "configuracion.h"

void main(void){
    ANSELB = 0x00; //configurar pines analogicos como solo digitales
    TRISB = 0x00;  //puerto D todo de salida
    LATB = 0x00;   //empiezan apagados
    
    //LATB &= ~((1<<2)|(1<<0)|(1<<1));
   
    while(1){
        
        for(char i=0 ; i<8 ; i++){    
        __delay_ms(500); 
        LATB |= (1<<i);
        LATB &= ~(1<<i-1);
        }
        
        for (char i=8; i>0; i--) {
        __delay_ms(500); 
        LATB &= ~(1<<i);
        LATB |= (1<<i-1);
        
        }

        
        
    } 
    
    return;
}
