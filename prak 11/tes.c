
#include <stdio.h>
int main ()
{
int input;
int counterinput;
int angka;
int hitungbagi;
int counter;
printf("masukan jumlah yang diinginkan : ");
scanf("%d",&input);
counterinput = 1;
angka = 1;
     while(counterinput<=input)
     {
         if(angka==2)

         {
              counterinput ++;
              printf("%d   ",angka);
         }
       else  if(angka%2==1 && angka!=1)
       {
            hitungbagi=0;
            for(counter=1;counter<=angka;counter++)
            {
                if(angka%counter==0)
                {
                    hitungbagi++;
                }
            }
            if(hitungbagi==2)
            {
                counterinput++;
                printf("%d   ",angka);
            }
      }
           angka ++;
      }
return 0;
}