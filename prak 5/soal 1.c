#include <stdio.h>

int main(){
	int input;
	printf("masukkkan sebuah nilai a: ");
	scanf("%d", &input);
	if (input>=0) {
		printf ("nilai a positif\n");
	}
	else {
		printf ("nilai a negatif\n");
	}
	return 0;
}
