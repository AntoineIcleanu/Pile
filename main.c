#include <stdio.h>
#include <stdlib.h>

typedef struct carre carre;                     //création d'une liste chainé ?
struct carre{
    int nombre;
    carre *suivant;
};

typedef struct pile pile;                       // création de la soit disant futur pile
struct pile{
    carre *premier;
};

void empiler (pile *Pile, int nvNombre){        //ici création de la fonction d'empilage, quand on appellera la fonction, on ira dans la structure pile qui pointe vers la dernière valeur enregistrer, et on indique la nouvelle valeur
    carre *nouveau;
    if (Pile != NULL || nouveau != NULL){     //on peux pas ajouter un élément vide à une pile vide (?)
        nouveau *nombre = nvNombre;             //nouveau va prendre la valeur de l'espace mémoire "nombre" qui est la valeur nvNombre qu'on mets en "argument"
        nouveau *suivant = pile *premier;       //la nouvelle carre nouveau va se placer dans la suite de la pile après premier ?
        pile *premier = nouveau;                //l'élément le plus haut de la pile sera désormais "nouveau" et non "premier" ?
    }
};

void depile (pile *Pile){                       //création de la fonction depile
    if (Pile != NULL){                         //si la pile est vide on va rien pouvoir dépiler donc il faut jeter '-'
        carre *carreDepile = Pile *premier;     //L'élément à dépiler est la valeur du premier élément de la pile
        Pile *premier = carreDepile *suivant;   //le "premier" de la pile devient le suivant après carreDepile
        free(carreDepile);                      // libére l'espace mémoire de ce "truc"
    }
};

int main()
{
    printf("Hello world!\n");
    return 0;
}
