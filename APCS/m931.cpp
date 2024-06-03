#include<bits/stdc++.h>
using namespace std;

struct Player{
    int attack=0,protection=0,ability=0;
};

int main(){
    int n;
    Player First,Second;
    cin >> n;
    for(int i=0;i<n;i++){
        Player player;
        cin >> player.attack >> player.protection;
        player.ability=pow(player.attack,2)+pow(player.protection,2);
        if(player.ability>Second.ability){
            if(player.ability>First.ability){
                First.ability=player.ability;
                First.attack=player.attack;
                First.protection=player.protection;
            }
            else{
                Second.ability=player.ability;
                Second.attack=player.attack;
                Second.protection=player.protection;
            }
        }
    }
    cout << Second.attack << " " << Second.protection;
return 0;
}
