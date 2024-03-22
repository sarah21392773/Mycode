#include<bits/stdc++.h>
using namespace std;
int main(){

    string a;
    while(cin >> a){
        char c[a.size()];
        string b="";
        for(int i=0;i<a.size();i++){
            c[i]=toupper(a[i]);
            b += c[i];
        }
        if(b=="FOR"){
            cout << "4";
        }
        else if(b=="TO"){
            cout << "2";
        }
        else if(b=="AND"){
            cout << "n";
        }
        else if(b=="YOU"){
            cout << "u";
        }
        else{
            char t = toupper(b[0]);
            cout << t;
        }
    }

return 0;
}
