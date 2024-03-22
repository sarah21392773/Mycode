#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    while(cin >> N){
        for(int i=0;i<N;i++){
            int k,a=0;
            cin >> k;
            //cout << k << endl;
            if(k%6==0){
                cout << "1" << " ";
            }
            else if(k%3!=0 && k%2==1){
                cout << "2" << " ";
            }
            else if (k%7!=0 && k%2==0){
                cout << "3" << " ";
            }
            else{
                for(int i=2;i<k/2;i++){
                    if(k/i==i&&k%i==0){
                        cout << "3" << " ";
                        a=1;
                        break;
                    }
                }
                if(a==0){
                    cout << "0" << " ";
                }

            }

        }
        cout << endl;
    }
return 0;
}
