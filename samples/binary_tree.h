#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int valor;
  Node *esq = NULL;
  Node *dir = NULL;
} Node;

typedef struct Tree {
  Node* raiz = NULL;
} Tree;

void adicionaNo(Tree *arvore, int valor) {
  Node *aux;
  aux->valor = valor;

  if(arvore->raiz == NULL) arvore->raiz = aux;
  else adicionaNo(arvore->raiz, aux);
}

void adicionaNo(Node *node, Node* aux) {
  if(node->valor > aux->valor) {
    if(node->esq == NULL) node->esq = aux;
    else adicionaNo(node->esq, aux);
  } else {
    if(node->dir == NULL) node->dir = aux;
    else adicionaNo(node->dir, aux);
  }
}

#endif
