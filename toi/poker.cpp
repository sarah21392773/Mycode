#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int poker[52]={0},p=500;
        for(int i=0;i<n;i++){
            int card;
            cin >> card;
            poker[card-1]++;
            p=min(p,poker[card-1]);
//            cout << p << endl;
        }
        int more=0;
        for(int i=0;i<52;i++){
            if(poker[i]>p){
                cout << poker[i] << " " << p << endl;
                more+=poker[i]-p;
            }
        }
        cout << p << " " << more << endl;
    }
return 0;
}
