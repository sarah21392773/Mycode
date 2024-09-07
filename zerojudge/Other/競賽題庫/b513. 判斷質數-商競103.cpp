#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int x=0,j=2;
        bool a=true;
        cin >> x;
        while( j*j <= x){
            if(x%j==0){
                a=false;
                break;
            }
            j++;
        }
        if(a==true){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }
    return 0;
}
