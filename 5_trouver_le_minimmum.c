//écrivez un programme c qui trouve et affiche ole plus petit élément dans un tableau d'entiers. le programme
// doit demander le nombre d'éléments et les élément du tableau.

#include <stdio.h>

int main() {
int numEl = 0;
    int tableu [100];
    
    printf("enter a number of elements: \n");
    scanf("%d",&numEl);
    for (int i = 0; i < numEl; i++)
    {
        printf("enter number %d:\n",i+1);
        scanf("%d",&tableu[i]);
    }
    int lePlusGrand = tableu[0];
    for (int i = 0; i < numEl ; i++)
    {
       if (lePlusGrand > tableu[i])
       {
        lePlusGrand = tableu[i];
       }
       
    }

    printf("le plus petit élément est %d",lePlusGrand);
    return 0;
}