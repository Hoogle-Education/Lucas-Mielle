#include <stdio.h>
#define MAXN 1010
#define log(msg) printf("%s\n", msg)
#define loop(n) for(int i=0; i<n; i++)

typedef struct pessoa {
  char nome[50];
  int idade;
  double altura;
} Pessoa ;


void swap(int *pointerA, int *pointerB) {
  int temp = *pointerA;
  *pointerA = *pointerB;
  *pointerB = temp;
}

int main ( ) {

  int a, b;

  Pessoa turma[20];

  // Pessoa aux = turma[0];
  // turma[0] = turma[4];
  // turma[4] = aux;

  scanf(" %d %d", &a, &b);

  // vetor: Bloco contíguo de memória
  int* vetor = malloc(4 * sizeof(int));

  swap(&a, &b);

  printf("A = %d || B = %d\n", a, b);

}