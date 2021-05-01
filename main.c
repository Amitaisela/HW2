#include<stdio.h>
#include<stdlib.h>

unsigned float_neg(unsigned uf);

// question 5
int add_ok(int x, int y) {
    int result = x + y;
    if (x >= 0 && y >= 0 && result < 0) // Positive overflow
        return -1;
    if (x < 0 && y < 0 && result > 0) // Negative overflow
        return -2;
    return 1; // No overflow
}

// question 4
unsigned float_neg(unsigned uf) {
    if ((((uf >> 23) & ((1u << 8) - 1)) == ((1u << 8) - 1)) && (uf & ((1u << 23) - 1)))// checks if uf is NaN
        //(((uf >> 23) & ((1u << 8) - 1)) == ((1u << 8) - 1)) checks if exp is all 1's (1111 1111)
        // (uf & ((1u << 23) - 1)) checks if frac not equal to 0
        return uf;

    return uf ^ (1 << 31);

}

int main() {

return 0;
}



