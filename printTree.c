#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

void printMinTree(){
    int i;
    printf("\n\n\nMin Heap:");
    printf("\n");
    printf("\t\t\t\t\t\t%s-%d     <---- ROOT",MinArray[0]->word,MinArray[0]->data);
    printf("\n\n");
    printf("\t\t\t\t");

    for(i = 1; i <= treesizeMin;i++){

         if (i>0 && i< 3)
            {printf("%s-%d\t\t\t\t",MinArray[i]->word,MinArray[i]->data);
            if (i==2)
                {printf("\n\n");
                printf("\t\t\t");
                }
            }
         if (i>=3 && i<= 6)
            {printf("%s-%d\t\t",MinArray[i]->word,MinArray[i]->data);
            if (i==6)
                {printf("\n\n");
                printf("\t\t  ");}
            }
         if (i>=7 && i<= 14)
            {printf("%s-%d\t    ",MinArray[i]->word,MinArray[i]->data);
            if (i==14)
                {printf("\n\n");
                printf("\t");
                }
            }
    }
    printf("\n\n");
}


void printMaxTree(){

    int i;
    printf("\nMax Heap:");
    printf("\n");
    printf("\t\t\t\t\t\t%s-%d     <---- ROOT",MaxArray[0]->word,MaxArray[0]->data);
    printf("\n\n"); printf("\t\t\t\t");

    for(i = 1; i <= treesizeMax;i++)
    {
         if (i>0 && i< 3)
            {printf("%s-%d\t\t\t\t",MaxArray[i]->word,MaxArray[i]->data);
            if (i==2)
                {printf("\n\n");
                printf("\t\t\t");
                }
            }
         if (i>=3 && i<= 6)
            {printf("%s-%d\t\t",MaxArray[i]->word,MaxArray[i]->data);
            if (i==6)
                {printf("\n\n");
                printf("\t\t  ");
                }
            }
         if (i>=7 && i<= 14)
            {printf("%s-%d\t    ",MaxArray[i]->word,MaxArray[i]->data);
            if (i==14)
                {printf("\n\n");
                printf("\t");
                }
            }
    }
    printf("\n\n");
}


