#include <stdio.h>

float wynik;

void potega(float liczba)
{
    wynik= liczba*liczba;
}

int main() 
{
    float liczba;
    printf("Podaj liczbe");
    scanf("%f",&liczba);
    potega(liczba);
    printf("%f",wynik);
    return 0;
}
