#include<bits/stdc++.h>
using namespace std;

int n,w[2],h[2],v[2],area[2],ans,N;

int main(){
    cin >> n >> w[0] >> w[1] >> h[0] >> h[1];
    area[0]=(w[0]*w[0]),area[1]=(w[1]*w[1]);
    v[0]=(area[0]*h[0]),v[1]=(area[1]*h[1]);
    for(int i=0;i<n;i++){
        cin >> N;
        int temp=0;
        if(N <= v[0]){
            temp += N/area[0];
            v[0] -= N;
        }
        else{
            if(v[0] > 0){
                temp += v[0]/area[0];
                N-=v[0];
                v[0]=0;
                if(N <= v[1]){
                    temp += N/area[1];
                    v[1] -= N;
                }
                else{
                    temp += (v[1]/area[1]);
                    v[1]=0;
                }
            }
            else{
                if(N <= v[1]){
                    temp += N/area[1];
                    v[1] -= N;
                }
                else{
                    temp += (v[1]/area[1]);
                    v[1]=0;
                }
            }
        }
        ans=max(ans,temp);
    }
    cout << ans << "\n";
return 0;
}
