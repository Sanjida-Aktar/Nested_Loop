#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
    1
  2 1
3 2 1

*/
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n ;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){

        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=i; j>=1;j--){
            printf("%d",j);
            
        }
        printf("\n");
        
    }
    return 0;
}
