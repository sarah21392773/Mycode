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
        }
        for(int i=0;i<52;i++){
            if(poker[i]<p&&poker[i]*52<=n){
                p=poker[i];
            }
            big=max(big,poker[i]);
        }
        if (p==500) p=0;
        int more=0;
        for(int i=0;i<52;i++){
            more+=big-poker[i];
        }
        cout << p << " " << more << endl;
    }
return 0;
}
