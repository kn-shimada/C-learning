# include<stdio.h>
# include<math.h>

int prime(int num);

int main(void){
    int num;

    printf("number: ");
    scanf("%d", &num);

    if (prime(num) == 0) {
        printf("%d is prime number", num);
    } else {
        printf("%d isn't prime number", num);
    }

    return 0;
}

int prime(int num) {
    int i;

    if (num == 2){
        return 0;
    }

    for (i = 3; i < sqrt(num); i += 2){
        if (num % i == 0) {
            return 1;
        }
    }

    return 0;
}