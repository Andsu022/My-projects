#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char *conteudo;
    long tamanho;

    printf("Digite o caminho e o nome do arquivo: ");
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);

    // Removendo o caractere de nova linha da string do nome do arquivo
    if (nomeArquivo[strlen(nomeArquivo) - 1] == '\n') {
        nomeArquivo[strlen(nomeArquivo) - 1] = '\0';
    }

    // Abrindo o arquivo para leitura
    arquivo = fopen(nomeArquivo, "rb");
    if (arquivo == NULL) {
        printf("Falha ao abrir o arquivo.\n");
        return 1;
    }

    // Obtendo o tamanho do arquivo
    fseek(arquivo, 0, SEEK_END);
    tamanho = ftell(arquivo);
    rewind(arquivo);

    // Alocando memória para armazenar o conteúdo do arquivo
    conteudo = (char *)malloc(tamanho * sizeof(char));
    if (conteudo == NULL) {
        printf("Falha ao alocar memória.\n");
        fclose(arquivo);
        return 1;
    }

    // Lendo o conteúdo do arquivo e armazenando na memória
    fread(conteudo, sizeof(char), tamanho, arquivo);

    // Exibindo o conteúdo do arquivo
    printf("Conteúdo do arquivo:\n%s\n", conteudo);

    // Liberando a memória e fechando o arquivo
    free(conteudo);
    fclose(arquivo);

    return 0;
}
