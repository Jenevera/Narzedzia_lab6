#include <stdio.h>

float wynik;

void potega(float liczba)
{
    wynik= liczba*liczba;
    printf("%f",wynik);
}

int main() 
{
    float liczba;
    printf("Podaj liczbe");
    scanf("%f",&liczba);
    potega(liczba);
    return 0;
}
