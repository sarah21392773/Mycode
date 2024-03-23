#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    while(cin >> m >> n){
        int color[n],beauty=0;
        for(int i=0;i<n;i++){
            cin >> color[i];
        }
        for(int i=m-1;i<n;i++){
            for(int j=i;j>i-m;j--){
                for(int k=j-1;k>i-m;k--){
                    if(color[j]==color[k]){
                        j=i-m;
                    }
                    else if(k==i-m+1&&j==i-m+2){
                        beauty++;
                    }
                }
            }
        }
        cout << beauty << endl;
    }
return 0;
}
