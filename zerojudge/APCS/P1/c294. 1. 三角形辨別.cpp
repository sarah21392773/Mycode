#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int t;
    if(a>=b){
        if(a>=c){
            t=c;
            c=a;
            if(t>=b){
                a=b;
                b=t;
            }
            else{
                a=t;
            }
        }
        else{
            t=a;
            a=b;
            b=t;
        }
    }
    else if(a>=c){
        t=a;
        a=c;
        c=b;
        b=t;
    }
    else if(b>=c){
        t=c;
        c=b;
        b=t;
    }
    cout << a << " " << b << " " << c << endl;
    if(a+b<=c){
        cout<< "No" << endl;
    }
    else{
        if(a*a+b*b < c*c){
            cout<<"Obtuse"<<endl;
        }
        else if(a*a+b*b == c*c){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Acute"<<endl;
        }
    }
    return 0;
}
