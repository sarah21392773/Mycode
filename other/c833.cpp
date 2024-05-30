#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin >> N >> M;
    map <int,bool> x,y;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            char a;
            cin >> a;
            if(a=='#'){
                x[j]=true;
                y[i]=true;
            }
        }
    }
/*
    for (const auto& s : x) {
        std::cout << "x: " << s.first <<"\n";
    }
    for (const auto& s : y) {
        std::cout << "y: " << s.first <<"\n";
    }
*/
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
