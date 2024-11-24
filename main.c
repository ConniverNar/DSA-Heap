#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "heap.h"

struct Node* createNode(int value);


int main()
{
        treesizeMin = 0;
        treesizeMax = 0;
        int keyRoot = 0;
        treeNode* root = createNode(0);
        treeNode* root2 = createNode(0);
        MinArray[0] = root;
        MaxArray[0] = root2;
        char word[4]; //
        int choice, value;

    while (1){ //infinite loop till user picks 3 as a choice
        printf("\n=====MAIN MENU=====\n");
        printf("[1] Add a new node\n");
        printf("[2] Delete root node\n");
        printf("[3] Exit Program\n");
        printf("Choice[1-3]?\t");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            system("cls");
            printf("\n===ADD NEW NODE===\n");
            printf("Enter a 3-letter word: ");
            scanf("%3s", word); //Read 3 letters
            value = wordToNumber(word);
            printf("%s = %d\n", word, wordToNumber(word));

            if (keyRoot == 0){
                    strcpy(root->word,word);
                    root->data = value;
                    strcpy(root2->word,word);
                    root2->data = value;
                    keyRoot++;
                    }
           else{
                insertMin(word,value);
                insertMax(word,value);
           }
            printf("SUCCESSFUL INSERT!\n\n\n");
            break;

        case 2: //code will break if Tree has no more root to delete
            system("cls");
            printf("\n=== DELETE NEW NODE ===\n");
            deleteNode();
            printf("SUCCESSFUL ROOT DELETED!\n\n\n");
            selectionMin(0,treesizeMin);
            selectionMax(treesizeMax);
            break;
        case 3:
            system("cls");
            printf("\n\n\n=================EXITING PROGRAM==================\n\n\n");
            exit(0);
            break;
        }

    }

    return 0;


}


struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
