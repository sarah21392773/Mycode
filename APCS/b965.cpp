#include<bits/stdc++.h>
using namespace std;

int main(){
    int R,C,M;
    cin >> R >> C >> M;
    int A[R][C],B[C][R],arr=0;
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            cin >> A[i][j];
    for(int i=0;i<M;i++){
        int x;
        cin >> x;
        if(x==1){
            if(arr==0) int tem[R][C];
            else int tem[C][R];
            for(int j=0;j<R;j++){
                for(int k=0;k<C;k++){
                    if(arr==0)
                        tem[R-j-1][k]=A[j][k];
                    else
                        tem[R-j-1][k]=B[j][k];
                }
            }
            if(arr==0)
                A=tem;
            else
                B=tem;
        }
        else{
            for(int j=0;j<R;j++){
                for(int k=0;k<C;k++){
                    if(arr=0){
                        B[k][j]=A[j][k];
                    }
                    else(arr=1){
                        A[k][j]=B[j][k];
                    }
                }
            }
            if(arr==0) arr=1;
            else arr=0;
        }
    }
    if(arr==0){
        cout << R << " " << C << endl;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    else{
        cout << C << " " << R << endl;
        for(int i=0;i<C;i++){
            for(int j=0;j<R;j++){
                cout << B[i][j] << " ";
            }
            cout << endl;
        }
    }
return 0;
}
