#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    while(cin >> N){
        int picture[N+2][N+2];
        for(int i=1;i<N+1;i++){
            for(int j=1;j<N+1;j++){
                cin >> picture[i][j];
            }
        }

        for(int i=1;i<N+1;i++){
            int tips=0;
            for(int j=1;j<N+2;j++){
                if(picture[j][i]==1){
                    tips++;
                }
                else if(tips!=0){
                    cout << tips << " ";
                    tips=0;
                }
                else if(i==N&&j==N+1){
                    cout << 0;
                }
            }
            cout << endl;
        }

        for(int i=1;i<N+1;i++){
            int tips=0;
            for(int j=1;j<N+2;j++){
                if(picture[i][j]==1){
                    tips++;
                }
                else if(tips!=0){
                    cout << tips << " ";
                    tips=0;
                }
                else if(i==N&&j==N+1){
                    cout << 0;
                }
            }
            cout << endl;
        }
    }
return 0;
}
