// écrivez un programme c qui affiche uniquement les éléments impairs d'un
// pairs d'un tableau d'ntiers. le programme doit demander le nombre d'éléments et les 
// éléments du tableau.

#include <stdio.h>

int main() {
 int numEl = 0;
    int tableu [100];
    
    printf("enter a number of elements: ");
    scanf("%d",&numEl);
    for (int i = 0; i < numEl; i++)
    {
        printf("\nenter number %d: ",i+1);
        scanf("%d",&tableu[i]);
    }
  printf("[");
    for (int i = 0; i < numEl ; i++)
    {
        if (tableu[i] % 2 == 0)
        {
            printf("%d ",tableu[i]);
        }
        
       
    }
    printf("]");
   
    return 0;
}