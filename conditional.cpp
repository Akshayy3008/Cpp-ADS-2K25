#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    cout << "Enter x: ";
    cin >> x;
    if(x>0 || x==0){
        cout << "Positive";
    }
    else if(x<0){
        cout << "Negative";
    }
    return 0;
}