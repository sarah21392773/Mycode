#include <iostream>
using namespace std;

int main(){
    int a,b,d,n=0;
    cin >> a >> b >> d;
    n = (b-a)/d+1;
    for(int i=0;i<n;i++){
        cout << a << " ";
        a+=d;
    }
return 0;
}
