/**********************
*
* @ Purpose: Create a program that orders numbers from least to greatest through a bidirectional ordered list
* @ Author: Omar Ntifi Matarín
* @ Creation date: 7/10/2018
* @ Date of last modification: 7/10/2018
*

***********************/



#include <stdio.h>
#include <stdlib.h>
#include "llista.h"

int main(){

    int i;
    BidOrdList l;

    l = BidOrdList_create();
    printf("%d\n", BIDORDLIST_consultation(l));

    /*for(i=0; i < 10; i++){
        BIDORDLIST_insertOrdered(&l, i);
    }

    //BIDORDLIST_goStart(&l);

    while(!BIDORDLIST_final(l)){
        printf("%d\n", BIDORDLIST_consultation(l));
        BIDORDLIST_advance(&l);
    }

*/
    return 0;

}

