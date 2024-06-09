#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>

int main(void){
    setlocale(LC_ALL, "Português");
    SetConsoleTitle("Abrir calculadora");

    printf("Rodando o comando java --version: \n\n");
    // /k -> keep & /c -> close
    // usamos esse /c ou /k para que mais de um comando seja executado no mesmo, concatena comandos
    system ("start cmd /k java --version");
}