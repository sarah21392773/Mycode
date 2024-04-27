#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);        //加優化器避免TLE
    cin.tie(0);
    int n;                           //有n組等候配對名單
    cin >> n;
    for(int i=0;i<n;i++){
        int ans=0;                  //ans為配對成功最大數
        string a;                   //a是等候配對名單
        cin >> a;
        stack<char>s;                //把等候配對名單在s裡做運算
        for(int j=0;j<a.size();j++){
            if(a[j]!='.'){           //若遇到.直接忽略
                if(!s.empty()){       //如果s不是空的
                    if(s.top()=='p' && a[j]=='q'){    //並且能夠配對成功
                        s.pop();                    //就把配對成功的人趕出s
                        ans++;                    //成功數量加一
                    }
                    else{
                        s.push(a[j]);                //若配對失敗，就直接將人推進s
                    }
                }
                else{
                    s.push(a[j]);                //若s為空，就直接將人推進s
                }
            }
        }
        cout << ans <<endl;                    //輸出成功數
    }
return 0;
}
