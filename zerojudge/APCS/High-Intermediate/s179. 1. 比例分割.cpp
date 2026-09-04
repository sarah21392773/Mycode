#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m;
int pre_sum[100005];
int l, r, a, b;

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int w;
        cin >> w;
        pre_sum[i] = pre_sum[i - 1] + w;
    }

    while(m--){
        cin >> l >> r >> a >> b;
        int Slr = pre_sum[r] - pre_sum[l - 1];
        int target_sum = (Slr * a + (a + b - 1)) / (a + b);
        int target_prefix = pre_sum[l - 1] + target_sum;
        auto it = lower_bound(pre_sum + l, pre_sum + r + 1, target_prefix);
        cout << (it - pre_sum) << "\n";
    }

    return 0;
}
