#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

// CRUD: Create Read Update Delete

int soma(int inicio, int fim) {
  // caso base
  if(inicio == fim) return inicio;

  // caso recursivo
  return inicio + soma(inicio + 1, fim);
}

int main() {

  Tree *arvore;
  
  adicionaNo(arvore, 10);
  adicionaNo(arvore, 8);
  adicionaNo(arvore, 5);
  adicionaNo(arvore, 3);
  
}