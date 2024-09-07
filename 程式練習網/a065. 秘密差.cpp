#include<bits/stdc++.h>
using namespace std;
int main(){
    string X;
    while(cin >> X){
        int A=0,B=0;
        for(int i=0;i<X.size();i++){
            if(i%2!=0){
                A+=X[i]-'0';
            }
            else{
                B+=X[i]-'0';
            }
        }
        cout << abs(A-B) << endl;
    }
return 0;
}
