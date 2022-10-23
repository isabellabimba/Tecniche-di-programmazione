#include <stdio.h>
#include <string.h>

int charErase (char str[], int pos[]){
    int i=0, j;
    int max = strlen(str);

    while(pos[i] != -1){
        j = pos[i];
        for(int k=0; k<max; k++)
        str[j] = str[++j];
      i++;
    }
 return i;
}

int main() {
    //printf("Hello, World!\n");
    char str[] = "ThisIsAString";
    int pos[] = {7, 4, 2, 0, 11, -1};
    int i = charErase(str, pos);

    printf("%d", i);
    return 0;
}
