#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,A,B;
    while(cin >> N){
        int i=2,c=0,fin=0;
        while(N!=1){
            if(N%i==0){
                N/=i;
                c++;
                if(c>1){
                    A=0;
                    B=0;
                    break;
                }else{
                    if(fin==0){
                        A=i;
                        fin=1;
                    }
                    else if(fin==1 && N==1){
                        B=i;
                    }
                    else{
                        A=0;
                        B=0;
                    }
                }
            }
            else{
                c=0;
                i++;
            }

        }
        cout << A<<" "<< B<<endl;
    }
return 0;
}
