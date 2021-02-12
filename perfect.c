#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = 1; 

    while(1)
    {
        k = 0;
        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                k += j;
            }
        }
        if(k == i)
        {
            printf("%d ", i);
        }
        i += 1;
    }
}