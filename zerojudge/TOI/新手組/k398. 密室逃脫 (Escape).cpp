#include<iostream>
using namespace std;

int main(){
    int R,C;
    string S;
    while(cin >> R >> C){
        int x=0,y=0;
        cin>>S;
        char room[R][C];
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                room[i][j]='.';
            }
        }
        room[0][0]='*';
        for(int i=1;i<S.size()+1;i++){
            for(int j=0;j<S[i-1]-'0';j++){
                if(i%4==0){
                    if(y!=0){
                        y--;
                    }
                }
                else if(i%4==3){
                    if(x!=0){
                        x--;
                    }
                }
                else if(i%4==2){
                    if(y!=R-1){
                        y++;
                    }
                }
                else{
                    if(x!=C-1){
                        x++;
                    }
                }
                room[y][x]='*';
            }
        }
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cout << room[i][j];
            }
            cout << endl;
        }
    }
return 0;
}
