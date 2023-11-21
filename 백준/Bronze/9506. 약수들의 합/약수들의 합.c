#include <stdio.h>

int factor(){



    return 0;
}


int main(){

    int n, p = 0;

    int arr[100000] = {0, };

    while(1){
        scanf("%d", &n);
        
        if(n == -1){
            break;
        }

        p = 0;

        for(int i=1;i<n;i++){
            if((n%i) == 0){
                p += i;
            }
        }
        if(p == n){
            printf("%d = ", p);

            for(int i=1;i<n;i++){
                if((n%i) == 0){
                    printf( i != n-i ? "%d + " : "%d", i);
                }
            }
            printf("\n");
        }
        else{
            printf("%d is NOT perfect.\n", n);
        }
    }

    return 0;
}