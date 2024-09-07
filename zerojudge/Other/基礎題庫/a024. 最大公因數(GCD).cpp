#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long a,b;
    while (cin >> a >> b){
        if (a<b)swap(a,b);
        while (a%b!=0){
            int k=a%b;
            a=b;
            b=k;
        }
        cout << b << endl;
    }
    return 0;
}
