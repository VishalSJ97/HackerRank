#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int rem=0;
    int sum = 0;
    while(n!=0){
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}
