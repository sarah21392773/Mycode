#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a>b){
        int t=a;
        a=b;
        b=t;
    }
    if(a>c){
        int t=a;
        a=c;
        c=t;
    }
    if(b>c){
        int t=b;
        b=c;
        c=t;
    }

    if(a*a+b*b==c*c){
        cout << "right triangle" << endl;
    }
    else if(a*a+b*b>c*c){
        cout << "acute triangle" << endl;
    }
    else if(a*a+b*b<c*c){
        cout << "obtuse triangle" << endl;
    }
    return 0;
}
