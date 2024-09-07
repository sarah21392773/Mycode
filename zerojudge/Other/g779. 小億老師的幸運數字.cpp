#include <bits/stdc++.h>
using namespace std;

int main(){
    string N,K;
    cin >> N >> K;
    if(stoi(N)%stoi(K)==0) cout << "YES";
    else{
        for(int i=0;i<N.length();i++){
            if(N[i]==K[0]){
                cout << "YES";
                break;
            }
            else if(i==N.length()-1) cout << "NO";
        }
    }
return 0;
}
