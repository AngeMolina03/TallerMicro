#include <xc.h>
#include "configuracion.h"

void semaforo(void) {
    TRISA = 0x00;
    ANSELA = 0x00;
    ANSELB = 0x00;
    TRISB = 0x00;
 //   TRISBbits.TRISB0 = 0;
  //  PORTBbits.RB0 = 0;
   // TRISBbits.TRISB1 = 0;
   // PORTBbits.RB1 = 0;
  //  TRISBbits.TRISB2 = 0;
   // PORTBbits.RB2 = 0;
    LATAbits.LATA0 = 0;
    LATAbits.LATA1 = 0;
    LATAbits.LATA2 = 0;
    LATAbits.LATA3 = 0;
    LATAbits.LATA4 = 0;
    LATAbits.LATA5 = 0;
    LATBbits.LATB0 = 0;
    LATBbits.LATB1 = 0;
    LATBbits.LATB2 = 0;
    
    

    LATAbits.LATA0 = 0;
    LATAbits.LATA1 = 0;//VERDE
    LATAbits.LATA2 = 1;
    
    LATAbits.LATA3 = 1;
    LATAbits.LATA4 = 0;//ROJO
    LATAbits.LATA5 = 0;
    
    LATBbits.LATB0 = 1;
    LATBbits.LATB1 = 0;//ROJO
    LATBbits.LATB2 = 0;

    __delay_ms(5000);

    LATAbits.LATA0 = 0;
    LATAbits.LATA1 = 1;//AMARILLO
    LATAbits.LATA2 = 0;
    
    LATAbits.LATA3 = 0;
    LATAbits.LATA4 = 1;//AMARILLO
    LATAbits.LATA5 = 0;
    
    LATBbits.LATB0 = 1;
    LATBbits.LATB1 = 0;//ROJO
    LATBbits.LATB2 = 0;

    __delay_ms(5000);

    LATAbits.LATA0 = 1;
    LATAbits.LATA1 = 0;//ROJO
    LATAbits.LATA2 = 0;
    
    LATAbits.LATA3 = 0;
    LATAbits.LATA4 = 0;//VERDE
    LATAbits.LATA5 = 1;
    
    LATBbits.LATB0 = 1;
    LATBbits.LATB1 = 0;//ROJO
    LATBbits.LATB2 = 0;

    __delay_ms(5000);
    
    LATAbits.LATA0 = 1;
    LATAbits.LATA1 = 0;//ROJO
    LATAbits.LATA2 = 0;
  
    LATAbits.LATA3 = 0;
    LATAbits.LATA4 = 1;//AMARILLO
    LATAbits.LATA5 = 0;
    
    LATBbits.LATB0 = 0;
    LATBbits.LATB1 = 1; //AMARILLO
    LATBbits.LATB2 = 0;
    
     __delay_ms(5000);
    
    LATAbits.LATA0 = 1;
    LATAbits.LATA1 = 0;//ROJO
    LATAbits.LATA2 = 0;
    
    LATAbits.LATA3 = 1;
    LATAbits.LATA4 = 0;//ROJO
    LATAbits.LATA5 = 0;
    
    LATBbits.LATB0 = 0;
    LATBbits.LATB1 = 0;//VERDE
    LATBbits.LATB2 = 1;
    
    __delay_ms(5000);
    
    LATAbits.LATA0 = 0;
    LATAbits.LATA1 = 1;//AMARILLO
    LATAbits.LATA2 = 0;
    
    LATAbits.LATA3 = 1;
    LATAbits.LATA4 = 0;//ROJO
    LATAbits.LATA5 = 0;
    
    LATBbits.LATB0 = 0;
    LATBbits.LATB1 = 1;//AMARILLO
    LATBbits.LATB2 = 0;
    
    __delay_ms(5000);
    
}

   void main(void){
 
    TRISD = 0x00; 

    //LOOP INFINITO
    while(1){
      //  prendase();
        semaforo();
        
    }
    
    return;
}
