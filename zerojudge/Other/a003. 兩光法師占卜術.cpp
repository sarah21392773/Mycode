#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    int s=(2*x+y)%3;
    if(s==0) cout<<"普通"<<endl;
    else if(s==1) cout << "吉"<<endl;
    else cout <<"大吉"<<endl;
    return 0;
}
