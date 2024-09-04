// Online C compiler to run C program online
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
    
    int swapped = 1;
   do
   {
    swapped = 0;
    for (int i = 0; i < numEl-1; i++)
    {
        if (tableu[i] > tableu[i + 1]) {
            tableu[i] = tableu[i] + tableu[i + 1];
            tableu[i + 1] = tableu[i] - tableu[i + 1];
            tableu[i] = tableu[i] - tableu[i + 1];
        swapped = 1;
      }
    }
    
   } while (swapped == 1);
   printf("[");
   for (int i = 0; i < numEl ; i++)
    {
       printf("%d ",tableu[i]);
    }
  printf("]");

    return 0;
}