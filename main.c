#include<stdio.h>
#include<stdlib.h>

int add_ok ( int x, int y )
{
    int result = x + y;
    if(x >= 0 && y >= 0 && result < 0) // Positive overflow
        return -1;
    if(x < 0 && y < 0 && result > 0) // Negative overflow
        return -2;
    return 1; // No overflow
}

int main()
{
    return 0;
}
