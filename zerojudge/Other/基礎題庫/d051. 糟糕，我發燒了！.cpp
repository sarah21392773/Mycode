#include<bits/stdc++.h>
using namespace std;

double f;

double F(double f){
    return ((f-32)*5)/9;
}

int main(){
    cin >> f;
    cout << fixed << setprecision(3) <<F(f);
return 0;
}
