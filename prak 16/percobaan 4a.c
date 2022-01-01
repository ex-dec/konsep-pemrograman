#include <stdio.h>
int OddEvenTest(int);

int main() {
    int a, hasil;
    a = 10;
    hasil = OddEvenTest(a);
    printf("a = %d ; hasil = %d \n",a,hasil);
}

OddEvenTest(int b){
    int a;
    a = b % 2;
    return a;
}
