#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    while (cin >> N && N){
        while (true){
            vector <int> train(N);
            int x; cin >> x;
            if(x==0) break;
            train[0]=x;
            for (int i=1;i<N;i++)
                cin>> train[i];
            vector<int>station;
            int _count = 0;
            for (int i=1;i<=N;i++){
                station.push_back(i);
                while (!station.empty() && (station.back() == train[_count])){
                    station.pop_back();
                    _count++;
                }
            }
            if (station.empty())cout << "Yes\n";
            else cout << "No\n";
        }
        cout << "\n";
    }
    return 0;
}
