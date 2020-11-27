#include <stdio.h>

// Esto es un comentario de prueba.

int multiplicarPorCinco(int i);

int main(){
  int i = 0;
  
  for(i = 0; i < 10; i=i*2)
  {
    printf("%d.\n", i);
  }
  
  return 0;
}

int multiplicarPorCinco(int i){
  return (i * 5);
}