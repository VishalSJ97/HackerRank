#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char c[100];
    scanf("%s", c);
    int f[10] = {0};
    for(int i=0; i<strlen(c); i++){
        switch(c[i]){
            case '0':
                f[0] = f[0] + 1;
                break;
            case '1':
                f[1] = f[1] + 1;
                break;
            case '2':
                f[2] = f[2] + 1;
                break;
            case '3':
                f[3] = f[3] + 1;
                break;
            case '4':
                f[4] = f[4] + 1;
                break;
            case '5':
                f[5] = f[5] + 1;
                break;
            case '6':
                f[6] = f[6] + 1;
                break;
            case '7':
                f[7] = f[7] + 1;
                break;
            case '8':
                f[8] = f[8] + 1;
                break;
            case '9':
                f[9] = f[9] + 1;
                break;
            default:
                break;
        }
    }
    
    for(int i=0; i<10; i++){
        printf("%d ", f[i]);
    }
    
    return 0;
}
