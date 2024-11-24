#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "heap.h"

void printerMin();
void printerMax();

void selectionMin(int id,int size) {
    int i, j, f;
    int temp;
    char tempw[4];
    int count = 0;

    for (f = 0; f < size; f++){

        for (i = 0; i < size; i++) {

             j = i + 1;

            if (MinArray[i]->data > MinArray[j]->data) {
                temp = MinArray[i]->data;
                strcpy(tempw, MinArray[i]->word);
                MinArray[i]->data = MinArray[j]->data;
                strcpy(MinArray[i]->word,MinArray[j]->word);
                MinArray[j]->data = temp;
                strcpy(MinArray[j]->word,tempw);
            }
            count++;
        }
    }


    printerMin();
}


void selectionMax(int n) {
    int i, j, f, temp;
    int count = 0;
    char tempw[4];

       for (f = 0; f < n; f++){

        for (i = 0; i < n; i++) {

             j = i + 1;

            if (MaxArray[i]->data < MaxArray[j]->data) {

                temp = MaxArray[i]->data;
                strcpy(tempw, MaxArray[i]->word);
                MaxArray[i]->data = MaxArray[j]->data;
                strcpy(MaxArray[i]->word ,MaxArray[j]->word);
                MaxArray[j]->data = temp;
                strcpy(MaxArray[j]->word,tempw);
            }
            count++;
        }
    }
    printerMax();
}



void printerMin(){
    printMinTree();
}


void printerMax(){
    printMaxTree();
}
