#include <iostream>
using namespace std;
int main(){
    int n,last=0,beforelast=0,tem=0;
    cin >> n;
    for(int year=1;year<=n;year++){
        if(year==1){
            last=1;
        }
        else{
            tem=last;
            last=last+beforelast;
            beforelast=tem;
        }
    }
    cout<<last<<":"<<beforelast+last;
return 0;
}
