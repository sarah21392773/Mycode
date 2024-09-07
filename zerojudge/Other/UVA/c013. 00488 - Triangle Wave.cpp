#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,A,F;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> A >> F;
        for(int k=0;k<F;k++){
            for(int i=1;i<=A;i++){
                for(int j=0;j<i;j++) cout << i;
                cout << endl;
            }
            for(int i=A-1;i>0;i--){
                for(int j=0;j<i;j++) cout << i;
                cout << endl;
            }
            cout << endl;
        }
    }
    return 0;
}
