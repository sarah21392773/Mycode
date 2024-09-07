#include<iostream>
using namespace std;
int main(){
    int N=0;
    while(cin >> N){
        int m[N][N],a[N][N];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin >> m[i][j];
                a[i][j]=0;
            }
        }
        for(int i=0;i<N;i++){
            int high=-1;
            for(int j=0;j<N;j++){
                high=max(m[i][j],high);
            }
            for(int j=0;j<N;j++){
                if(m[i][j]==high) a[i][j]++;
            }
        }
        for(int i=0;i<N;i++){
            int low=1001;
            for(int j=0;j<N;j++){
                low=min(m[j][i],low);
            }
            for(int j=0;j<N;j++){
                if(m[j][i]==low) a[j][i]++;
            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(a[i][j]==2){
                    cout<<i<<" "<<j<<endl;
                    i=N;
                }
                else if(i==N-1 && j==N-1){
                    cout<<"NO"<<endl;
                }
            }
        }
    }
return 0;
}
