#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "Lumberjacks:\n";
    while(n--){
        int comp[10];
        vector<int> workers;
        for(int i=0;i<10;i++) cin >> comp[i];
        for(auto &i:comp) workers.push_back(i);
        sort(comp,comp+10);
        for(int i=0;i<10;i++){
            if(comp[i]!=workers[i]){
                for(int j=9;j>=0;j--){
                   // cout << comp[j] << " " << workers[9-j] << endl;
                    if(comp[j]!=workers[9-j]){
                        cout << "Unordered\n";
                        i=11;
                        j=-1;
                    }
                    if(j==0){
                        cout << "Ordered\n";
                        i=11;
                    }
                }
            }
            if(i==9) cout << "Ordered\n";
        }
    }
return 0;
}
