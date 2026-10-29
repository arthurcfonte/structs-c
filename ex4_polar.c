#include <stdio.h>
#include <math.h>

/* Exercício 4: conversão de coordenadas polares para cartesianas */

struct Polar {
    double r;   /* raio */
    double a;   /* argumento, em radianos */
};

struct Cartesiano {
    double x;
    double y;
};

int main(void) {
    struct Polar p;
    struct Cartesiano c;

    printf("Raio (r): ");
    scanf("%lf", &p.r);

    printf("Argumento (a) em radianos: ");
    scanf("%lf", &p.a);

    c.x = p.r * cos(p.a);
    c.y = p.r * sin(p.a);

    printf("\nPolar: (r = %.4f, a = %.4f rad)\n", p.r, p.a);
    printf("Cartesiano: (x = %.4f, y = %.4f)\n", c.x, c.y);

    return 0;
}
