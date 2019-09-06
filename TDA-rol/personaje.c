#include "personaje.h"
#include <stdlib.h>
#include <stdio.h>

struct Character {
    char nombre[20];
    int atk;
    int hp;
};

Personaje crearPersonaje() {
    Personaje p = malloc(sizeof(struct Character));
    printf("Nombre: ");
    scanf("%s", &p->nombre);
    return p;
}

void mostrarPersonaje(Personaje p) {
    printf("%s", p->nombre);
}
