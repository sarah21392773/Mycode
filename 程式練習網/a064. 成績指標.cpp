#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,yesmin=101,nomax=-1;
    while(cin >> n){
        int score[n];
        for(int i=0;i<n;i++){
            cin >> score[i];
            if (score[i]>nomax && score[i]<60){
                nomax=score[i];
            }
            else if(score[i]<yesmin && score[i]>=60){
                yesmin=score[i];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if (score[i]<score[j]){
                        int t=score[i];
                        score[i]=score[j];
                        score[j]=t;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout << score[i] << " ";
        }
        cout << endl;
        if(nomax==-1){
            cout << "best case"<<endl;
        }
        else{
            cout << nomax << endl;
        }
        if(yesmin==101){
            cout << "worst case"<<endl;
        }
        else{
            cout << yesmin << endl;
        }
    }
return 0;
}
