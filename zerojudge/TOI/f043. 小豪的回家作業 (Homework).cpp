#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int A,R,B;
    cin >> R >> A;
    if(A==R){
        B=3;
        A-=3;
    }
    else B=R-A;
    if(A<B) cout << A << "+" << B << "=" << R << endl;
    else cout << B << "+" << A << "=" << R << endl;
    return 0;
}
