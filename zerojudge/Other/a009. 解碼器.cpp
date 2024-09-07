#include<iostream>
using namespace std;
int main(){
    string a;
    cin >> a;
    int k=7;
    for(int i=0;i<a.length();i++){
        cout<< char(int(a[i])-k);
    }
return 0;
}
