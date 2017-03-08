#include <stdio.h>
#include <stdlib.h>

typedef struct carre carre;
struct carre{
    int nombre;
    carre *suivant;
};

typedef struct file file;
struct file{
    carre *premier;
};

void enfiler(file *file, int nvNombre){
    carre *nouveau;
    if(file != NULL || nouveau != NULL){
        nouveau->nombre = nvNombre;
        nouveau->suivant = NULL;
    }
    if (file->premier != NULL){
        carre *carreActuel = file->premier;
        while (carreActuel->suivant != NULL){
            carreActuel = carreActuel->suivant;
        }
        carreActuel->suivant = nouveau;
    }
    else{
        file->premier = nouveau;
    }
}

void defiler(file *file){
    if (file != NULL){
        int nombredefile = 0;
        if (file->premier != NULL){
        carre *carredefile = file->premier;
        nombredefile = carredefile->nombre;
        file->premier = carredefile->suivant;
        free(carredefile);
        }
    }
}
