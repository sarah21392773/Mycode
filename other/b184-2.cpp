#include <bits/stdc++.h>
using namespace std;
const int MAXN = 105;
const int MAXW = 105;
int w[MAXN], p[MAXN];
int K[MAXN][MAXW];      //用二維陣列K來記錄不同背包重量與物品數的最大價值

int main(){

	int n;             //有n項貨物
	while(cin >> n){    

		for(int i = 1; i <= n; i++)     //輸入每項貨物的重量w，及價值p
			cin >> w[i] >> p[i];


			
		for(int i = 0; i <= n ; i++){   
			for(int j = 0; j <= 100 ; j++){
				if(i == 0 || j == 0)  K[i][j] = 0 ;     //如果背包可承受重量，或沒放物品，價值就是0
				else if(w[i] > j)  K[i][j] = K[i-1][j];     //如果物品重量超過背包可承受重，就選擇不放物品，最大價值會等於放i-1個物品，且背包承重量還是j
				else  K[i][j] = max(p[i]+K[i-1][j-w[i]],K[i-1][j]); //否則比較有放或沒放哪個價值高
			}
		}

		cout << K[n][100] << endl;  //輸出背包程重輛最大且放的物品數最多
	}

return 0;
}
