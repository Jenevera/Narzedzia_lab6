#include <stdio.h>
#include<math.h>


float potega(float liczba)
{
	float wynik;

    wynik= pow(liczba,2);
    return wynik;
}

int main() 
{
    float wynik;
    float liczba;
    printf("Podaj liczbe");
    scanf("%f",&liczba);
    wynik=potega(liczba);
    printf("%f",wynik);
    return 0;
}
