#include <stdio.h>

int main(){
    int valid_operator = 1;
    char operator;
    float number1, number2, result;
    printf("Masukkan 2 buah bilangan & sebuah operator\n");
    printf("dengan format : number1 operator number 2\n");
    scanf("%f %c %f", &number1, &operator, &number2);
    switch (operator)
    {
    case '+':
        result = number1 + number2;
        break;
    case '-':
        result = number1 - number2;
        break;
    case '*':
        result = number1 * number2;
        break;
    case '/':
        result = number1 / number2;
        break;
    default:
        valid_operator = 0;
        break;
    }
    switch (valid_operator)
    {
    case 1:
        printf("\n%g %c %g is %g\n", number1, operator, number2, result);
        break;
    default:
        printf("Invalid operator!\n");
        break;
    }
    return 0;
}