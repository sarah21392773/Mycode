#include<bits/stdc++.h>
using namespace std;

int y[15];

int game(int a,int b){
    if(a==0){
        if(b==2) return 0;
        if(b==5) return 1;
        return 2;
    }
    if(a==2){
        if(b==5) return 0;
        if(b==0) return 1;
        return 2;
    }
    if(a==5){
        if(b==0) return 0;
        if(b==2) return 1;
        return 2;
    }
}

int change(int a){
    if(a==0) return 5;
    if(a==2) return 0;
    if(a==5) return 2;
}

int main(){
    int F,N;
    cin >> F >> N;
    for(int i=1;i<=N;i++){
        cin >> y[i];
        cout << F << " ";
        int result=game(F,y[i]);
        if(result==0){
            cout << ": Won at round " << i << "\n";
            exit(0);
        }
        if(result==1){
            cout << ": Lost at round " << i << "\n";
            exit(0);
        }
        if(y[i]==y[i-1] && i!=1) F = change(y[i]);
        else F = y[i];
    }
    cout << ": Drew at round " << N;
return 0;
}
