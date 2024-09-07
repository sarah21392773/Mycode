#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,s=0;
    for(int i=0;i<5;i++){
        cin >> a >> b >> c;
        if(a+b>c&&b+c>a&&c+a>b) s++;
    }
    cout <<  s;
return 0;
}
