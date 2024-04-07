#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,how_many=0;     //how_many用來記錄有幾個偶數
    cin >> a >> b;
    if(a%2==0 || b%2==0){   //開頭或結尾是偶數 
        how_many++;         //就加一
    }
    how_many+=(b-a)/2;      //範圍內的數字數量/2，會是偶數的數量(因為奇數、偶數相間)
    cout << how_many;
return 0;
}
