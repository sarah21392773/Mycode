#include<bits/stdc++.h>
using namespace std;
int main(){

    string a;
    while(cin >> a){                   //a可能大寫或小寫
        char c[a.size()];
        string b="";
        for(int i=0;i<a.size();i++){
            c[i]=toupper(a[i]);        //將字串全部轉成大寫
            b += c[i];                 //儲存於b字串中(大寫)
        }
        if(b=="FOR"){                  //特殊縮寫規則
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
            char t = toupper(b[0]);    //若不符合特殊縮寫規則，就輸出單字的大寫開頭
            cout << t;
        }
    }

return 0;
}
