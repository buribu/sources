#include <stdio.h> void funQuickSort(int qtd, int* vetor) { if (qtd <= 1) { return; } else { int pivo = vetor[0]; int p1 = 1, p2 = qtd-1; do { while (p1 < qtd && vetor[p1] <= pivo) { p1++; } while (vetor[p2] > pivo) { p2--; } if (p1 < p2) { int temp = vetor[p1]; vetor[p1] = vetor[p2]; vetor[p2] = temp; p1++; p2--; } } while (p1 <= p2); vetor[0] = vetor[p2]; vetor[p2] = pivo; funQuickSort(p2, vetor); funQuickSort(qtd-p1, &vetor[p1]); } } int main() { int i; int vetor[8] = {35,18,14,74,63,58,22,39}; printf("\n\nVetor Desordenado: \n"); for (i=0; i<8; i++) printf("%d ", vetor[i]); funQuickSort(8, vetor); printf("\n\nVetor Ordenado: \n"); for (i=0; i<8; i++) printf("%d ", vetor[i]); printf("\n\n"); } 
