#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;          //有n部電影可供選擇
    while(cin >> n){
        
        //紀錄每一部電影的開始時間
        int h[n+1],m[n+1];
        for(int i=0;i<n+1;i++){
            cin >> h[i] >> m[i];
        }
        
        //將現在時間變成分鐘
        int now=h[n]*60+m[n];
        
        //判斷可看的電影
        for(int i=0;i<n;i++){
                
            //將電影開始時間轉成分鐘
            int x=h[i]*60+m[i];
            
            //如果電影在20分鐘後開始，就輸出電影開始時間
            if(x-now>=20){
                if(h[i]<10){
                    cout << '0' << h[i] <<" ";
                }
                else{
                    cout << h[i] << " ";
                }
                if(m[i]<10){
                    cout << '0' << m[i] <<endl;
                }
                else{
                    cout << m[i] <<endl;
                }
                break;
            }
            //若沒電影可看，就輸出"Too Late"
            else if(i==n-1) cout << "Too Late" << endl;
        }
    }
return 0;
}
