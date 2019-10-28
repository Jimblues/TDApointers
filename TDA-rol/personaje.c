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
char* getNombrePersonaje(Personaje p){
    return p->nombre;
}
int getAtkPersonaje(Personaje p){
    return p->atk;
}
int getHPPersonaje(Personaje p){
    return p->hp;
}
void setNombrePersonaje(Personaje p,char* nombre){
    strcpy(p->nombre,nombre);
}
void setAtkPersonaje(Personjae p,int atk){
    p->atk = ark;
}
void setHPPersonaje(Personaje p,int hp){
    p->hp = hp;
}
void mostrarPersonaje(Personaje p) {
    printf("%s", p->nombre);
}
void destruirPersonaje(Personaje p){
    free(p);
}
