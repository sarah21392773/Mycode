#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=0;
    while(cin >> N){
        int Li[N],Mi[N],ch=0,ma=0;
        for(int i=0;i<N;i++){
            cin >> Li[i];
        }
        for(int i=0;i<N;i++){
            cin >> Mi[i];
        }
        for(int i=0;i<N;i++){
            if(Li[i]>Mi[i]){
                cout << i+1 << " ";
                ch++;
            }
        }
        if(ch==0){
            cout << "-1";
        }
        cout << endl;
        for(int i=0;i<N;i++){
            if(Li[i]<Mi[i]){
                cout << i+1 << " ";
                ma++;
            }
        }
        if(ma==0){
            cout << "-1";
        }
        cout << endl;
    }
return 0;
}
