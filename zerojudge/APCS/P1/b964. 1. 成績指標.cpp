#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,score[25],max_fail=INT_MIN,min_success=INT_MAX;

signed main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> score[i];
        if(score[i]>=60) min_success=min(min_success,score[i]);
        else max_fail=max(max_fail,score[i]);
    }
    sort(score,score+n);
    for(int i=0;i<n;i++) cout << score[i] << " ";
  	cout << "\n";
    if(max_fail!=INT_MIN) cout << max_fail << "\n";
    else cout << "best case\n";
    if(min_success!=INT_MAX) cout << min_success;
    else cout << "worst case";
return 0;
}
