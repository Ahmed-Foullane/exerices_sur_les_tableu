// écrivez un programme c qui multiplie chapue élélment d'un tableau d'ntiers 
// par un facteur donn" et affiche le tableau résultant. le programme doit demander le nombre d'"l"ments, les 
// les éléments du tableau, et le facteur de multiplication.

#include <stdio.h>

int main(){
    int numEl = 0;
    int tableu [100];
    int factorialNum;
    printf("enter the factorial number: ");
    scanf("%d",&factorialNum);

    printf("\nenter a number of elements : ");
    scanf("%d",&numEl);
    for (int i = 0; i < numEl; i++)
    {
        printf("\nenter number %d: ",i+1);
        scanf("%d",&tableu[i]);
    }

   printf("[ ");
    for (int i = 0; i < numEl; i++)
    {
       printf("%d ",tableu[i]*factorialNum);
    }
    printf("]");
    
    return 0;
    
}