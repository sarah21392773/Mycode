#include <iostream>
#include <iomanip>
using namespace std;

double BMI(double w,double h){
    return w/(h*h);
}

int main() {
    double w, h;
    cin >> w >> h;
    cout << fixed << setprecision(1) << BMI(w, h) << endl;
}
