#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int n=0;
    cin >> a;
    stack<char> s;
    for(int i=0;i<a.size();i++){
        if(!s.empty()){
            if(a[i]==')'&&s.top()=='('){
                s.pop();
                n++;
            }
            else s.push(a[i]);
        }
        else s.push(a[i]);
    }
    if(s.empty()) cout<<n;
    else cout << 0;
return 0;
}
