#include <bits/stdc++.h>
using namespace std;
const int MAXN = 105;
const int MAXW = 105;
int w[MAXN], p[MAXN];
int K[MAXN][MAXW];

int main(){

	int n;
	while(cin >> n){

		for(int i = 1; i <= n; i++)
			cin >> w[i] >> p[i];


		for(int i = 0; i <= n ; i++){
			for(int j = 0; j <= 100 ; j++){
				if(i == 0 || j == 0)  K[i][j] = 0 ;
				else if(w[i] > j)  K[i][j] = 0;
				else  K[i][j] = max(p[i]+K[i-1][j-w[i]],K[i-1][j]);
			}
		}


/*
		for(int i = 0; i <= n ; i++){
			for(int j = 0; j <= 100 ; j++){
				cout << K[i][j] << " ";
			}
			cout << endl;
		}
*/


		cout << K[n][100] << endl;
	}

return 0;
}
