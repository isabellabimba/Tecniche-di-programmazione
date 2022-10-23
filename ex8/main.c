#include <stdio.h>
#define MAXN 5

int sommaCornici(int mat[MAXN][MAXN], int N, int vet[]){
    int corn=0, i;
    int q=0;

    while(corn < N/2+1){
        vet[corn] = 0; //clean
        for(i=0+q; i<N-q; i++) vet[corn] = vet[corn] + mat[0+q][i];
        for(i=1+q; i<N-q-1; i++) vet[corn] = vet[corn] + mat[i][0+q];
        for(i=1+q; i<N-q-1; i++) vet[corn] = vet[corn] + mat[0+q][N-q];
        for(i=0+q; i<N-q; i++) vet[corn] = vet[corn] + mat[N-q][i];
        corn++;
        q=corn;
    }

    return corn;
}

int main() {
    //printf("Hello, World!\n");
    int mat[MAXN][MAXN] = {1, 2,3,4,5,
                           6, 7, 8, 9, 0,
                           1, 2,3,4,5,
                           6, 7, 8, 9,0,
                           1,1,1,1,1};
    int N = MAXN;
    int vet[N/2+1];

    printf("%d", sommaCornici(mat, N, vet));



    return 0;
}
