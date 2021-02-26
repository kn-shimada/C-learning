#include <stdio.h>
#include <math.h>
#include <stdint.h>
//メルセンヌ素数を利用、奇数の完全数は見つかってないので省く

int main(void)
{
    uint16_t i, j, k, prime, perfect;
    i = 2;

    while(i <= 13)
    {
        prime = (uint16_t)pow(2, i) - 1;
        k = 0;
        for(j = 3; j <= sqrt(prime); j += 2)  //primeの平方根まで計算し、jが偶数の検証は省く
		    {
			    if(prime % j == 0)  //jで割り切れた時点で素数じゃないのでkを変更
			    {
				    k = 1;
				    break;
			    }
		    }
            
		    if(k == 0)  //prime素数ならperfectを表示
            {
                perfect = (uint16_t)pow(2, i - 1) * (pow(2, i) - 1); 
                printf("%d ", perfect);
            }
        i += 1;
    }
}