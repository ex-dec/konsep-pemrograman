#include <stdio.h>
#define index 5
int main(){
    int array_of_int [index] = {34, 34534, 34525, 7457, 12};
    int n = 1;
    for (;n <= index;n++)
    {
        printf("value %d = %d \n", n,  array_of_int[n-1]);
    }
    return 0;
}