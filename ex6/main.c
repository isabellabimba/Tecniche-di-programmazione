#include <stdio.h>
#include <string.h>
#define MAXM 5

int count(char A[][MAXM], int n, int m, char str[]){
    int num1=1, num2=num1-1, c = strlen(str);
    int i=0, j=-1;
    int ii, jj, s, g;
    while(i<n){
        if(A[i][++j] == str[0]){
             jj=j++;
            if(A[i][j]){  s=j; g=2; for(int q=1; q<c && A[i][j] == str[q] && A[i][++s] == str[g]; q++) {
                    num1++; j++; s=j; g++;
            }j=jj;}
            ii=i++;
            if(A[i][j]){ s=i; g=2; for(int q=1; q<c && A[i][j] == str[q] && A[++s][g] == str[q]; q++){
                    num1++; i++; s=i; g++;
            }i=ii;}
            if(j>m) {j=0; i++;}
            if(num1 == c-1) num2++;
            num1=1;
        }
    }
    return num2;
}

int main() {
    //printf("Hello, World!\n");
    char A[][MAXM] = {"xceca", "waecq", "dtpaz", "pcatf"};
    char str[] = "cat";

    printf("%d", count(A, 4, 5, str));

    return 0;
}
