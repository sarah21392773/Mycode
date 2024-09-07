#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,free=0;
    cin >> N;
    int ans[N]={0};
    for(int i=0;i<N;i++){
        ans[i]=-1;
        int book_index,borrow_days;
        cin >> book_index >> borrow_days;
        if(borrow_days>100){
            ans[i]=book_index;
            free+=5*(borrow_days-100);
        }
    }
    if(free>0){
        sort(ans,ans+N);
        for(int i=0;i<N;i++){
            if(ans[i]!=-1){
               cout << ans[i] << " ";
            }
        }
        cout << "\n" << free;
    }
    else cout << 0;
return 0;
}
