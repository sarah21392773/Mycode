#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int students[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> students[i][j];
        }
    }
    pair<int,int>grades[N],better,wrost;

    for(int i=0;i<N;i++){
        for(int j=1;j<M;j++){
            if(students[i][j]>=students[i][j-1]){
                grades[i].first+=students[i][j]-students[i][j-1];
            }
            else{
                grades[i].second+=students[i][j-1]-students[i][j];
            }
        }
        if(grades[i].first>better.second){
            better.first=i+1;
            better.second=grades[i].first;
        }
        if(grades[i].second>wrost.second){
            wrost.first=i+1;
            wrost.second=grades[i].second;
        }
    }
    cout << better.first << endl << wrost.first;

return 0;
}
