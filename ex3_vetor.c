#include <stdio.h>

/* Exercício 3: soma de dois vetores no R3 */

struct Vetor {
    double x;
    double y;
    double z;
};

struct Vetor somaVetores(struct Vetor a, struct Vetor b) {
    struct Vetor s;
    s.x = a.x + b.x;
    s.y = a.y + b.y;
    s.z = a.z + b.z;
    return s;
}

int main(void) {
    struct Vetor v1, v2, soma;

    printf("Vetor 1 (x y z): ");
    scanf("%lf %lf %lf", &v1.x, &v1.y, &v1.z);

    printf("Vetor 2 (x y z): ");
    scanf("%lf %lf %lf", &v2.x, &v2.y, &v2.z);

    soma = somaVetores(v1, v2);

    printf("\nSoma = (%.2f, %.2f, %.2f)\n", soma.x, soma.y, soma.z);

    return 0;
}
