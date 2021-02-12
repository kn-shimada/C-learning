#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, j, k;  //iは判定する整数、ｊはiを割る整数、kは判定用
	i = 3;

	printf("2 ");

	while(1){
		k=0;
		for(j = 3; j <= sqrt(i); j += 2)  //iの平方根まで計算し、jが偶数の検証は省く
		{
			if(i % j == 0)  //jで割り切れた時点で素数じゃないのでkを変更
			{
				k = 1;
				break;
			}
		}

		if(k == 0)  //素数なら表示
        {
            printf("%d ",i);
        }
        i += 2;
	}

	printf("\n");

	return 0;
}
