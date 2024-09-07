#include<bits/stdc++.h>
using namespace std;

int main(){
    int M,N;
    cin >> M >> N;
    int ant_total=0,bug_total=0;
    for(int i=0;i<M;i++){
        int height;
        cin >> height;
        ant_total+=height;
    }
    for(int j=0;j<N;j++){
        int height;
        cin >> height;
        bug_total+=height;
    }
    cout << (M>N&&ant_total>bug_total ? "Yes" : "No");
return 0;
}
