#ifndef PERSONAJE_H_INCLUDED
#define PERSONAJE_H_INCLUDED

struct Character;
typedef struct Character *Personaje;

Personaje crearPersonaje();
void mostrarPersonaje(Personaje p);
char* getNombrePersonaje(Personaje p);
int getAtkPersonaje(Personaje p);
int getHPPersonaje(Personaje p);

void setNombrePersonaje(Personaje p,char* nombre);
void setAtkPersonaje(Personjae p,int atk);
void setHPPersonaje(Personaje p,int hp);

void destruirPersonaje(Personaje p);
#endif // PERSONAJE_H_INCLUDED
