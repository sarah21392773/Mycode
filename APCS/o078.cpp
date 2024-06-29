#include<bits/stdc++.h>
using namespace std;

int main(){
    string K,S;
    int L;
    cin >> K >> L >> S;
    
    //看S中出現字串
    map<string,int> is_exist;
    for(int i=0;i<S.length()-L+1;i++){
        string a;
        for(int j=i;j<i+L;j++){
            a+=S[j];
        }
        is_exist[a]++;
    }
    
    //檢查最小字典
    int loc[L.length()]={0},now=0,last=0;
    while(true){
        if(now<)
    }
return 0;
}
