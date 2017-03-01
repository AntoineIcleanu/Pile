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
}

