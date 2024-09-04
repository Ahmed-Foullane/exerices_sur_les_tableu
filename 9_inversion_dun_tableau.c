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
    printf("votre tableu c'est");
    printf("[");
    for (int i = 0; i < numEl ; i++)
    {
       printf("%d ",tableu[i]);
    }
   printf("]");
   printf("le tableu inversi");
   printf("[");
    for (int i = numEl-1; i >= 0 ; i--)
    {
       printf("%d ",tableu[i]);
    }
   printf("]");
    return 0;
}