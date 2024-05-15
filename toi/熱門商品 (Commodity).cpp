#include<bits/stdc++.h>
using namespace std;
int main(){
    int K,N;
    while(cin >> K >> N){
        pair<int,int> shop={-1,1000},product={-1,0};
        int R[K]={0},M[N]={0};
        for(int i=0;i<K;i++){
            cin >> R[i];
            int num=count(R,R+K,R[i]);
            if(num>product.second){
                product.first=R[i];
                product.second=num;
            }
        }
        for(int i=0;i<N;i++) cin >> M[i];
        for(int i=0;i<N;i++){
            int popularity=0;
            for(int j=0;j<M[i];j++){
                int goods;
                cin >> goods;
                popularity+=count(R , R + K , goods);
            }
            if(popularity<shop.second){
                shop.second=popularity;
                shop.first=i+1;
            }
        }
        cout << product.first << " " << shop.first << endl;
    }
return 0;
}
