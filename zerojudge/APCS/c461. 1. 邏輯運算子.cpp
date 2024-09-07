#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    while(cin >> a >> b >> c){
        if(a>0 && b>0){
            if(c==1){
                cout << "AND" << endl;
                cout << "OR" << endl;
            }
            else{
                cout << "XOR" << endl;
            }
        }
        else if ( (a>0 && b==0) || (a==0 && b>0) ) {
             if(c==0){
                cout << "AND" << endl;
            }
            else{
                cout << "OR" << endl;
                cout << "XOR" << endl;
            }
        }
        else if (a==0 && b==0 && c==0) {
            cout << "AND" << endl;
            cout << "OR" << endl;
            cout << "XOR" << endl;
        }
        else{
            cout << "IMPOSSIBLE" << endl;
        }
    }
return 0;
}
