#include <xc.h>
#include <pic16f1939.h>
#include "configuracion.h"
#include "Contador.h"



void main(void){
    
    //configurar puertos digitales, el puerto C no tiene ansel
    ANSELD = 0x00; //puerto D como digital
    
    //inicar los 2 7segmentos como salida digitales OUT
    TRISC = 0x00;  //puerto C de salida
    TRISD = 0x00;  //puerto D de salida
    
    //configurar puertos digitales (el puerto B solo 2 pines de entrada digital)
    ANSELBbits.ANSB0 = 0; //pin 0 puerto B digital
    ANSELBbits.ANSB1 = 0; //pin 1 puerto B digital
    
    //iniciar los slider como entradas digitales IN configuracion
    DIR_Slider_1 = 1;
    DIR_Slider_2 = 1;
    
    LATD = 0x00; //iniciar display apagado decenas
    LATC = 0x00; //iniciar display apagado unidades
    
    while(1){
        
        if (Slider_1==1 && Slider_2==1){
            pausa();
        }
        
        if (Slider_1==1 && Slider_2==0){
            ascendente();
        }
        
        if (Slider_1==0 && Slider_2==1){
            descendente();   
        }
        
        if (Slider_1==0 && Slider_2==0){
            paso_dos();  
        }
            
        
    } 
    
    return;
}
