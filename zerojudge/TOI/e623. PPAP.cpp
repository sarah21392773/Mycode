#include<bits/stdc++.h>
using namespace std;

int main(){

        int num;
        cin >> num;
        int turn=(num-1)/4+1,many=0;
        int j=turn,res=num;
        while(j>0){
            many++;
            for(int i=0;i<many;i++){
                if(many!=1) res-= 4;
                j--;
            }
        }
        res+=4*(many-1)-1;
        res/=many;
        if(res==0) cout << "Pen" << endl;
        else if(res==1) cout << "Pineapple" << endl;
        else if(res==2) cout << "Apple" << endl;
        else cout << "Pineapple pen" << endl;
    return 0;
}
