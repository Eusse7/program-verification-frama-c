#include <limits.h>

/*@ 
  // Verificación de validez de acceso de escritura
  requires \valid(i) && \valid(j);

  // Condiciones para prevenir desbordamiento
  requires INT_MIN + 3 <= *j && *j <= INT_MAX - 0;
  requires INT_MIN + 2 <= *i && *i <= INT_MAX - 0 ;

  // Relación algebraica que garantiza el resultado deseado
   requires (*i) * (*j) + 2 * (*j) + 3 * (*i) == 0;


  // Solo se modifican los valores apuntados por i y j
  assigns *i \from *i;
  assigns *j \from *j;

  // Asegura que el producto sea 6 después de ejecutar
  ensures (\old(*i) + 2) * (\old(*j) + 3) == 6;
*/
void transform(int *i, int *j) {
  *j = *j + 3;
  *i = *i + 2;
}
