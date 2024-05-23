#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    char place;
    map<int,bool> x,y;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> place;
            if(place=='#'){
                x[j]=true;
                y[i]=true;
            }
        }
    }
return 0;
}
