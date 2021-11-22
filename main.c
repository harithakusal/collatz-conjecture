/* 
    Project : Collatz Conjecture 
    Author  : Haritha Kusal
*/

#include <stdio.h>

int main() 
{    
    int n;

    for (int i = 0; i < 100; i++)
    {
        n = i;
        printf("Number: %d >>> ", n);

        while(n > 1)
        {
            if(n % 2 == 0)
            {
                n = n / 2;
                printf("%d ", n);
            }
            else
            {   
                n = n * 3 + 1;
                printf("%d ", n);
            }
        }   

        printf("\n");
    }
}
