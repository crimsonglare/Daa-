#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"what year is it?: ";
    cin>>a;
    if (a%4 ==0 && a%100!=0)
    {
        cout<<"it is a leap year";
    }
    else{
        cout<<"given year is not a leap year";
    }
    return 0;
}