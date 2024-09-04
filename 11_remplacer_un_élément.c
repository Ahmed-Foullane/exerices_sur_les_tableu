// écrivz un programme c qui remplace toutes les occurrences d'une valeur spécifique 
// dans un tableau d'ntiers par une nouvelle valeur. le programmedoit demander 
// a l'utilisateur le nombre d"éléments, les éléments du tableau, la valeur a remplacer, et la nouvell valeur.

// écrivz un programme c qui remplace toutes les occurrences d'une valeur spécifique 
// dans un tableau d'ntiers par une nouvelle valeur. le programmedoit demander 
// a l'utilisateur le nombre d"éléments, les éléments du tableau, la valeur a remplacer, et la nouvell valeur.

#include <stdio.h>
int main() {
    int numEl = 0;
    int tableu [100];
    int nValue;
    int oValue;
    printf("enter a number of elements: ");
    scanf("%d",&numEl);
    for (int i = 0; i < numEl; i++)
    {
        printf("\nenter number %d: ",i+1);
        scanf("%d",&tableu[i]);
    }

    printf("\nenter the new number: ");
    scanf("%d",&nValue);
    printf("\nenter the old number: ");
    scanf("%d",&oValue);
printf("le tableu avant\n");
   printf("[");
    for (int i = 0; i < numEl ; i++)
    {
       printf("%d ",tableu[i]);
    }
    printf("]");
    
  

printf("\nle tableu apri\n");
   printf("[");
    for (int i = 0; i < numEl ; i++)
    {
     if (oValue == tableu[i])
     {
      printf("%d",nValue);
     }else{
        printf("%d ",tableu[i]);
     }
    
       
    }
    printf("]");
    return 0;
}