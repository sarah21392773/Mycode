#include<bits/stdc++.h>
using namespace std;

struct TheBoss{
    int r=0,c=0,s=0,t=0;
    int is_live=1;
};

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int boss_num=k
    vector<int>bomb[3]={0};

    TheBoss boss[4];
    for(int i=0;i<k;i++){
        cin >> boss[i].r >> boss[i].c >> boss[i].s >> boss[i].t;
    }
    while(boss_num>0){
        for(int i=0;i<k;i++){
            if(boss[i].is_live==1){
                if(boss[i].r+boss[i].s>=m||boss[i].r+boss[i].s<0||boss[i].c+boss[i].t>=n||boss[i].c+boss[i].t<0){
                    boss_num--;
                    boss[i].is_live=0;
                }
                else{
                    bomb[0].push(boss[i].r);
                    bomb[1].push(boss[i].c);
                    bomb[2].push(1);
                    boss[i].r+=boss[i].s;
                    boss[i].c+=boss[i].t;
                }
            }
        }
        if()
    }
/*
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << filed[i][j] << " ";
        }
        cout << endl;
    }
*/
return 0;
}
