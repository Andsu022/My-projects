#include <stdio.h>

int main() {
    char arquivo[100];

    printf("Digite o caminho e o nome do arquivo a ser deletado: ");
    fgets(arquivo, sizeof(arquivo), stdin);

    // Removendo o arquivo
    if (remove(arquivo) == 0) {
        printf("Arquivo deletado com sucesso.\n");
    } else {
        printf("Falha ao deletar o arquivo.\n");
    }

    return 0;
}
