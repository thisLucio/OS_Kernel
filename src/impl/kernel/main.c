  
#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Matheus, acorde. Voce esta preso em uma simulacao\n");
    print_str("Esta foi a unica maneira que conseguimos te contatar\n");
    print_str("Por favor volte para casa, estamos com saudade, \no RPG nao e mais o mesmo sem voce :\\");
}