#include<iostream>
using namespace std;
int main(){
    int x=0;
    while(x<=5){
        cout << x << "\n";
        x++;
    }
    for(int i=0;i<=5;i++){
        cout << i << "\n";
    }
    int myNumbers[5] = {10, 20, 30, 40, 50};
for (int j : myNumbers) {
  cout << j << "\n";
}
}