// écrivez un programme c qui calcule la moyenne des éléments d'un tablaeu
// d'entiers. le programme doit demander le nombre d'éléments, les éléments du tableau, puis afficher la moyenne.

#include <stdio.h>

int main() {
     int result = 0;
    int numEl = 0;
    int tableu [100];
    printf("enter a number of elements : ");
    scanf("%d",&numEl);
    for (int i = 0; i < numEl; i++)
    {
        printf("\nenter number %d: ",i+1);
        scanf("%d",&tableu[i]);
    }
    for (int i = 0; i < numEl ; i++)
    {
       result += tableu[i];
    }
printf("la moyenne c'est: %d",result/numEl);

    return 0;
}