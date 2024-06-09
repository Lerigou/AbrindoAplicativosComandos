#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>

int main(void){
    setlocale(LC_ALL, "Português");
    SetConsoleTitle("Abrir calculadora");

    printf("Abrindo a calculadora");
    system ("start Calc");
}