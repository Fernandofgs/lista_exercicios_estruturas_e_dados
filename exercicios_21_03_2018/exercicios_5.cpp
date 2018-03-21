//Escreva um programa que declare uma matriz 100x100 de inteiros. Voc? deve inicializar a matriz com 
//zeros usando ponteiros. Preencha depois a matriz com os numeros de 1 a 10.000 usando ponteiros.
#include <stdio.h> 
#define N 100

main () 
{ 
int matriz[N][N]; 
int *p; 
int i, j, sma = 0;

p = &matriz[0][0];  

for (i=0; i<N; i++) 
  for (j=0; j<N; j++) 
    { 
    *p = 0; 
    p++; 
    }
p = &matriz[0][0]; 
for (i=0; i<N; i++) 
  for (j=0; j<N; j++) 
    { 
    *p = sma; 
    sma++; 
    p++; 
    } 
}
