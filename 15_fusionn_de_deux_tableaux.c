// écrivez un programme c qui fusionne deux tableau. le programme doit demander a l'utilisateur le nombre d'éléments pour
// chaque tableau, puis les éléments pour chapue tableau, puis les élélments des deux tableaux, et afficher le tableau fusionné.

#include <stdio.h>

int main() {
    int numEl1 = 0;
    int tableu1 [100];
    int numEl = 0;
    int tableu [100];
    printf("enter a number of elements of the first table: ");
    scanf("%d",&numEl);
    for (int i = 0; i < numEl; i++)
    {
        printf("\nenter number %d: ",i+1);
        scanf("%d",&tableu[i]);
    }

    printf("enter a number of elements of the second table: ");
    scanf("%d",&numEl1);
    for (int i = 0; i < numEl1; i++)
    {
        printf("\nenter number %d: ",i+1);
        scanf("%d",&tableu1[i]);
    }


printf("[");
    for (int i = 0; i < numEl ; i++)
    {
       printf("%d ",tableu[i]);
    }

    
    for (int i = 0; i < numEl1 ; i++)
    {
       printf("%d ",tableu1[i]);
    }
   
   printf("]");

    

    return 0;
}