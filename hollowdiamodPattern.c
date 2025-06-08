#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n); 
    int rows, columns;
    for (rows = 1; rows <= n; rows++) {
        for (columns = n; columns > rows; columns--) {
            printf(" ");
        }
        printf("*");
        for (columns = 1; columns < (rows - 1) * 2; columns++) {
            printf(" ");
        }
        if (rows != 1) {
            printf("*");
        }
        printf("\n");
    }
    for (rows = n - 1; rows >= 1; rows--) {
        for (columns = n; columns > rows; columns--) {
            printf(" ");
        }
        printf("*");
        for (columns = 1; columns < (rows - 1) * 2; columns++) {
            printf(" ");
        }
        if (rows != 1) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


// Enter a number: 5
// 
// 
//        *
//       * *
//      *   *
//     *     *
//    *       *
//     *     *
//      *   *
//       * *
//        *
// 
 
