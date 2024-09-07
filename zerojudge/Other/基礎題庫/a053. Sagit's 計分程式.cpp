#include<bits/stdc++.h>
using namespace std;
int main(){
  int correct,grade;
  cin >> correct;
  if(correct>=40) grade=100;
  else if(correct>20) grade = 80+(correct-20);
  else if(correct>10) grade = 60+(correct-10)*2;
  else grade=6*correct;
  cout << grade;
  return 0;
}
