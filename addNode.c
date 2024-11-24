#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "heap.h"

struct Node* createNodeInsert(const char *words,int value);

void insertMin(const char *word,int val){
    treesizeMin++;
    int maxValue = MinArray[treesizeMin-1]->data;

    treeNode* nodetemp = createNodeInsert(word,val);
    MinArray[treesizeMin] = nodetemp;

    if (MinArray[currentVertex]->left == NULL){MinArray[currentVertex]->left = MinArray[treesizeMin];}
    else if (MinArray[currentVertex]->right == NULL){MinArray[currentVertex]->right = MinArray[treesizeMin];}

    if(treesizeMin%2 == 0){currentVertex++;}

    if(val < maxValue){
        selectionMin(1,treesizeMin);
        }
    else{printMinTree();}
}

void insertMax(const char *word,int val){

    treesizeMax++;
    int maxValue = MaxArray[treesizeMax-1]->data;

    treeNode* nodetemp = createNodeInsert(word,val);
    MaxArray[treesizeMax] = nodetemp;

    if (MaxArray[currentVertex2]->left == NULL){MaxArray[currentVertex2]->left = MaxArray[treesizeMax];}
    else if (MaxArray[currentVertex2]->right == NULL){MaxArray[currentVertex2]->right = MaxArray[treesizeMax];}

    if(treesizeMax%2 == 0){currentVertex2++;}

    if(val > maxValue){
        selectionMax(treesizeMax);
        }
    else{printMaxTree();}

}



struct Node* createNodeInsert(const char *words,int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->word,words);
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
