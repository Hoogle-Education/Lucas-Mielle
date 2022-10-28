#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H
#include <stdio.h>
#include "algoritmos.h"

int pos_menor_elemento(int vetor[], int tamanho, int inicio) {
  int posMenor = inicio;

  for(int i = inicio; i < tamanho; i++) {
    if(vetor[i] < vetor[posMenor]) posMenor = i;
  }

  return posMenor;
}

void selection_sort(int vetor[], int tamanho) {

  for(int i = 0; i < tamanho; i++) {
    // descubro a pos do menor
    int posTrocado = pos_menor_elemento(vetor, tamanho, i);

    // troco a pos atual com a pos menor na subsequencia
    troca(&vetor[i], &vetor[posTrocado]);

    for(int j = 0; j < tamanho; j++) {
      printf("%d ", vetor[j]);
    }

    printf("\n");
  }

}



#endif