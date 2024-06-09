#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>

int main(void) {
    setlocale(LC_ALL, "Português");
    SetConsoleTitle("Abrir CMD e rodar java --version");

    // Nome do arquivo de lote temporário
    const char *batchFileName = "temp_java_version.bat";
    
    // Cria e abre o arquivo de lote para escrita
    FILE *batchFile = fopen(batchFileName, "w");
    if (batchFile == NULL) {
        perror("Erro ao criar arquivo de lote");
        return EXIT_FAILURE;
    }

    // Escreve o comando no arquivo de lote
    fprintf(batchFile, "java --version\n");
    fprintf(batchFile, "pause\n");  // Adiciona uma pausa para manter a janela do CMD aberta

    // Fecha o arquivo de lote
    fclose(batchFile);

    printf("Abrindo CMD e rodando o comando java --version: \n\n");

    // Abre o CMD e executa o arquivo de lote
    system("start cmd /k temp_java_version.bat");

    return 0;
}
