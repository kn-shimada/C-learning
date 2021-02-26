#include <stdio.h>
#include <stdint.h>
//塚ちゃんの約数三つ

int main(void)
{
    uint64_t i, j, k;
    i = 2;

    while(1)
    {
        k = 0;
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                k += 1;
            }
        }

        if(k >= 3)
        {
            printf("%d ", i);
        }
        i++;
    }
}