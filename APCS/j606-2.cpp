#include<bits/stdc++.h>
using namespace std;

int K,Q,R;
string str[25];
char s[25];

int main(){
    cin >> K >> Q >> R >> str[0];
    for(int i=0;i<Q;i++){
        s[25]={};
        for(int j=0;j<K;j++){
            int num;
            cin >> num;
            s[num-1]=str[i][j];
        }
        for(auto &j:s) str[i+1]+=j;
    }
    for(int i=0;i<R;i++){
        for(int j=1;j<=Q;j++)
            cout << str[j][i];
        cout << endl;
    }
return 0;
}
