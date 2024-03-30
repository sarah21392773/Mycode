#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    cin >> a >> c >> b;
    int ans[500]={0};
    if(c=='+'){
        for(int i=0;i<a.size()||i<b.size();i++){
            ans[i]=a[i]+b[i];
        }
    }
    else if(c=='-'){
        for(int i=0;i<a.size()||i<b.size();i++){
            ans[i]=a[i]-b[i];
        }        
    }
    else if(c=='*'){
        for(int i=0;i<a.size()||i<b.size();i++){
            ans[i]=a[i]*b[i];
        }        
    }
    else{
        for(int i=0;i<a.size()||i<b.size();i++){
            ans[i]=a[i]/b[i];
        }        
    }
return 0;
}
