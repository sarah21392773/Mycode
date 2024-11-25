#include<bits/stdc++.h>
using namespace std;

int A[10],B[10],print=1,which=1;

void F1(int arr[]){
    if(arr[0]%3==0){
        print=*max_element(arr,arr+5);
        cout << print << "\n";
        for(int i=0;i<5;i++){
            if(arr[i]==print) arr[i]/=2;
        }
    }
    else{
        int tem=1005;
        for(int i=0;i<5;i++) if(arr[i]<tem && arr[i]) tem=arr[i];
        print=tem;
        cout << print << "\n";
        for(int i=0;i<5;i++){
            if(arr[i]==print) arr[i]--;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    for(int i=0;i<5;i++) cin >> A[i];
    for(int i=0;i<5;i++) cin >> B[i];

    while(print){
        if(which) F1(A);
        else F1(B);
        which = (print%2==0) ? 0 : 1;
    }
return 0;
}
