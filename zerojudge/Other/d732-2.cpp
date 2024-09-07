#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,k,x,nums[100005];

signed main(){
    cin.tie(0);ios::sync_with_stdio(false);
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    while(k--){
        cin >> x;
        if(binary_search(nums,nums+n,x)){
            cout << lower_bound(nums,nums+n,x)-&(nums[0])+1 << "\n";
        }
        else cout << "0\n";
    }
return 0;
}
