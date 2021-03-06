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
    printf("%d\n", BIDORDLIST_consultation(l));                         //Shows if list is empty
    printf("1 if list is empty -> %d\n", BIDORDLIST_empty(l));

    for(i=0; i < 10; i++){                                              //Insert 10 numbers
        BIDORDLIST_insertOrdered(&l, i);
        printf("%d\n", BIDORDLIST_consultation(l));                     //Shows list numbers
    }

    BIDORDLIST_goStart(&l);
    BIDORDLIST_delete(&l);


    BIDORDLIST_destroy(&l);

    return 0;

}

