#include<bits/stdc++.h>
using namespace std;

int main(){
    int R,C,M;
    cin >> R >> C >> M;
    int a[R][C],b[C][R];
    char a_or_b='a';
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i<M;i++){
        int movement;
        cin >> movement;
        if(movement==1){
            if(a_or_b=='a'){
                int tem[R][C];
                for(int j=0;j<R;j++){
                    for(int k=0;k<C;k++){
                        tem[k][j]=a[C-k-1][j];
                    }
                }
                for(int j=0;j<R;j++){
                    for(int k=0;k<C;k++){
                        a[k][j]=tem[k][j];
                    }
                }
            }
            else{
                int tem[C][R];
                for(int j=0;j<C;j++){
                    for(int k=0;k<R;k++){
                        tem[k][j]=b[R-k-1][j];
                    }
                }
                for(int j=0;j<R;j++){
                    for(int k=0;k<C;k++){
                        b[j][i]=tem[j][i];
                    }
                }
            }
        }
        else{
            if(a_or_b=='a'){
                a_or_b='b';
                for(int j=0;j<R;j++){
                    for(int k=0;k<C;k++){
                        b[k][j]=a[j][C-k-1];
                    }
                }
            }
            else{
                a_or_b='a';
                for(int j=0;j<C;j++){
                    for(int k=0;k<R;k++){
                        a[j][k]=b[R-k-1][j];
                    }
                }
            }

        }
    if(a_or_b=='a'){
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    else{
        for(int i=0;i<C;i++){
            for(int j=0;j<R;j++){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
    cout << endl;

    }
    if(a_or_b=='a'){
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    else{
        for(int i=0;i<C;i++){
            for(int j=0;j<R;j++){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }

/*
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout << a[i][j];
        }
        cout << endl;
    }
*/
return 0;
}
