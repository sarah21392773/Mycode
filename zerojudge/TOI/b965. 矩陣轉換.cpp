#include<bits/stdc++.h>
using namespace std;

int R,C,M;
vector<vector<int>> v(25,vector<int>(25));

void ShanJuan(int r,int c){
    vector<vector<int>> temp(25,vector<int>(25));
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            temp[c-j+1][i]=v[i][j];
    v.clear();
    v=temp;
    swap(c,r);
    R=r,C=c;
}

void FunJuan(int R,int C){
    vector<vector<int>> temp(25,vector<int>(25));
    for(int i=1;i<=R;i++)
        for(int j=1;j<=C;j++)
            temp[R-i+1][j]=v[i][j];
    v.clear();
    v=temp;
}

int main(){
    cin >> R >> C >> M;
    int way[M+5]={0};
    for(int i=1;i<=R;i++)
        for(int j=1;j<=C;j++) cin >> v[i][j];
    for(int i=0;i<M;i++) cin >> way[i];
    for(int i=0;i<M;i++){
        if(way[M-i-1]==0) ShanJuan(R,C);
        else FunJuan(R,C);
    }
    cout << R << " " << C << endl;
    for(int i=1;i<=R;i++)
        for(int j=1;j<=C;j++)
            cout << v[i][j] << " \n"[j==C];
    return 0;
}
