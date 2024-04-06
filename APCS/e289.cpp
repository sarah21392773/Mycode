#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int ribbon,beauty=0,j=m-1,color[88]={0};
    queue<int> ribbons;
    for(int i=0;i<m;i++){
        cin >> ribbon;
        ribbons.push(ribbon);
        color[ribbon]++;
    }
    if(count(color,color+88,1)==m) beauty++;
    for(int i=0;i<n-m;i++){
        cin >> ribbon;
        color[ribbons.front()]--;
        color[ribbon]++;
        ribbons.pop();
        ribbons.push(ribbon);
        if(count(color,color+88,1)==m) beauty++;
    }
    cout << beauty << endl;
return 0;
}
