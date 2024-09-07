#include<bits/stdc++.h>
using namespace std;
int main(){
    string timea,timeb;
    int time_hour,time_minute,time_sec;
    cin >> timea >> timeb;
    int timea_hour=10*(timea[0]-'0')+(timea[1]-'0');
    int timea_minute=10*(timea[3]-'0')+(timea[4]-'0');
    int timea_sec=10*(timea[6]-'0')+(timea[7]-'0');
    int timeb_hour=10*(timeb[0]-'0')+(timeb[1]-'0');
    int timeb_minute=10*(timeb[3]-'0')+(timeb[4]-'0');
    int timeb_sec=10*(timeb[6]-'0')+(timeb[7]-'0');
    time_sec=timeb_sec-timea_sec;
    if(timeb_sec<timea_sec){
        time_sec+=60;
        timeb_minute--;
    }
    time_minute=timeb_minute-timea_minute;
    if(timeb_minute<timea_minute){
        time_minute+=60;
        timeb_hour--;
    }
    time_hour=timeb_hour-timea_hour;
    if(timeb_hour<timea_hour){
        time_hour+=24;
    }
    if(time_hour<10){
        cout << '0'<<time_hour << ":";
    }
    else{
        cout <<time_hour << ":";
    }
    if(time_minute<10){
        cout << '0'<<time_minute << ":";
    }
    else{
        cout <<time_minute << ":";
    }
    if(time_sec<10){
        cout << '0'<<time_sec;
    }
    else{
        cout <<time_sec;
    }
return 0;
}
