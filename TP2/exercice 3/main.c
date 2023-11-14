#include <stdio.h>
#include "dessine.h"
#include "graphlib.h"

int main(void) {
    gr_inits_w(10,10,"fenetre");
    set_blue();
    line(1,2,3,4);
    clear_screen();
}
