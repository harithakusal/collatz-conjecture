/*
    Project : Collatz Conjecture
    Author  : Haritha Kusal
*/

#include <stdio.h>

int main()
{
    int n;
    FILE *fptr;

    fptr = fopen("./out1.txt","w");

    for (int i = 1; i < 100; i++)
    {
        n = i;
        printf("Number %d - ", n);
        fprintf(fptr,"Number %d - ",n);
        
        while(n > 1)
        {
            if(n % 2 == 0)
            {
                n = n / 2;
                printf("%d ", n);

                fprintf(fptr,"%d",n);

            }
            else
            {
                n = n * 3 + 1;
                printf("%d ", n);

                fprintf(fptr,"%d",n);
            }
        }

        printf("\n");
        fprintf(fptr,"\n");
    }

    fclose(fptr);
}
