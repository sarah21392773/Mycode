#include<bits/stdc++.h>
using namespace std;

bool change(string person){
    int old=0;
    for(int i=1;i<person.size();i++){
        old+=(person[i]-'0')*pow(10,person.size()-i-1);
    }
    if(old>=65||old<=12){
        return true;
    }
    else{
        if(old>=35&&old<=45&&person[0]=='F'){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int n,k,escape=0,ans=0;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        if(escape>=k) break;
        string person;
        cin >> person;
        if(change(person)==true){
            ans+=i-escape;
            escape++;
        }
    }
    cout << ans;
return 0;
}
