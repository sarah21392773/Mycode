#include<bits/stdc++.h>
using namespace std;

int main(){
    int H,W,N;
    cin >> H >> W >> N;
    int filed[H][W];
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            filed[i][j]=0;
        }
    }
    for(int i=0;i<N;i++){
        int r,c,t,x;
        cin >> r >> c >> t >> x;
        for(int i=r-t;i<=r+t;i++){
            for(int j=c-t;j<=c+t;j++){
                if(i>=0&&i<H&&j>=0&&j<W){
                    if(abs(i-r)+abs(j-c)<=t){
                        filed[i][j]+=x;
                    }
                }
            }
        }
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cout << filed[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}
