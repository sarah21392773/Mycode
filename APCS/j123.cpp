#include<bits/stdc++.h>
using namespace std;

int R,C,n,height,th,rest;
int where;
char type;

bool check(vector<vector<int>>& box){
    if(type=='A'){
        for(int i=0;i<C;i++){
            for(int j=height;j<height+4;j++){
                if(box[j][i]==1){
                    if(i==C-1) return false;
                    else j=height+4;
                }
                else if(j==height+3){
                    rest-=4;
                    where=i;
                    return true;
                }
            }
        }
    }
    if(type=='B'){
        for(int i=0;i<C-3;i++){
            for(int j=i;j<i+3;j++){
                if(box[height][j]==1){
                    if(i==C-4) return false;
                    else j=i+3;
                }
                else if(j==i+2){
                    rest-=3;
                    where=i;
                    return true;
                }
            }
        }
    }
    if(type=='C'){
        for(int i=0;i<C-2;i++){
            for(int j=i;j<i+2;j++){
                if(box[height][j]==1||box[height+1][j]==1){
                    if(i==C-3) return false;
                    else j=i+2;
                }
                else if(j==i+1){
                    rest-=4;
                    where=i;
                    return true;
                }
            }
        }
    }
    if(type=='D'){
        for(int i=0;i<C-3;i++){
            for(int j=i;j<i+3;j++){
                if(box[height+1][j]==1){
                    if(i==C-4) return false;
                    else j=i+3;
                }
                else if(j==i+2&&box[height+1][j]==0){
                    rest-=4;
                    where=i;
                    return true;
                }
            }
        }
    }
    if(type=='E'){
        for(int i=0;i<C-2;i++){
            for(int j=i;j<i+2;j++){
                if(box[height+1][j]==1||box[height+2][j]==1){
                    if(i==C-3) return false;
                    else j=i+2;
                }
                else if(j==i+1&&box[height][j]==0){
                    rest-=5;
                    where=i;
                    return true;
                }
            }
        }
    }
    return false;
}

vector<vector<int>> print(vector<vector<int>>& box){
    if(type=='A'){
        for(int i=height;i<height+4;i++){
            box[i][where]=1;
        }
    }
    if(type=='B'){
        for(int i=where;i<where+3;i++){
            box[height][i]=1;
        }
    }
    if(type=='C'){
        for(int i=where;i<where+2;i++){
            box[height][i]=1;
            box[height+1][i]=1;
        }
    }
    if(type=='D'){
        for(int i=where;i<where+3;i++){
            box[height+1][i]=1;
        }
        box[height][where+2]=1;
    }
    if(type=='E'){
        for(int i=height;i<height+3;i++){
            box[i][where]=1;
            box[i][where+1]=1;
        }
        box[height][where]=1;
    }
    return box;
}

int main(){
    cin >> R >> C >> n;
    vector<vector<int>> box(R, vector<int>(C, 0));
    rest=R*C;
/*
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            box[i][j]=0;
        }
    }
*/
/*
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout << box[i][j];
        }
        cout << endl;
    }
*/
    for(int i=0;i<n;i++){
        cin >> type >> height;
        if(check(box)==false){
            th++;
        }
        else{
            cout << "my type " << type << " rest? " << rest<<endl;
            box=print(box);
        }
    }
//
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout << box[i][j];
        }
        cout << endl;
    }
//
    cout << rest << " " << th;
return 0;
}
