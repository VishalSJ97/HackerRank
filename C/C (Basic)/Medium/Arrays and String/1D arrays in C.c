#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size_of_array=0;
    int sum = 0;
    scanf("%d", &size_of_array);
    
    int *arr = (int*)malloc(size_of_array*sizeof(int));
    
    for(int i=0; i<size_of_array; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    
    printf("%d", sum);
    
    return 0;
}
