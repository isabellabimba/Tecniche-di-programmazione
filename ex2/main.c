#include <stdio.h>

void maxOdd(int v[], int N){
    int j=-1;
    while((v[++j]%2)!=0){
   for(int i=j; i<N && (v[j]%2)!=0 ; i++){
       printf("%d", v[i]);
       j++;
       }
    printf("\n");
    }

}

int main() {
    //printf("Hello, World!\n");
    int v[] = {1, 3, 7, 1, 0, 1, 9, 3, 1, 0};
    int N = 9;
    maxOdd(v, N);
    return 0;
}
