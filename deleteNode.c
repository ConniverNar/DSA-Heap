#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "heap.h"

void RemoveNode(int index);
void RemoveNode2(int index);

void deleteNode(){

    RemoveNode(0);
    RemoveNode2(0);
}

void RemoveNode(int index){

    int i;
    int origin = 0;
    int replacement = MinArray[treesizeMin]->data;
    char wordReplacement[4];
    strcpy(wordReplacement,MinArray[treesizeMin]->word);


    MinArray[index]->data = replacement; //latest node
    strcpy(MinArray[index]->word,wordReplacement);

    for(i = 0 ; i<=treesizeMin; i++){//latest node
            if (i == treesizeMin){break;}
            if (i>1 && i%2 == 0){
            origin++;}
        }
    free(MinArray[treesizeMin]);

    if (treesizeMin%2 == 0){
            MinArray[origin]->right = NULL;
    }
    else{
            MinArray[origin]->left = NULL;
        }
    treesizeMin = treesizeMin-1;
    return;
}

void RemoveNode2(int index){

    int i;
    int origin = 0;
    int replacement = MaxArray[treesizeMax]->data;
    char wordReplacement[4];

    strcpy(wordReplacement,MaxArray[treesizeMax]->word);
    MaxArray[index]->data = replacement; //latest node
    strcpy(MaxArray[index]->word,wordReplacement);

    for(i = 0 ; i<=treesizeMax; i++){
            if (i == treesizeMax){break;}
            if (i>1 && i%2 == 0){
            origin++;}
        }

    free(MaxArray[treesizeMax]);

    if (treesizeMax%2 == 0){

            MaxArray[origin]->right = NULL;
    }else{
            MaxArray[origin]->left = NULL;
        }
    treesizeMax = treesizeMax-1;
    return;
}
