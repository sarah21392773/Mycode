#include <iostream>
#include <cmath>    //要用sqrt要include<cmath>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);       //聽說這叫優化器
	cin.tie(0);
	int prime[5000],t=0; //prime[5000]是2~2147483647中的質數,t是質數表中的索引 
	bool b=1;   //若b=1，就代表是質數
	for(int i=2;i<=sqrt(2147483647;i++){    
		b=1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){     //若i能被j整除，就不是質數
				b=0;
				break;
			}		
			
		}
		if(b) prime[t++]=i;//若i是質數，就加入質數表
	}
	
	int n;      //判斷n是否為質數
	while(cin>>n){
		b=1;    //若b=1，就代表是質數
		for(int i=0;i<t;i++){   
			if(sqrt(n)<prime[i]) break; //若質數表中的數已經比根號n大，n就是質數
			if(n%prime[i]==0){  //若n能被質數表中的數整除
				b=0;            //n就不是質數
				break;
			}
		}
		if(b) cout<<"質數"<<endl;
		else cout<<"非質數"<<endl; 
		
	}
	return 0;
}
