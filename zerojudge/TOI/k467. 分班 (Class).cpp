#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=0;            //N為學生人數
    while(cin >> N){
        int Li[N],Mi[N],ch=0,ma=0;    //Li為語文成績，Mi為數理成績，ch為語文班人數，ma為數理班人數
        for(int i=0;i<N;i++){
            cin >> Li[i];
        }
        for(int i=0;i<N;i++){
            cin >> Mi[i];
        }
//語文班        
        for(int i=0;i<N;i++){        //比較每位學生的成績
            if(Li[i]>Mi[i]){         //若語文高於數理，則為語文班
                cout << i+1 << " ";
                ch++;
            }
        }
        if(ch==0){                    //若學生人數為0，則輸出-1
            cout << "-1";
        }
        cout << endl;
//數理班        
        for(int i=0;i<N;i++){        //比較每位學生的成績
            if(Li[i]<Mi[i]){         //若數理高於語文，則為數理班
                cout << i+1 << " ";
                ma++;
            }
        }
        if(ma==0){                   //若學生人數為0，則輸出-1
            cout << "-1";
        }
        cout << endl;
        
    }
return 0;
}
