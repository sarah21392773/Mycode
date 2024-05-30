#include<bits/stdc++.h>
using namespace std;

int main(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int N,M;
    cin >> N >> M;
    vector<vector<char>>filed;
    map <int,bool> x,y;
    for(int i=0;i<N;i++){
        vector<char> row;
        for(int j=0;j<M;j++){
            char a;
            cin >> a;
            if(a=='#'){
                x[j]=true;
                y[i]=true;
            }
            row.push_back(a);
        }
        filed.push_back(row);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(x[j]==true||y[i]==true){
                cout << '#';
            }
            else{
                cout << 'X';
            }
        }
        cout << endl;
    }
return 0;
}
