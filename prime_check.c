# include <stdio.h>
# include <stdint.h>
# include <math.h>

int prime(uint_fast16_t num);

int main(void){
    uint_fast16_t num;

    printf("number: ");
    scanf("%u", &num);

    if (prime(num) == 0) {
        printf("%u is prime number\n", num);
    } else {
        printf("%u isn't prime number\n", num);
    }

    return 0;
}

int prime(uint_fast16_t num) {
    uint_fast16_t i;

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