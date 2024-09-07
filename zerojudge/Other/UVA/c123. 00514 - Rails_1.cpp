#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n&&n){
        int train=1;
        while(train>0){
            deque<int> a,b,station;
            for(int i=0;i<n;i++){
                cin >> train;
                if(train==0) break;
                a.push_back(n-i);
                b.push_front(train);
            }
            for(int i=0;i<n;i++){
                if(!a.empty()){
                    if(a.back()==b.back()){
                        a.pop_back();
                        b.pop_back();
                    }
                    else{
                        station.push_back(a.back());
                        a.pop_back();
                    }
                }
                for(int j=0;j<n;j++){
                    if(!station.empty()&&!b.empty()){
                        if(station.back()==b.back()){
                            station.pop_back();
                            b.pop_back();
                        }
                        else break;
                    }
                }
            }
            if(train!=0)
                cout << (station.empty() ? "Yes":"No");
            cout << "\n";
        }
    }
return 0;
}
