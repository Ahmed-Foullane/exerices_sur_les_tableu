// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int numEl = 0;
    int tableu [5] = {1,2,3,4,5};
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
       printf("%d ",tableu[i]);
    }
    printf("]\n");
    printf("[");
    for (int i = 0; i < numEl ; i++)
    {
       printf("%d ",tableu[i]);
    }
    printf("]");

    return 0;
}