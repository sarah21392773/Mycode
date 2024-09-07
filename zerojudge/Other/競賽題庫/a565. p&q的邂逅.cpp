#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int thenum=0;
        string a;
        cin >> a;
        stack<char>s;
        for(int j=0;j<a.size();j++){
            if(a[j]!='.'){
                if(!s.empty()){
                    if(s.top()=='p' && a[j]=='q'){
                        s.pop();
                        thenum++;
                    }
                    else{
                        s.push(a[j]);
                    }
                }
                else{
                    s.push(a[j]);
                }
            }
        }
        cout << thenum <<endl;
    }
return 0;
}
