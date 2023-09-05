#include <stdio.h>

int *lag_tall(int antall) {
    int tall[antall];
    for(int i = 0; i < antall; i++) {
        tall[i] = i;
    }
    return tall;
}

int main() {
    int *tall = lag_tall(10);
    for(int i = 0; i < 10; i++) {
        printf("Tallet er %d\n", tall[i]);
    }
}
