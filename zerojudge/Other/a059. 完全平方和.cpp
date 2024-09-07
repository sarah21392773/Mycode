#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        long long int a,b,ans=0;
        cin >> a >> b;
        int start=(sqrt(a)-int(sqrt(a))==0 ? sqrt(a): sqrt(a)+1);
        for(int i=start;i<=int(sqrt(b));i++) ans += i*i;
        printf("Case %d: %d\n",i+1,ans);
    }
}
