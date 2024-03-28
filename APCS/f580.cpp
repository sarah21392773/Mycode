#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,a,b;
    cin >> n >> m;
    int dr[n][5];
    for(int i=0;i<n;i++){
        dr[i][0]=1;
    }
    for(int i=0;i<m;i++){
        cin >> a >> b;
        if(a>0 && b>0){
            swap(dr[a-1],dr[b-1]);
        } 
        
    }
return 0;
}
