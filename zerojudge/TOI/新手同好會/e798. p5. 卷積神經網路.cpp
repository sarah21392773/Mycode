#include<iostream>
using namespace std;
int main(){
    int n=0;
    while(cin >> n){
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
            }
        }

        for(int k=0;k<n;k+=2){
            for(int i=0;i<n;i+=2){
                int m=-10000000000000000;
                for(int j=k;j<k+2;j++){
                    m=max(m,a[j][i]);
                    m=max(m,a[j][i+1]);
                }
                cout<< m << " ";
            }
            cout << endl;
        }
return 0;
    }
}
