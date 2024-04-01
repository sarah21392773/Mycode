#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        int num[n],time=0;
        for(int i=0;i<n;i++){
            cin >> num[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(num[i] > num[j]){
                    time++;
                    swap(num[i],num[j]);
                }
            }
        }
        cout << "Minimum exchange operations : " << time << endl;
    }
return 0;
}
