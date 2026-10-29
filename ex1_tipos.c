#include <stdio.h>

/* Exercício 1: criação dos novos tipos de dados */

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data;
    Horario horario;
    char texto[200];
} Compromisso;

int main(void) {
    Compromisso c;
    int i;

    printf("Data (dd mm aaaa): ");
    scanf("%d %d %d", &c.data.dia, &c.data.mes, &c.data.ano);

    printf("Horario (hh mm ss): ");
    scanf("%d %d %d", &c.horario.hora, &c.horario.minutos, &c.horario.segundos);

    /* limpa o restante da linha antes de ler o texto */
    while ((i = getchar()) != '\n' && i != EOF)
        ;

    printf("Descricao do compromisso: ");
    fgets(c.texto, sizeof(c.texto), stdin);

    /* remove o '\n' final do texto */
    for (i = 0; c.texto[i] != '\0'; i++) {
        if (c.texto[i] == '\n') {
            c.texto[i] = '\0';
            break;
        }
    }

    printf("\n--- Compromisso ---\n");
    printf("Data: %02d/%02d/%04d\n", c.data.dia, c.data.mes, c.data.ano);
    printf("Horario: %02d:%02d:%02d\n", c.horario.hora, c.horario.minutos, c.horario.segundos);
    printf("Descricao: %s\n", c.texto);

    return 0;
}
