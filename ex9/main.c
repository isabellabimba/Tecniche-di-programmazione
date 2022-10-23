#include <stdio.h>
#define MAXN 4
#define MAXM 3

void displRanking(int C[MAXN][MAXM], int n, int m){
    int salva1, salva2;
    for(int i=0; i<m; i++){
        salva1 = -1; salva2 = 0;
        for(int j=0; j<n; j++){
            if(salva1 < C[j][i]) {salva1 = C[j][i]; salva2 = j;}
        }
        printf("%d ", salva2);
    }
}

int main() {
    //printf("Hello, World!\n");
    int C[MAXN][MAXM] = {3,1,0,
                         0, 1,1,
                         1,1,1,
                         1,1,3};
    int n=4, m=3;
    displRanking(C, n, m);

    return 0;
}
