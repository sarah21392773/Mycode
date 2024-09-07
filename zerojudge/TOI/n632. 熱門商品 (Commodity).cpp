#include<bits/stdc++.h>
using namespace std;
int main(){
    int K,N;
    while(cin >> K >> N){
        pair<int,int> shop={-1,1000},product={-1,0};
        map<int,int> R;
        int M[N]={0};
        for(int i=0;i<K;i++){
            int goods;
            cin >> goods;
            R[goods]++;
            if(R[goods]>product.second){
                product.first=goods;
                product.second=R[goods];
            }
        }
        for(int i=0;i<N;i++) cin >> M[i];
        for(int i=0;i<N;i++){
            int popularity=0;
            for(int j=0;j<M[i];j++){
                int goods;
                cin >> goods;
                popularity+=R[goods];
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

