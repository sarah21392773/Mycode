#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int height[N]={0},weight[N]={0},ans[N]={0},ans_index=0;
    for(int i=0;i<N;i++) cin >> height[i];
    for(int i=0;i<N;i++){
        cin >> weight[i];
        ans[i]=height[i]*weight[i];
        if(ans[i]<=ans[ans_index]) ans_index=i;
    }
    cout << height[ans_index] << " " << weight[ans_index] << endl;
return 0;
}
