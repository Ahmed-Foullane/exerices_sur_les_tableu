// Challenge 2: saisie et affichage des éléments

// écrivez un programme C qui demande a l'utilisateur le nombre d'éléments d'un tableau,
// puis demande a l'utilisateur de saisir ces éléments,
// Affichez ensuite les éléments du tableau.

#include <stdio.h>

int main() {
    int numEl = 0;
     int tableu [100];
    printf("enter a number of elements: ");
    scanf("%d",&numEl);
    for (int i = 0; i < numEl; i++)
    {
        printf("\nenter number %d:",i+1);
        scanf("%d",&tableu[i]);
    }
    printf("[");
    for (int i = 0; i < numEl ; i++)
    {
       printf("%d ",tableu[i]);
    }
   printf("]");
    return 0;
}