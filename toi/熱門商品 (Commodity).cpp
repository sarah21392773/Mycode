#include<bits/stdc++.h>
using namespace std;
int main(){
    int K,N;
    while(cin >> K >> N){
        int popularity[N]={0};
        pair<int,int> ans={-1,1000};
        int R[K]={0},M[N]={0};
        for(int i=0;i<K;i++) cin >> R[i];
        for(int i=0;i<N;i++) cin >> M[i];
        for(int i=0;i<N;i++){
            for(int j=0;j<M[i];j++){
                int goods;
                cin >> goods;
                for(int k=0;k<K;k++){
                    if(goods==R[k]) popularity[i]++;
                }
            }
            if(popularity[i]<ans.second){
                ans.second=popularity[i];
                ans.first=i+1;
            }
//            cout << "shop" << i << ":" << popularity[i] << endl;
        }
        pair<int,int> a={-1,0};
        for(int i=0;i<K;i++){
            int num=0;
            for(int j=0;j<K;j++){
                if(R[i]==R[j]) num++;
            }
            if(num>a.second){
                a.first=R[i];
                a.second=num;
            }
        }
        cout << a.first << " " << ans.first << endl;
    }
return 0;
}
