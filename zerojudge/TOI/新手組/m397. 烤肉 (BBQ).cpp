#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M,X,Y;
    cin >> N >> M >> X >> Y;
    int A=N/X,B=M-A;
    while(A>=-1){
        if(A==-1){
            cout << -1 << " " << -1;
            break;
        }
        if(A*X+B*Y==N){
            cout << A << " " << B;
            break;
        }
        A--;
        B++;
    }
return 0;
}
