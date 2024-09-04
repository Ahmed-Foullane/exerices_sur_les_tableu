//écrivez un programme c qui recherche un élément spécifique dans un tableau d'entiers en utiliant
// une recherche linéaire. 
#include <stdio.h>
int main() {
    int numEl = 0;
    int tableu [100];
    int target;
    printf("enter a number of elements: ");
    scanf("%d",&numEl);
    for (int i = 0; i < numEl; i++)
    {
        printf("\nenter number %d: ",i+1);
        scanf("%d",&tableu[i]);
    }

    printf("\nenter the target number: ");
    scanf("%d",&target);
  for (int i = 0; i < numEl; i++)
  {
     if (target == tableu[i])
     {
     return   printf("the number exiest in index %d",i);
     }
    
  }

  printf("the number does not exist");
  
  
    return 0;
}