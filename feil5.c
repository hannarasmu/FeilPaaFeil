#include <stdio.h>

int main() {
    char i = 0;
    long int sum = 0;
    while(i < 500) {
        sum += i;
        i++;
    }
    printf("The sum is %ld\n", sum);
}
