#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = n; i >= 1; i--){
         for (int j =n ; j >=i; j--){     
            printf("%d ",j);
    }
    int space=2*i-2;
        for (int j = 1; j <= space; j++){
            printf("%d ",i);
    }
    for (int j = i-1; j < n-1; j++){     
            printf("%d ",j+2);
    }
    printf("\n");
    }

    for (int k = 2; k <=n; k++){
        for (int j = n; j>=k; j--){     
            printf("%d ",j);
        }
        int space=2*k-3;
        for (int j = space; j >= 1; j--){
            printf("%d ",k);
        }
        for (int j = k; j <=n; j++){     
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}
