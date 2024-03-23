#include<bits/stdc++.h>
using namespace std;
int main(){

    int N,M,piece;
    cin >> N >> M;
    piece = 8*M;
    if(piece<2*N){
        cout << "Not enough";
    }
    else if(piece>3*N){
        cout << "Too much";
    }
    else{
        cout << "Yes";
    }
  
return 0;
}
