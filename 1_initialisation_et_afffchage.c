// exerices sur les tableu

//Challenge 1: initialisation et afffchage
// écrivez un programme c qui initialise un tableu d'entiers avec des valeurs données et affiche ces valeurs. par exemple,
// vous pouvez initialiser un tableau avec les valeurs [1,2,3,4,5] et afficher chaque valeur sur une nouvelle ligne 

#include <stdio.h>

int main(){
    
    int tableu [5] = {1,2,3,4,5};
    printf("[");
    for (int i = 0; i < 5 ; i++)
    {
       printf("%d ",tableu[i]);
    }
    printf("]");
    return 0;
}