#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            cout<<"  ";
        }
        for (int j = i; j >=1; j--){
            cout<<j<<" ";
        }
        for (int k = 2; k <=i ; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
 return 0;
}

// for n=5
//
//        1
//      2 1 2
//    3 2 1 2 3
//  4 3 2 1 2 3 4
//5 4 3 2 1 2 3 4 5
