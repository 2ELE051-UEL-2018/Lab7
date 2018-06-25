#ifndef PROJETO_H
#define PROJETO_H

int busca_linear(int v[], int elemento, int tamanho);

int ponto_medio(int inicio, int fim);
int busca_binaria_iteracao(int v[], int elemento, int* inicio, int* fim);
int busca_binaria(int v[], int elemento, int tamanho);

void insere_em_ordem(int v[], int elemento, int tamanho);
void insertion_sort(int v[], int tamanho);

void ordena_dois_elementos(int v[]);
void bubble_sort_laco_interno(int v[], int tamanho);
void bubble_sort(int v[], int tamanho);
#endif // PROJETO_H
