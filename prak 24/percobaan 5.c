#include <stdio.h>

int main(){
    char c = 'Q', *cp = &c;
    printf("%c %c\n", c, *cp);
    c = '/';
    printf("%c %c\n", c, *cp);
    *cp = '(';
    printf("%c %c\n", c, *cp);
    return 0;
}
