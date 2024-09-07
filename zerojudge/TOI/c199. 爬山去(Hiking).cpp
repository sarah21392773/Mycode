#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=0;
    while(cin >> n){

        int m[n+2],num=0;        //用圍牆戰略
        m[0]=10001;
        m[n+1]=10001;

        for(int i=1;i<n+1;i++){
            cin >> m[i];
        }

        for(int i=1;i<n+1;i++){
            if(m[i]>=m[i-1]){        //若此數>=前一數(比左邊高或等高)
                if(m[i]==m[i-1]){    //若和前一數字相同(等高)
                    m[i-1]=m[i-2];    //就把前一數字改成前二數字的值
                    if( m[i]!=m[i+1] && i!=n && m[i]>m[i-1] ){ //若此地不是最右邊，且比兩邊高
                        num++;                            //則山頭數加一
                    }
                }
                else{
                    if(m[i]>m[i+1]){    //此數比下一數高(比右邊高)
                        num++;          //則山頭加一
                    }
                }
            }
        }

        cout << num << endl;
    }
    return 0;

}
