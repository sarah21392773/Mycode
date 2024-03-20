#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x,y;
};
//
bool comp(const Point &lhs, const Point &rhs){
    if(lhs.x == rhs.x){
        return lhs.y < rhs.y;
    }
    else {
        return lhs.x < rhs.x;     //若return 1，則第一個參數就排前面
    }
}
//

int main(){
    int N=0;
    cin >> N;
    Point arr[N];
    for (int i=0;i<N;i++){
        cin >> arr[i].x >> arr[i].y;
    }
    //selection(arr,N);
    sort(arr,arr+N,comp);
    for(int i=0;i<N;i++){
        cout << arr[i].x << " " << arr[i].y;
        cout << endl;
    }
return 0;
}
