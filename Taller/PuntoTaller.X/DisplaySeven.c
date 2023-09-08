#include "DisplaySeven.h"
#include <stdbool.h>


bool catodo = true;

void display_init(void) {

    DIR_segA = OUT;
    DIR_segB = OUT;
    DIR_segC = OUT;
    DIR_segD = OUT;
    DIR_segE = OUT;
    DIR_segF = OUT;
    DIR_segG = OUT;

}

void display_cc(char dig) {

    switch (dig) {

        case 0:
            segA = segB = segC = segD = segE = segF = catodo;
            segG = ~catodo;
            break;
        case 1:
            segB = segC = catodo;
            segA = segD = segE = segF = segG = ~catodo;
            break;
        case 2:
            segA = segB = segG = segE = segD = catodo;
            segC = segF = ~catodo;
            break;
        case 3:
            segA = segB = segG = segD = segC = catodo;
            segE = segF = ~catodo;
            break;
        case 4:
            segF = segG = segB = segC = catodo;
            segE = segA = segD = ~catodo;
            break;
        case 5:
            segA = segC = segD = segF = segG = catodo;
            segB = segE = ~catodo;
            break;
        case 6:
            segA = segC = segD = segF = segE = segG = catodo;
            segB = ~catodo;
            break;
        case 7:
            segA = segB = segC = catodo;
            segD = segF = segE = segG = ~catodo;
            break;
        case 8:
            segA = segC = segD = segB = segF = segE = segG = catodo;
            break;
        case 9:
            segA = segB = segC = segG = segF = catodo;
            segD = segE = ~catodo;

    }

}

void display_ac(char dig) {

    switch (dig) {

        case 0:
            segA = segB = segC = segD = segE = segF = ~catodo;
            segG = catodo;
            break;
        case 1:
            segB = segC = ~catodo;
            segA = segD = segE = segF = segG = catodo;
            break;
        case 2:
            segA = segB = segG = segE = segD = ~catodo;
            segC = segF = catodo;
            break;
        case 3:
            segA = segB = segG = segD = segC = ~catodo;
            segE = segF = catodo;
            break;
        case 4:
            segF = segG = segB = segC = ~catodo;
            segE = segA = segD = catodo;
            break;
        case 5:
            segA = segC = segD = segF = segG = ~catodo;
            segB = segE = catodo;
            break;
        case 6:
            segA = segC = segD = segF = segE = segG = ~catodo;
            segB = catodo;
            break;
        case 7:
            segA = segB = segC = ~catodo;
            segD = segF = segE = segG = catodo;
            break;
        case 8:
            segA = segC = segD = segB = segF = segE = segG = ~catodo;
            break;
        case 9:
            segA = segB = segC = segG = segF = ~catodo;
            segD = segE = catodo;

    }
}




