
/**********************
*
* @ Purpose: Provide a library for llista.c file
* @ Author: Omar Ntifi Matarín
* @ Creation date: 7/10/2018
* @ Date of last modification: 7/10/2018
*
***********************/



#include <studio.h>

typedef struct n {
    int i;
    struct n *next;
    struct n *prev;
}Node;

typedef struct {
    Node *start;
    Node *final;
    Node *pdi;
}BidOrdList;

BidOrdList BidOrdList_create();

void BIDORDLIST_insertOrdered(BidOrdList *l, int i);

int BIDORDLIST_consultation(BidOrdList l);

void BIDORDLIST_advance(BidOrdList *l);

void BIDORDLIST_goBack(BidOrdList *l);

void BIDORDLIST_goStart(BidOrdList *l);

void BIDORDLIST_goFinal(BidOrdList *l);

void BIDORDLIST_delete(BidOrdList *l);

int BIDORDLIST_final(BidOrdList l);

int BIDORDLIST_empty(BidOrdList l);

void BIDORDLIST_destroy(BidOrdList *l);