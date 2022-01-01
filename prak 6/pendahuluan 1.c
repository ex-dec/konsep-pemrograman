#include <stdio.h>

int main(){
    int suhu;
    printf("masukkan suhu benda dalam celcius: ");
    scanf("%d", &suhu);
    if (suhu < 0)
    {
        printf("benda berbentuk padat\n");
    }
    else if (suhu <= 100)
    {
        printf("benda berbentuk cair\n");
    }
    else
    {
        printf("benda berbentuk gas\n");
    }
}