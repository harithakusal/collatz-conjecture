/*
    Project : Collatz Conjecture
    Author  : Haritha Kusal
*/

#include <stdio.h>
#include <time.h>

void collatzConj();

int n, i;
FILE *fptr;

int main()
{
    clock_t begin = clock();
    fptr = fopen("./out.txt","w");

    for (i = 1; i <= 100; i++)
    {
        collatzConj();
    }
    
    fprintf(fptr,"\n");

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    
    fprintf(fptr,"Time Elapsed: %lfs", time_spent);
    fclose(fptr);
}

// Collatz Conjecture
void collatzConj()
{
    n = i;
    printf("%d- ", n);
    fprintf(fptr,"%d- ",n);   

    while(n > 1)
    {
        if(n % 2 == 0)
        {
            n = n / 2;
            printf("%d ", n);
            fprintf(fptr,"%d ",n);

        }
        else
        {
            n = n * 3 + 1;
            printf("%d ", n);
            fprintf(fptr,"%d ",n);
        }
    }

    printf("\n");
    fprintf(fptr,"\n");
}