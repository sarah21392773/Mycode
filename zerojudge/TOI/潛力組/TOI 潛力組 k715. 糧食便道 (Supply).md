# TOI 潛力組 k715. 糧食便道 (Supply)

*  題目連結：<br/>
&emsp;[在這裏～～](https://zerojudge.tw/ShowProblem?problemid=k715)
 
---

## **理解題意**

---

### 目標
有 `N` 個城鎮，其中 `K` 個城鎮有糧食。建立道路(共有 `M` 條路可供選擇)，**讓每個城鎮至少連接到一個有糧食的城鎮**，而且總成本最小。

* 範例:
![螢幕擷取畫面 2025-08-03 005308](https://hackmd.io/_uploads/HJnKG6jvge.png)


    * 輸入: 有 N = 8 個城鎮，編號 1 至 8。城鎮 3 以及城鎮 8 有生產糧食 (星星)。
    * 輸出: 10 (如圖二)
    
---    
    
## 解題

---
### 解題思路
1. 用 `struct` 結構紀錄道路的兩端與成本，提高可讀性與操作方便。
2. 為了避免額外標記「誰有糧食」的麻煩，**引入虛擬原點（編號 0）**，且其與「有糧食的城市」邊權為 0。
3. 對所有邊（包含虛擬邊）進行 `Kruskal 最小生成樹演算法`，總成本即為所求。

:::danger 
! ! ! 解題關鍵:<br/>單純用 **Kurkal + 森林** 只能確保所有城市用最小成本相連，但**不能確保每棵樹都有糧食原點**。所以應該加入`虛擬原點`。
:::
![88237f00-ff3c-4343-b4d6-ad28d6d857df](https://hackmd.io/_uploads/rJ8ozrnDle.jpg)


### 程式碼

```c++=
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
```

### 補充

* iota() 用法
    * 目的:<br/>將陣列填入遞增元素
    * 語法:<br/>`iota(arr.begin(), arr.end(), 開始元素)`
    
    * 範例:
        arr[6] = {}
        輸入: `iota(arr.begin(), arr.end(), 0)`
        輸出: 0 1 2 3 4 5<br/>

* 最小生成樹
    [觀念](https://hackmd.io/@konchin/MST)


---
## 廢話區
---
ya!

