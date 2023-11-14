#include <stdlib.h>
#define TAILLE 100

typedef struct {
  int pile[TAILLE]; /* tableau contenant la pile */
  int pp;           /* pointeur de pile */
} sPileInt;
typedef sPileInt* pileInt;


pileInt creerPile(void);
int estPileVide(pileInt p);
void empiler(pileInt p, int x);
int depiler(pileInt p);
