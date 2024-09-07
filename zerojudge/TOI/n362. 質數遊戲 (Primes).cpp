#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    while(cin >> N){
        int i=2,A=0,B=0;        //i為被除數，AB為兩質數
        bool is_find=false;    //is_find用來辨認是否為兩質數乘積
        while(i<=sqrt(N)){      //i的範圍從2到根號N    !!從2跑到N會TLE
            if(N%i==0){        
                N/=i;           //若N為i的倍數，則將N除i
                A=i;            //i為第一個質數A
                int j=2,p=0;    //j為被除數，p用以紀錄N/i後(新的N)是否為質數
                if(j==N){       //若原N為完全平方數
                    B=N;        //即A=B
                    is_find=true;
                }
                while(j<=sqrt(N)+1){    //否則繼續判斷
                    if(N%j==0){         //若新的N能被j整除，那必定不是質數(因為j不可能到N)
                        p=1;             //改變p狀態(新的N不是質數)
                        break;
                    }
                    j++;
                }
                if(p==0){               //p=0(是質數)
                    B=N;                //第二個質數B會是剩餘的N
                    is_find=true;
                }
                break;
            }
            i++;
        }

        if(is_find==true){              //若原N由兩質數組成，就輸出兩質數
            cout << A <<" "<< B <<endl;
        }
        else{
            cout << 0 << " " << 0 << endl;  //否則輸出0 0
        }

    }
return 0;
}
