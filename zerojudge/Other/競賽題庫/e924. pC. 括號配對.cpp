#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string s;
        stack<char> guahow;
        cin >> s;
        for(int i=0;i<s.length();i++){
            if(!guahow.empty()){
                if(guahow.top()=='{'&&s[i]=='}'){
                    guahow.pop();
                }
                else if(guahow.top()=='('&&s[i]==')'){
                    guahow.pop();
                }
                else if(guahow.top()=='['&&s[i]==']'){
                    guahow.pop();
                }
                else if(guahow.top()=='<'&&s[i]=='>'){
                    guahow.pop();
                }
                else guahow.push(s[i]);
            }
            else guahow.push(s[i]);
        }
        cout << (!guahow.empty() ? "N\n" : "Y\n");
    }
return 0;
}
