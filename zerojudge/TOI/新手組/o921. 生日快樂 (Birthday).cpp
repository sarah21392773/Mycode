#include<bits/stdc++.h>
#define int long long
using namespace std;

pair<int,int> now,target;
int ans;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> now.first >> now.second >> target.first >> target.second;
    if(now.first==target.first){
        if(now.second<=target.second)
            ans=target.second-now.second;
        else{
            for(int i=1;i<=12;i++) ans+=month[i];
            ans-=(now.second-target.second);
        }
    }
    else if(now.first<target.first){
        ans+=(month[now.first]-now.second)+target.second;
        for(int i=now.first+1;i<target.first;i++) ans+=month[i];
    }
    else{
        ans=(month[now.first]-now.second)+(target.second);
        for(int i=now.first+1;i<=12;i++) ans+=month[i];
        for(int i=1;i<target.first;i++) ans+=month[i];
    }
    cout << ans << "\n";
return 0;
}
