#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n;
    while(cin >> k >> n){
        int a[k],num[n],populer,like=0;
        for(int i=0;i<k;i++){
            cin >> a[i];
        }
        for(int i=0;i<k;i++){
            like=max(count(a,a[i]),like);
            if(count(a,a[i])>like) populer=i+1;
        }
        for(int i=0;i<n;i++){
            cin >> num[i];
        }
        int a,shop;
        for(int i=0;i<n;i++){
            for(int j=0;j<num[i];j++){
                
            }
        }
    }
return 0;
}
