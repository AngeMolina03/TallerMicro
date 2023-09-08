#include <xc.h>
#include "configuracion.h"

//BOTONES PARA INDICAR EL MOVIMIENTO DEL MOTOR
#define Button_A PORTAbits.RA0
#define Button_B PORTAbits.RA1

#define DIR_Button_A TRISAbits.TRISA0
#define DIR_Button_B TRISAbits.TRISA1

//CONEXION DEL MOTOR
#define MOTOR_A LATDbits.LATD0
#define MOTOR_B LATDbits.LATD1

#define DIR_MOTOR_A TRISDbits.TRISD0
#define DIR_MOTOR_B TRISDbits.TRISD1



void main(void){
    
   //iniciar botones como entradas
    DIR_Button_A = 1;
    DIR_Button_B = 1;
    
    //iniciar motores como salidas
    DIR_MOTOR_A = 0;
    DIR_MOTOR_B = 0;
    
    //configurar el ansel para hacer ambos puertos digitales el A y D
    ANSELA = 0x00;
    ANSELD = 0x00;
   
    while(1){
     
        //funcionamiento del motor
        //girar a la derecha
        do{
            MOTOR_A = 1;
            MOTOR_B = 0;
            
        }while(Button_A==1 && Button_B==0);
        
        //girar a la izquierda
        do{
            MOTOR_A = 0;
            MOTOR_B = 1;
            
        }while(Button_A==0 && Button_B==1);
        
        //frenado
        do{
            MOTOR_A = 0;
            MOTOR_B = 0;
            
        }while(Button_A==Button_B);

        
        
    } 
    
    return;
}

