#include<iostream>
using namespace std;
int main(){
    int k=0,m=1;
    cin >> k;
    int a[k];
    for(int i=0;i<k;i++){
        cin >> a[i];
    }
    for(int i=0;i<k;i++){
        int home=i+1,t=a[i],sum=1;
        a[i]=0;
        while(t!=home && t!=0){
            sum++;
            int t2=t;
            t=a[t-1];
            a[t2-1]=0;
        }
        if(sum>m) m=sum;
    }
    cout << m;
return 0;
}
