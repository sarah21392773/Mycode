#include <iostream>
using namespace std;

int main(){
    int m,n,k,s;
    cin >> m >> n >> k;
    s = m;
    while (m/n > 0 && n > 1){
        s += m/n;
        m -= m/n*(n-1);
    }
    if(s >= k || n == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
return 0;
}
