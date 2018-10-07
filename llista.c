 /**********************
*
* @ Purpose: Provide a module for main.c file
* @ Author: Omar Ntifi Matarín
* @ Creation date: 7/10/2018
* @ Date of last modification: 7/10/2018
*
***********************/


#include <stdio.h>
#include <stdlib.h>
#include "llista.h"

 BidOrdList BidOrdList_create(){

     BidOrdList l;

     l.start = (Node*)malloc(sizeof(Node));

     if (l.start == NULL){
         printf("Memory error!\n");

     }

     else{
         l.final = (Node*)malloc(sizeof(Node));

         if (l.final == NULL){
             printf("Memory error!\n");
         }

         else{
             l.start->prev = NULL;
             l.start->next = l.final;
             l.final->next = NULL;
             l.final->prev = l.start;
             l.pdi = l.start;

         }

     }

     return l;
 }


 void BIDORDLIST_insertOrdered(BidOrdList *l, int i){

     Node *aux;

     aux = (Node*)malloc(sizeof(Node));

     if(aux == NULL){
         printf("Memory error!\n");
     }

     else{
         aux->i = i;
         l->pdi = l->start;

         while (l->pdi->next != NULL && i > l->pdi->next->i){

            l->pdi = l->pdi->next;
         }

         aux->next = l->pdi->next;
         aux->prev = l->pdi;
     }

 }

 void BIDORDLIST_advance(BidOrdList *l){

     if(l->pdi->next == NULL){
         printf("It has not been possible to advance\n");
     }

     else{

         l->pdi=l->pdi->next;
     }
 }

 void BIDORDLIST_goBack(BidOrdList *l){

     if(l->pdi->prev == NULL) {
         printf("It has not been possible to move back\n");

     }

     else{
         l->pdi = l->pdi->prev;
     }
 }

 void BIDORDLIST_goStart(BidOrdList *l){
     l->pdi = l->start->next;
 }

 void BIDORDLIST_goFinal(BidOrdList *l){

     l->pdi = l->final->prev;
 }

 int BIDORDLIST_consultation(BidOrdList l){

     int k = 0;

     if(l.start->next == l.final) {
         printf("Empty list\n");
     }

     else{
         k = l.pdi->i;
     }
     return k;
 }

 void BIDORDLIST_delete(BidOrdList *l){

     Node *aux;
     if(l->start->next == l->final){

         printf("It has not been possible to delete\n");
     }
     else{

         aux = l->pdi;
         l->pdi->prev->next = l->pdi->next;
         l->pdi->next->prev = l->pdi->prev;
         l->pdi = l->pdi->next;
         free(aux);
     }
 }

 int BIDORDLIST_final(BidOrdList l){

     return l.pdi->next == NULL;
 }

 int BIDORDLIST_empty(BidOrdList l){

     return l.start->next == l.final;
 }

 void BIDORDLIST_destroy(BidOrdList *l){

     Node *aux;

     aux = (Node*)malloc(sizeof(Node));

     if(aux == NULL) {
         printf("It has not been possible to destroy the list\n");
     }

     else{

         while (l->start != NULL) {
             aux= l->start;
             l->start = aux->next;
             free(aux);
         }

         l->final = NULL;
         l->pdi = NULL;
     }
 }