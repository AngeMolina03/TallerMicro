#include "Contador.h"
#include "configuracion.h"

int unidadesA = 0, decenasA = 0;
int unidadesD = 9, decenasD = 9;
char bandera_asc = 0, bandera_desc = 0, bandera_pausa = 0;


//PROGRAMAR METODOS 
void ascendente(){
    
    bandera_asc = 1;
    bandera_desc = 0;
    bandera_pausa = 0;
    //escribir 
    PORTC = decoCC[unidadesA];
    PORTD = decoCC[decenasA];
    
    unidadesA ++;
    if (unidadesA>9){
        unidadesA = 0;
        decenasA ++;
        if (decenasA>9){
            decenasA = 0;
        }
    }
    
    __delay_ms(500);
            
}

void descendente(){
    
    bandera_asc = 0;
    bandera_desc = 1;
    bandera_pausa = 0;
    PORTC = decoCC[unidadesD];
    PORTD = decoCC[decenasD];
    
    unidadesD --;
    if (unidadesD<0){
        unidadesD = 9;
        decenasD --;
        if (decenasD<0){
            decenasD = 9;
        }
    }
    
    __delay_ms(500);
    
}

void pausa(){
    
   
}

void paso_dos(){
    if (bandera_asc == 1){
    PORTC = decoCC[unidadesA];
    PORTD = decoCC[decenasA];
    
    unidadesA +=2;
    if (unidadesA>9){
        unidadesA = 0;
        decenasA ++;
        if (decenasA>9){
            decenasA = 0;
        }
    }
    
    __delay_ms(500);
    }
    
     if (bandera_desc == 1){
    PORTC = decoCC[unidadesD];
    PORTD = decoCC[decenasD];
    
    unidadesD -=2;
    if (unidadesD<0){
        unidadesD = 9;
        decenasD --;
        if (decenasD<0){
            decenasD = 9;
        }
    }
    
    __delay_ms(500);
    }
    
    
}
