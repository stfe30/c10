#include <stdlib.h>

int main(void)
 {
     int *a, *b; /* Zeiger auf einen als Ganzzahl interpretierten Speicherbereich */
 
     /* Speicher für Zeiger reservieren. */
     a=malloc(sizeof(int));
     b=malloc(sizeof(int));
 
     *a = 5;     /* Schreibt den Wert „5“ in den von a referenzierten Speicherbereich */
     *b = 3;     /* Schreibt den Wert „3“ in den von b referenzierten Speicherbereich */
      a = b;     /* Weist dem Zeiger a das Ziel des Zeigers b zu. */
 
     /* a und b verweisen nun auf den gleichen Speicherbereich. Der zuvor von a referenzierte
      * Speicher ist damit verwaist und kann nicht mehr freigegeben werden. An dieser Stelle
      * entsteht ein Speicherleck.
      */
 
     free(b);    /* Gibt den von b referenzierten Speicher frei */
     free(a);    /* Führt zu einem Fehler, da der Bereich, auf den a
                  * verweist, bereits freigegeben wurde (in der vorherigen Zeile)
                  */
     return EXIT_SUCCESS;
 }
