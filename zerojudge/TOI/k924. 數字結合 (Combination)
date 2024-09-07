#include <iostream>
using namespace std;
int main(){
    string a,b;
    while(cin >> a >> b){
        int suma=0,sumb=0;
        string c=a+b;
        for(int i=0;i<c.length();i++){
            if(i%2==0){
                char t=c[i];
                suma+=t-'0';
            }
            else{
                char t=c[i];
                sumb+=t-'0';
            }
        }
        if((suma-sumb)%11==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
return 0;
}
