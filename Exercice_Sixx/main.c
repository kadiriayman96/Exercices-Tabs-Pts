#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Tri(int tab[], int n)
{
    int i, j, k;
    for (i = 0; i < n-1; i++)
    {
        k = i;
        for (j = i+1; j < n; j++)
        {
            if (tab[j] < tab[k])
            {
                k = j;
            }
        }
        swap(&tab[i], &tab[k]);
    }
}

void AfficherTab(int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{

    int numbers[7];

    srand(time(NULL));
    for (int i = 0; i < 7; i++)
    {
        numbers[i] = rand() % 10;
    }

    printf("Tableau random numbers: ");
    AfficherTab(numbers, 7);

    Tri(numbers, 7);

    printf("Tableau apres le rri: ");
    AfficherTab(numbers, 7);

    return 0;
}
