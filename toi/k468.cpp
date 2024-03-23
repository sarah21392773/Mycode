#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,S,F;
    while(cin >> N >> S >> F){
        int target[N+2],bang=0,shot; //bang是需要射擊幾次，shot是目前射中的數值
        int s=0,now=1; //s是已經射了幾個F，now是目前射中的位置
        for(int i=0;i<N+2;i++){
            target[i]=-1;
        }
        for(int i=1;i<N+1;i++){
            cin >> target[i];
        }
        while(true){
            if(target[now]!=-1){    //先確認還沒被擊中

                bang++;
                shot=target[now];
                target[now]=-1;     //被射到就變-1
                if(shot==F){
                    s++;            //若射中的為F，則s加一
                }

                for(int i=now+1;i<N+2;i++){  //老闆's turn
                    if(target[i]==shot){
                        if(target[i]==F){
                            s++;            //若射中的為F，則s加一
                        }
                        target[i]=-1;
                        break;
                    }
                }

            }
            if(s==S || now==N){
                break;      //達成目標時，就break掉
            }
            now++;                  //移動至下一標靶

        }
        cout << bang << endl;
    }

return 0;
}
