#include<bits/stdc++.h>
using namespace std;

int main(){
    int M,A,monsters[305];
    cin >> M >> A;
    for(int i=0;i<M;i++){
        cin >> monsters[i];
        if(A>monsters[i]) A+=monsters[i];
        else break;
    }
    cout << A;
return 0;
}
