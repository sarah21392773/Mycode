#include<bits/stdc++.h>
using namespace std;

int hh(int a,int b,char ch){
    if(ch=='+') return b+a;
    else if(ch=='-') return b-a;
    else if(ch=='/') return b/a;
    else if(ch=='*') return b*a;
    else return b%a;
}

int main(){
    string a;
    while(cin >> a){
        stack<int> s;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(a[i]>='0' && a[i]<='9'){
                s.push(a[i]-'0');
            }
            else{
                int b = s.top();
                s.pop();
                int c = s.top();
                s.pop();
                int ans=hh(b,c,a[i]);
                s.push(ans);
            }
        }
        cout << s.top() <<endl;
    }
return 0;
}
