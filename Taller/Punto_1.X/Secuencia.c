#include <builtins.h>
#include "configuracion.h"

#include "Secuencia.h"

//programar metodos

//iniciar como salidas los leds
void iniciar_leds(void){
    
    DIR_led1 = OUT;
    DIR_led2 = OUT;
    DIR_led3 = OUT;
    DIR_led4 = OUT;
    DIR_led5 = OUT;
    DIR_led6 = OUT;
    DIR_led7 = OUT;
    DIR_led8 = OUT;
          
}

void secuencia(){
    led1=1;
    led2=0;
    led3=0;
    led4=0;
    led5=0;
    led6=0;
    led7=0;
    led8=0;
    __delay_ms(500);
    
    led1=0;
    led2=1;
    led3=0;
    led4=0;
    led5=0;
    led6=0;
    led7=0;
    led8=0;
    __delay_ms(500);
    
    led1=0;
    led2=0;
    led3=1;
    led4=0;
    led5=0;
    led6=0;
    led7=0;
    led8=0;
    __delay_ms(500);
    
    led1=0;
    led2=0;
    led3=0;
    led4=1;
    led5=0;
    led6=0;
    led7=0;
    led8=0;
    __delay_ms(500);
    
    led1=0;
    led2=0;
    led3=0;
    led4=0;
    led5=1;
    led6=0;
    led7=0;
    led8=0;
    __delay_ms(500);
    
    led1=0;
    led2=0;
    led3=0;
    led4=0;
    led5=0;
    led6=1;
    led7=0;
    led8=0;
    __delay_ms(500);
    
    led1=0;
    led2=0;
    led3=0;
    led4=0;
    led5=0;
    led6=0;
    led7=1;
    led8=0;
    __delay_ms(500);
    
    led1=0;
    led2=0;
    led3=0;
    led4=0;
    led5=0;
    led6=0;
    led7=0;
    led8=1;
    __delay_ms(500);
    
     led1=0;
    led2=0;
    led3=0;
    led4=0;
    led5=0;
    led6=0;
    led7=1;
    led8=0;
    __delay_ms(500);
    
    led1=0;
    led2=0;
    led3=0;
    led4=0;
    led5=0;
    led6=1;
    led7=0;
    led8=0;
    __delay_ms(500);
    
     led1=0;
    led2=0;
    led3=0;
    led4=0;
    led5=1;
    led6=0;
    led7=0;
    led8=0;
    __delay_ms(500);
    
    led1=0;
    led2=0;
    led3=0;
    led4=1;
    led5=0;
    led6=0;
    led7=0;
    led8=0;
    __delay_ms(500);
    
     led1=0;
    led2=0;
    led3=1;
    led4=0;
    led5=0;
    led6=0;
    led7=0;
    led8=0;
    __delay_ms(500);
     
    led1=0;
    led2=1;
    led3=0;
    led4=0;
    led5=0;
    led6=0;
    led7=0;
    led8=0;
    __delay_ms(500);
    
      led1=1;
    led2=0;
    led3=0;
    led4=0;
    led5=0;
    led6=0;
    led7=0;
    led8=0;
    __delay_ms(500);
}



  

