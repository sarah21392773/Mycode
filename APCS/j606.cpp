#include<bits/stdc++.h>
using namespace std;

int main(){
    int K,Q,R;
    cin >> K >> Q >> R;
    string str;
    cin >> str;
    string ans[R];
    char oldstr[K];
    for(int i=0;i<K;i++) oldstr[i]=str[i];
    for(int i=0;i<Q;i++){
        char temp[K]="";
        int index;
        for(int j=0;j<K;j++){
            cin >> index;
            temp[index-1]=oldstr[j];
        }
        for(int i=0;i<K;i++){
            oldstr[i]=temp[i];
            if(i<R) ans[i]+=temp[i];
        }
    }
    for(int i=0;i<R;i++) cout << ans[i] << endl;
return 0;
}
