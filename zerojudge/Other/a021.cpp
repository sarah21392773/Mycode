#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    char c;
    cin >> a >> c >> b;
//    cout << a << " " << b << " " << c <<endl;
    int ans[10]={0},i,A[10],B[10];
//    cout << a.size() << " " << b.size() << endl;
    for(int i=0;i<a.size();i++){
        A[a.size()-i-1]=a[i]-'0';
    }
    for(int i=0;i<b.size();i++){
        B[b.size()-i-1]=b[i]-'0';
    }
/*
    for(int i=0;i<a.size();i++){
        cout << A[i] ;
    }
    cout << endl;
    for(int i=0;i<b.size();i++){
        cout << B[i];
    }
    cout << endl;
*/

    if(a.size()>b.size()){
        i=a.size();
    }
    else{
        i=b.size();
    }
//    cout << i << endl;
    if(c=='+'){
        for(int j=0;j<i;j++){
            ans[j]+=A[j]+B[j];
//            cout << ans[j] << " " ;
            if(ans[j]>=10){
                ans[j+1]+=ans[j]/10;
                ans[j]%=10;
            }
 //           cout << ans[j] << " " ;
        }
    }
    else if(c=='-'){
        for(int i=0;i<a.size()||i<b.size();i++){
            ans[i]=a[i]-b[i];
            if(a[i]<b[i]){
                ans[i]+=10;
                ans[i+1]--;
            }
        }
    }
    else if(c=='*'){
        for(int i=0;i<a.size()||i<b.size();i++){
            ans[i]=a[i]*b[i];
            if(ans[i]>=10){
                ans[i+1]+=ans[i]/10;
                ans[i]%=10;
            }
        }
    }
/*
    else{
        for(int i=0;i<a.size()||i<b.size();i++){
            ans[i]=a[i]/b[i];
        }
    }
*/
    for(int i=10;i>=0;i--){
        cout << ans[i];
    }
return 0;
}
