#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b  ;

    printf("Inserer un nombre entier  a :\n") ;
    scanf("%d",&a);
    printf("Inserer un nombre entier b :\n") ;
    scanf("%d",&b);
    printf("Le quotient et le reste  de la division entiere des  deux nombres entiers sont %d et %d ",a/b,a%b);

    //printf("Hello world!\n");
    return 0;
}
