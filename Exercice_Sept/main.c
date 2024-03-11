#include <stdio.h>
#include <stdlib.h>

void exercice_sept()
{
    int tab[10];
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        int random_number = rand() % 10 ;
        tab[i] = random_number;
    }

    printf("Tableau avec Random :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", tab[i] );

    }

    printf("\n----------------\n");



    printf("Tableau avec ombres impairs :\n");
    for (int i = 0; i < 10; i++)
    {
        if (tab[i] % 2 != 0)
        {
            printf("%d ", tab[i]);
        }
    }
    printf("\n");
}
int main()
{
    exercice_sept();

    return 0;
}
