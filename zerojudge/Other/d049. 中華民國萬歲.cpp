#include <iostream>
using namespace std;

int to_minguo(int y){
    return y-1911;
};

int main() {
    int y;
    cin >> y;
    cout << to_minguo(y) << endl;
}
