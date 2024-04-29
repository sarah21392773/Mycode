#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int poker[52]={0},p=500,big=0;
        for(int i=0;i<n;i++){
            int card;
            cin >> card;
            poker[card-1]++;
            if(poker[card-1]<p&&poker[card-1]*52<=n){
                p=poker[card-1];
            }
            big=max(big,poker[card-1]);
//            cout << p << endl;
        }
//        cout << big << endl;
        if (p==500) p=0;
        int more=0;
        for(int i=0;i<52;i++){
            more+=big-poker[i];
        }
        cout << p << " " << more << endl;
    }
return 0;
}
