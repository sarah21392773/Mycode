#include<bits/stdc++.h>
#define int long long
using namespace std;

string K, S;
vector<char> temp;
bool is_find;
int L, lenS;
map<string, int> elements;

void F(int index){
    for(int j=0; j<K.size(); j++){
        if(is_find == true) return;
        if(index<L){
            temp.push_back(K[j]);
            F(index+1);
        }
        else{
            string st = "";
            for(auto &w: temp) st += w;
            if(elements[st] == 0){
                cout << st << "\n";
                is_find = true;
                j = K.size();
            }
            temp.pop_back();
            index --;
            return;
        }
    }
    temp.pop_back();
    index --;
    return;
}

signed main(){
ios::sync_with_stdio(false);cin.tie(0);
    cin >> K >> L >> S;
    lenS = S.size();
    for(int i=0; i<=lenS-L; i++){
        string ele = "";
        for(int j=i; j<i+L; j++) ele += S[j];
        elements[ele]++;
    }
    F(0);
return 0;
}
