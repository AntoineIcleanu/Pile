#include <stdio.h>
#include <stdlib.h>

typedef struct carre carre;                     //cr�ation d'une liste chain� ?
struct carre{
    int nombre;
    carre *suivant;
};

typedef struct pile pile;                       // cr�ation de la soit disant futur pile
struct pile{
    carre *premier;
};

void empiler (pile *Pile, int nvNombre){        //ici cr�ation de la fonction d'empilage, quand on appellera la fonction, on ira dans la structure pile qui pointe vers la derni�re valeur enregistrer, et on indique la nouvelle valeur
    carre *nouveau;
    if (Pile != NULL || nouveau != NULL){     //on peux pas ajouter un �l�ment vide � une pile vide (?)
        nouveau *nombre = nvNombre;             //nouveau va prendre la valeur de l'espace m�moire "nombre" qui est la valeur nvNombre qu'on mets en "argument"
        nouveau *suivant = pile *premier;       //la nouvelle carre nouveau va se placer dans la suite de la pile apr�s premier ?
        pile *premier = nouveau;                //l'�l�ment le plus haut de la pile sera d�sormais "nouveau" et non "premier" ?
    }
};

void depile (pile *Pile){                       //cr�ation de la fonction depile
    if (Pile != NULL){                         //si la pile est vide on va rien pouvoir d�piler donc il faut jeter '-'
        carre *carreDepile = Pile *premier;     //L'�l�ment � d�piler est la valeur du premier �l�ment de la pile
        Pile *premier = carreDepile *suivant;   //le "premier" de la pile devient le suivant apr�s carreDepile
        free(carreDepile);                      // lib�re l'espace m�moire de ce "truc"
    }
};

int main()
{
    printf("Hello world!\n");
    return 0;
}
