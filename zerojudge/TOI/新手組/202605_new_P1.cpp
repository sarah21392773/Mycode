#include<bits/stdc++.h>
using namespace std;
#define int long long

int N, num, temp, last;

signed main(){
    cin >> N;
    for(int i=0; i<=N; i++){
        if(i < N) cin >> num;
        else num = 0;
        if(num == last || i == 0)  temp++;
        else if(i > N-1){
            cout << temp << "\n";
        }
        else{
            cout << temp << " ";
            temp = 1;
        }
        last = num;
    }
return 0;
}
