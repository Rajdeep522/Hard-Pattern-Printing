import java.util.*;
class butterflyPattern{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n=sc.nextInt();
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <=i; j++){     
                System.out.print("* ");
            }
            int space=2*n-2*i;
            for (int j = 1; j <= space; j++){
                System.out.print("  ");
            }
            for (int j = 1; j <=i; j++){     
                System.out.print("* ");
            }
            System.out.print("\n");
        }
        for (int k = n; k >=1; k--){
            for (int j = 1; j<=k; j++){     
                System.out.print("* ");
            }
            int space=2*n-2*k;
            for (int j = space; j >= 1; j--){
                System.out.print("  ");
            }
            for (int j = 1; j <=k; j++){     
                System.out.print("* ");
            }
            System.out.print("\n");
        }

    }
}



// 
// Enter a number: 4
// 
// 
//    *             * 
//    * *         * * 
//    * * *     * * * 
//    * * * * * * * * 
//    * * * * * * * * 
//    * * *     * * * 
//    * *         * * 
//    *             * 