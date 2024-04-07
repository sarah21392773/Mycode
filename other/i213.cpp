#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int N,k;
    cin >> N;
    stack<int>v;
    
    for(int i=0;i<N;i++){
        cin >> k;
        if(k==1){
            int x;
            cin >> x;
            v.push(x);
        }
        else if(k==2){
            if(!v.empty()) cout << v.top() <<endl;
            else cout << -1 <<endl;
        }
        else{
            if(!v.empty()) v.pop();
        }
    }
    
return 0;
}
