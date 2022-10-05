#include<iostream>
using namespace std;
int main (){
int rows = 4, k = 0;

    for (int i = 1; i <= rows; ++i, k = 0) {
      for (int space = 1; space <= rows - i; ++space) {
        cout << "  ";}
         while (k != 2 * i - 1) {
        cout << "*";
        ++k;}
       cout << endl;
    }
    int r = 5;

    for(int i = r; i >= 1; --i)
     {
      for(int space = 1; space <= r - i; ++space) {
        cout << " ";
      }

      for(int j=i; j <= 2 * i - 1; ++j) {
        cout << "*";
      }

      for(int j = 0; j < i - 1; ++j) {
        cout << "*";
      }

      cout << endl;
    }
  

}