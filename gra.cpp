#include <iostream>
using namespace std;
int main() {

char plansza [10][10];

 for (int i=0;i<10;i++) {
    for (int j=0;j<10;j++) {


        if (i==0 || i==9 || j==0 || j==9)
            {
                plansza[i][j] = '#';
            }
        else
            {
            plansza[i][j] = ' ';
            }
cout << plansza[i][j];
}
}
 }

 
