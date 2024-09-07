#include <iostream>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m){
        int sum=0,c=0;
        for(int i=0;;i++){
            sum+=n+i;
            c++;
            if(m<sum){
                break;
            }
        }
        cout<<c<<endl;
    }
return 0;
}
