
//challenge 3: Somme des éléments

//écrivez un programme c qui calcule et affiche la somme des éléments  d'un tableau d'entiers. Le programme doit 
// demander le nombre d'élément, puis les éléments du tableau, et afficher la somme totale.

#include <stdio.h>

int main() {
     int result = 0;
    int numEl = 0;
    int tableu [100];
    printf("enter a number of elements that you want to calcule the some of them: ");
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
printf("the result is: %d",result);

    return 0;
}