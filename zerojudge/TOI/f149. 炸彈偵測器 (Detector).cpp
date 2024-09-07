#include<iostream>
using namespace std;
int main(){
    int R,C;
    while(cin >> R >> C){
        int bomb[R+2][C+2],detected=0,undetected=0;
        for(int i=0;i<R+2;i++){
            for(int j=0;j<C+2;j++){
                bomb[i][j]=-1;
            }
        }
        for(int i=1;i<R+1;i++){
            for(int j=1;j<C+1;j++){
                cin >> bomb[i][j];
            }
        }
        for(int i=1;i<R+1;i++){
            for(int j=1;j<C+1;j++){
                int detector=0;
                if(bomb[i][j]==5){
                    for (int m=i-1;m<i+2;m++){
                        for(int n=j-1;n<j+2;n++){
                            if(bomb[m][n]==5) {
                                detector++;
                            }
                        }
                    }
                }
                if(detector==1){
                    for (int a=i-1;a<i+2;a++){
                        for(int b=j-1;b<j+2;b++){
                            if(bomb[a][b]==1) bomb[a][b]=2;
                        }
                    }
                }
            }
        }
        for(int i=0;i<R+2;i++){
            for(int j=0;j<C+2;j++){
                if(bomb[i][j]==1){
                    undetected++;
                }
                else if(bomb[i][j]==2){
                    detected++;
                }
            }
        }
        cout << detected << " " << undetected;
    }

return 0;
}
