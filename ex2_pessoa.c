#include <stdio.h>
#include <string.h>

/* Exercício 2: ler nome, idade e endereço e armazenar em uma estrutura */

struct Pessoa {
    char nome[100];
    int idade;
    char endereco[150];
};

int main(void) {
    struct Pessoa p;
    char buffer[32];

    printf("Nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';

    printf("Idade: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &p.idade);

    printf("Endereco: ");
    fgets(p.endereco, sizeof(p.endereco), stdin);
    p.endereco[strcspn(p.endereco, "\n")] = '\0';

    printf("\n--- Dados armazenados ---\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Endereco: %s\n", p.endereco);

    return 0;
}
