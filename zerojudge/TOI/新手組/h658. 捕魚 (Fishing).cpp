#include<bits/stdc++.h>
using namespace std;

struct AFish{
    int X,Y,howfar=0;
};

int main(){
    int X,Y,N;
    cin >> X>>Y>>N;
    int little_index,little_data=INT_MAX;
    AFish fish[105];
    for(int i=0;i<N;i++){
        cin >> fish[i].X >> fish[i].Y;
        fish[i].howfar=pow((fish[i].X-X),2)+pow((fish[i].Y-Y),2);
        if(fish[i].howfar<little_data){
           little_data=fish[i].howfar;
           little_index=i;
        }
    }
    cout << fish[little_index].X << " " << fish[little_index].Y;
return 0;
}
