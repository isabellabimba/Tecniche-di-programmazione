#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countAndPrint(char str[], int n){
    int cont=1, c=0, i, voc=0;
    while (c< strlen(str)) {
        for (i = c; i < n+c && n+c< strlen(str); i++){
            //str[i] = toupper(str[i]);
            if(toupper(str[i]) == 'A' || toupper(str[i])== 'E' || toupper(str[i]) == 'I' ||
                toupper(str[i]) == 'O' || toupper(str[i]) == 'U' ) { cont--; voc++;}
            cont++;
        }
        for(i = c; i<n+c && cont < n+1 && n+c< strlen(str) && voc==2; i++) printf("%c", str[i]);
        printf("\n");
        cont=1; voc=0;
            c++;
    }
}

int main() {
    //printf("Hello, World!\n");
    char str[] = "forExample";
    countAndPrint(str, 4);
    return 0;
}
