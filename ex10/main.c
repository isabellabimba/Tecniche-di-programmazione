#include <stdio.h>
#define MAXR 3
#define MAXC 5

int buildMatrix(int V[], int N, int M[MAXR][MAXC], int nr, int nc){
    int i=0,j, m;
    int sum = 0;
   while(i<N){
        sum = sum + V[++i];
        i++;
    } if (sum != (nr*nc)) return 0;

    int save;
    int uno=0, due=0;

    for(i=0, j=1; i<N, j<N; i++, j++){
        save = V[i];
        i++;
        for(m=0; m< V[j]; m++){
            M[uno][due++] = save;
            if(due == nc) {uno++; due=0;}
        }j++;
    }

    for(i=0; i<nr; i++){
        for (int k = 0; k < nc; k++) {
            printf("%d ", M[i][k]);
        }printf("\n");}

    return 1;
}

int main() {
    //printf("Hello, World!\n");
    int V[] = {1, 2, 17, 2, 3, 1,8,4,6,1,7,3,5,2};
    int N = 14;
    int M[MAXR][MAXC] ;
    int nr = 3;
    int nc = 5;

    if( buildMatrix(V, N, M, nr, nc)) printf("\nVettore valido\n");
    else printf("Vettore non valido");


    return 0;
}
