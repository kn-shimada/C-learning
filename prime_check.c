# include <stdio.h>
# include <stdint.h>
# include <math.h>

int prime(uint_fast64_t num);

int main(void){
    uint_fast64_t num;

    printf("number: ");
    scanf("%lu", &num);

    if (prime(num) == 0) {
        printf("%lu is prime number\n", num);
    } else {
        printf("%lu isn't prime number\n", num);
    }

    return 0;
}

int prime(uint_fast64_t num) {
    uint_fast64_t i;

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