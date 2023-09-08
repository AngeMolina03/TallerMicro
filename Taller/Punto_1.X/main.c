#include <xc.h>
#include "configuracion.h"
#include "Secuencia.h"



void main(void){
  
    ANSELB = 0x00;  //configurar pines analogicos como solo digitales
    iniciar_leds(); //iniciar leds como salidas digitales
   
    while(1){
       secuencia();  
    } 
    
    return; 
}


