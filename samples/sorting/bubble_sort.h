#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H
#include <stdio.h>
#include "algoritmos.h"

void bubble_sort(int vetor[], int tamanho) {

  int troquei;

  do {

    troquei = 0;

    // tamanho - 1 pois não podemos exceder posições em um array
    for(int i = 0; i < tamanho - 1; i++){

      // se estiver fora de ordem, troco os dois selecionados
      if(vetor[i] > vetor[i+1]) {
        troca(&vetor[i], &vetor[i+1]);
        // marco que houve troca, pode ainda não estar odenado
        troquei = 1; 
      }

      for(int j = 0; j < tamanho; j++) {
        printf("%d ", vetor[j]);
      }

    printf("\n");

    }
    
  } while(troquei == 1);

}

#endif