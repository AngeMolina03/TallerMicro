
#ifndef DISPLAYSEVEN_H
#define	DISPLAYSEVEN_H

#include <xc.h>
#include "DisplaySeven.h"


#define DIR_segA   TRISCbits.TRISC0
#define DIR_segB   TRISCbits.TRISC1
#define DIR_segC   TRISCbits.TRISC2
#define DIR_segD   TRISCbits.TRISC3
#define DIR_segE   TRISCbits.TRISC4
#define DIR_segF   TRISCbits.TRISC5
#define DIR_segG   TRISCbits.TRISC6



#define segA LATCbits.LATC0
#define segB LATCbits.LATC1
#define segC LATCbits.LATC2
#define segD LATCbits.LATC3
#define segE LATCbits.LATC4
#define segF LATCbits.LATC5
#define segG LATCbits.LATC6


#define OUT 0
#define IN  1



void display_ac  (char dig);
void display_cc  (char dig);
void display_init(void);


#endif	/* DISPLAYSEVEN_H */
