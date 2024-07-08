#include<bits/stdc++.h>
using namespace std;

int R,C,n,height,th,rest;
char type;

bool check(int box[]){
    if(type=='A'){
        int how=0;
        for(int i=0;i<4;i++){
            if(box[height+i]+1>C){
                return false;
            }
            else{
                how=max(how,box[height+i]+1);
            }
        }
        rest-=4;
        for(int i=0;i<4;i++){
            box[height+i]=how;
        }
        return true;
    }
    if(type=='B'){
        if(box[height]+3>C){
            return false;
        }
        else{
            rest-=3;
            box[height]+=3;
            return true;
        }
    }
    if(type=='C'){
        int how=0;
        for(int i=0;i<2;i++){
            if(box[height+i]+2>C){
                return false;
            }
            else{
                how=max(how,box[height+i]+2);
            }
        }
        rest-=4;
        for(int i=0;i<2;i++){
            box[height+i]=how;
        }
        return true;
    }
    if(type=='D'){
        if(box[height+1]+3>C||box[height]+1>C){
            return false;
        }
        else{
            rest-=4;
            int how=max(box[height]+=1,box[height+1]+=3);
            box[height]=how;
            box[height+1]=how;
            return true;
        }
    }
    if(type=='E'){
        if(box[height+1]+2>C||box[height+2]+2>C||box[height]+1>C){
            return false;
        }
        else{
            rest-=5;
            int how=max(box[height+2]+=2,box[height+1]+=2);
            how=max(box[height]+=1,how);
            box[height]=how;
            box[height+1]=how;
            return true;
        }
    }
}

int main(){
    cin >> R >> C >> n;
    int box[R]={0};
    rest=R*C;

    for(int i=0;i<n;i++){
        cin >> type >> height;
        if(check(box)==false){
            th++;
        }
    }

    cout << rest << " " << th;
return 0;
}
