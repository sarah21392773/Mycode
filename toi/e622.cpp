#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,S,ThePet=0,MaxCP=0;
    cin >> n >> S ;
    for(int i=0;i<n;i++){
        int CP=0,IV=0;
        cin >> CP >> IV;
        if(IV<30){
            CP+=S/1000*10;
        }
        else if(IV<40){
            CP+=S/1000*50;
        }
        else{
            CP+=S/1000*100;
        }
        if(CP>MaxCP){
            MaxCP=CP;
            ThePet=i+1;
        }
    }
    cout<<ThePet<<" "<<MaxCP;
    return 0;
}
