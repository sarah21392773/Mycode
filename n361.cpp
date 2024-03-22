#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    while(cin >> N){
        for(int i=0;i<N;i++){
            int k,a=0;
            cin >> k;                        //k為房號
            if(k%6==0){
                cout << "1" << " ";          //若此數為2和3的倍數(即6的倍數)，則為1號房
            }
            else if(k%3!=0 && k%2==1){
                cout << "2" << " ";          //若此數為奇數且不是3的倍數，則為2號房
            }
            else if (k%7!=0 && k%2==0){
                cout << "3" << " ";          //若此數為偶數且不是7的倍數，則為3號房
            }
            else{
                for(int i=2;i<k/2;i++){
                    if(k/i==i&&k%i==0){
                        cout << "3" << " ";  //若此數為完全平方數，則為3號房
                        a=1;
                        break;
                    }
                }
                if(a==0){
                    cout << "0" << " ";      //若此數都不符合，則輸出0
                }

            }

        }
        cout << endl;
    }
return 0;
}
