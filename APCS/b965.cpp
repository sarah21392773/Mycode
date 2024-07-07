#include<bits/stdc++.h>
using namespace std;

int main(){
    int R,C,M;
    cin >> R >> C >> M;
    int a[R][C],b[C][R];
    char rect='a';
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> a[i][j];
            b[j][i]=0;
        }
    }
    for(int i=0;i<M;i++){
        int m;
        cin >> m;
        //旋轉 0
        if(m==0){
            if(rect=='a'){
                for(int i=0;i<R;i++){
                    for(int j=0;j<C;j++){
                        b[j][R-i-1]=a[i][j];
                    }
                }
                rect='b';
            }
            else{
                for(int i=0;i<C;i++){
                    for(int j=0;j<R;j++){
                        a[j][C-i-1]=b[i][j];
                    }
                }
                rect='a';
            }
        }
        //翻轉 1
        else{
            if(rect=='a'){
                int tem[R][C];
                for(int i=0;i<R;i++){
                    for(int j=0;j<C;j++){
                        tem[i][j]=a[R-1-i][j];
                    }
                }
                for(int i=0;i<R;i++){
                    for(int j=0;j<C;j++){
                        a[i][j]=tem[i][j];
                    }
                }
            }
            else{
                int tem[C][R];
                for(int i=0;i<C;i++){
                    for(int j=0;j<R;j++){
                        tem[i][j]=b[C-1-i][j];
                    }
                }
                for(int i=0;i<C;i++){
                    for(int j=0;j<R;j++){
                        b[i][j]=tem[i][j];
                    }
                }
            }
        }
        /*
        //輸出
        if(rect=='a'){
            cout << "a" << endl;
            for(int i=0;i<R;i++){
                for(int j=0;j<C;j++){
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
        else{
            cout << "b" << endl;
            for(int i=0;i<C;i++){
                for(int j=0;j<R;j++){
                    cout << b[i][j] << " ";
                }
                cout << endl;
            }
        }
        cout << endl;
        //
    */
    }
    //輸出
    if(rect=='a'){
        cout << R << " " << C << endl;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cout << a[i][j];
                if(j!=C-1){
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    else{
        cout << C << " " << R << endl;
        for(int i=0;i<C;i++){
            for(int j=0;j<R;j++){
                cout << b[i][j];
                if(j!=R-1){
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
return 0;
}
