#include<iostream>
using namespace std;
int main(){
    string a;
    while(cin >> a){
        int b[26]={0},d=0;
        for(int i=0;i<a.length();i++){
            char c=a[i];
            if(isalpha(c)!=0){
                c=toupper(c);
                b[int(c)-65]++;
            }
        }
        for(int j=0;j<26;j++){
            if(b[j]%2==1){
                d++;
            }
        }
        if(d>1) cout << "no..."<<endl;
        else cout << "yes !"<<endl;
    }
return 0;
}
