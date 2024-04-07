#include<bits/stdc++.h>
using namespace std;

string is_Prime(int n){
    int i=2;
    while(i*i<=n){
        if(n%i==0){
            return "非質數\n";
        }
        i++;
    }
    return "質數\n";    //排序完成後，回傳最小交換次數
}

int main(){
//    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n=0;        //有n數要做排列
    while(cin >> n) cout << is_Prime(n);  //用自訂函式算出最小交換次數
return 0;
}
