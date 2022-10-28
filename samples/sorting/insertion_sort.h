#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H
#include <stdio.h>
#include "algoritmos.h"

void insertion_sort(int vetor[], int tamanho) {

  for(int i = 1; i < tamanho; i++) {

    int escolhido = vetor[i];
    int destino = i - 1;

    while ( escolhido < vetor[destino] ) {
      troca(&vetor[i], &vetor[destino]);
      destino--;
    }

  }

}

#endif