#include<bits/stdc++.h>
using namespace std;

int R,C,n,height,th,rest;
int where;
char type;

bool check(vector<vector<int>>& box){
    if(type=='A'){
        for(int i=C-1;i>=0;i--){
            for(int j=height;j<height+4;j++){
                if(box[j][i]==1){
                    if(i==C-1) return false;
                    else{
                        rest-=4;
                        where=i+1;
                        return true;
                    }
                }
                else if(i==0&&j==height+3){
                    rest-=4;
                    where=i;
                    return true;
                }
            }
        }
    }
    if(type=='B'){
        for(int i=C-3;i>=0;i--){
            for(int j=i;j<i+3;j++){
                if(box[height][j]==1){
                    if(i==C-3) return false;
                    else{
                        rest-=3;
                        where=i+3;
                        return true;
                    }
                }
                else if(i==0&&j==i+2){
                    rest-=3;
                    where=i;
                    return true;
                }
            }
        }
    }
    if(type=='C'){
        for(int i=C-2;i>=0;i--){
            for(int j=i;j<i+2;j++){
                if(box[height][j]==1||box[height+1][j]==1){
                    if(i==C-2) return false;
                    else{
                        rest-=4;
                        where=i+2;
                        return true;
                    }
                }
                else if(i==0&&j==i+1){
                    rest-=4;
                    where=i;
                    return true;
                }
            }
        }
    }
    if(type=='D'){
        for(int i=C-3;i>=0;i--){
            for(int j=i;j<i+3;j++){
                if(box[height+1][j]==1){
                    if(i==C-3) return false;
                    else{
                        rest-=4;
                        where=i+3;
                        return true;
                    }
                }
                else if(j==i+2&&box[height][j]==0&&i==0){
                    rest-=4;
                    where=i;
                    return true;
                }
            }
        }
    }
    if(type=='E'){
        for(int i=C-2;i>=0;i--){
            for(int j=i;j<i+2;j++){
                if(box[height+2][j]==1||box[height+1][j]==1){
                    if(i==C-2) return false;
                    else{
                        rest-=5;
                        where=i+1;
                        return true;
                    }
                }
                else if(i==0&&j==i+1&&box[height][j]==0){
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
        for(int i=where;i<where+2;i++){
            box[height+1][i]=1;
            box[height+2][i]=1;
        }
        box[height][where+1]=1;
    }
    return box;
}

int main(){
    cin >> R >> C >> n;
    vector<vector<int>> box(R, vector<int>(C, 0));
    rest=R*C;

    for(int i=0;i<n;i++){
        cin >> type >> height;
        if(check(box)==false){
            th++;
        }
        else{
            box=print(box);
        }
    }

    cout << rest << " " << th;
return 0;
}
