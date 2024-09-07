#include<bits/stdc++.h>
using namespace std;

//n個圓盤從sta經過mid移動到ter
void move(int n,char sta,char mid,char ter){
    //有圓盤才要移動
    if(n>0){
        //先把上面n-1個圓盤從sta搬到mid
        move(n-1,sta,ter,mid);
        //輸出移動過程
        cout << "Move ring " << n << " from " << sta << " to " << ter << endl;
        //再把n-1個圓盤從mid移動到ter
        move(n-1,mid,sta,ter);
    }
}

int main(){
    int n;
    while(cin >> n){
        move(n,'A','B','C');
        cout << endl;
    }
return 0;
}
