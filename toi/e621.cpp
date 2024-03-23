#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    while(cin >> n){
        int A,B,C;
        for(int i=0;i<n;i++){
            int p=0;
            cin >> A >> B >> C;
            for(int j=A+1;j<B;j++){
                if(j%C!=0){
                    cout<<j<<" ";
                    p++;
                }
            }
            if(p==0){
                cout << "No free parking spaces.";
            }
            cout << endl;
        }
    }
return 0;
}
