#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"Enter radius: ";
    double radius;
    cin>>radius;
    double perimiter = 2*3.14*radius;
    double area = radius*radius;
    cout<<"THe circumferance of circle is: "<<perimiter<<endl;
    cout<<"THe area of circle is: "<<area<<endl;
    return 0;
}