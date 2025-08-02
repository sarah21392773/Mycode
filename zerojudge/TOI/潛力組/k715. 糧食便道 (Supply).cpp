#include<bits/stdc++.h>
#define all(x) x.begin(), x.end()
using namespace std;


struct Road{
    int left, right, weight;
    bool operator<(const Road& r) const{
        return weight < r.weight;
    }
};

int N, M, K, ans;
vector<int> root, sz;
priority_queue<int> pq;

int Find(int a){
    if(root[a] == a) return a;
    return root[a] = Find(root[a]);
}

bool Union(int a, int b){
    a = Find(a), b = Find(b);
    if(a == b) return false;
    if(sz[a] > sz[b]) swap(a, b);
    sz[b] += sz[a];
    root[a] = Find(b);
    return true;
}

int main(){
ios::sync_with_stdio(false);cin.tie(0);
    // initial
    cin >> N >> M >> K;
    vector<Road> roads;
    sz.assign(N+1, 1);
    root.assign(N+1, 0);
    iota(all(root), 0);
    // invisible plot 0 (weight = 0)
    int temp;
    for(int i=0; i<K; i++){
        cin >> temp;
        roads.push_back({0, temp, 0});
    }
    // input the roads
    int a, b, c;
    for(int i=0; i<M; i++){
        cin >> a >> b >> c;
        roads.push_back({a, b, c});
    }
    // Kruskal
    sort(all(roads));
    for(auto & r:roads){
        if(Union(r.left, r.right))
            ans += r.weight;
    }
    cout << ans << "\n";
return 0;
}
