#include<bits/stdc++.h>
using namespace std;

int bubble(int* arr,int n){
    int time=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                time++;
            }
        }
    }
    return time;
}

int main(){
    int n=0;
    while(cin >> n){
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        cout << "Minimum exchange operations : " << bubble(arr,n) << endl;
    }
return 0;
}
