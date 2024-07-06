#include<bits/stdc++.h>
using namespace std;

string K,S,ans;
int L;
map<string,int> is_exist;

void DFS(int idx){
    //如果ans長度達L
    if(idx>=L){
        //如果出現在is_exist中，就不是答案
        if(is_exist[ans]>=1) return;
        //否則是答案
        cout << ans << endl;
        exit(0);
    }
    if (idx >= ans.size()) return;
    //否則ans長度未達L，就繼續枚舉
    for(int i=0;i<S.size();i++){
        ans[idx] = S[i];
        // 繼續 DFS，因為選了一個字母所以 idx 和 cnt 都要 + 1
        DFS(idx+1);
    }
}

int main(){

    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> K >> L >> S;

    //看S中出現字串
    for(int i=0;i<S.length()-L+1;i++){
        is_exist[S.substr(i,L)]++;
        //cout << S.substr(i,L) << endl;
    }

    //檢查最小字典(DFS)
    ans=string(L,S[0]);
    DFS(0);

return 0;
}
