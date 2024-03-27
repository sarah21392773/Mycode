#include<bits/stdc++.h>
using namespace std;
int main(){

    int N,M,piece;         //N為人數，M為Pizza數，piece為Pizza可被切成的片數
    cin >> N >> M;
    piece = 8*M;           //一塊Pizza可被切成8片
    if(piece<2*N){         //每一人至少吃2片
        cout << "Not enough";
    }
    else if(piece>3*N){    //每一人最多吃3片
        cout << "Too much";
    }
    else{
        cout << "Yes";
    }
  
return 0;
}
