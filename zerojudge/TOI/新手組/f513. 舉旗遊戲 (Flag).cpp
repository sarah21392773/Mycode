#include<iostream>
using namespace std;
int main(){
    int R,C;
    while(cin >> R >> C){
        int flag[R+2][C+2],out=0;
        for(int i=0;i<R+2;i++){
            for(int j=0;j<C+2;j++){
                flag[i][j]=0;
            }
        }
        for(int i=1;i<R+1;i++){
            for(int j=1;j<C+1;j++){
                cin >> flag[i][j];
            }
        }

        for(int i=1;i<R+1;i++){
            for(int j=1;j<C+1;j++){
                int c=0;
                for (int m=i-1;m<i+2;m++){
                    for(int n=j-1;n<j+2;n++){
                        if(flag[m][n]==flag[i][j]) c++;
                    }
                }
                if(c==1) out++;
            }
        }
        cout << out;
    }
return 0;
}
