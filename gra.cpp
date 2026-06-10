#include <iostream>
using namespace std;
int main() {

char plansza [10][10];

 for (int i=0;i<10;i++) {
    for (int j=0;j<10;j++) {


        if (i==0 || i==9 || j==0 || j==9)
            {
                plansza[i][j] = '#' ;

            }
        else
            {
            plansza[i][j] = '.';
            }
}
}

int z,p;
int zx = 1;
int zy = 1;
int px = 8;
int py = 8;

plansza[2][4] = '$';
plansza[4][6] = '$';
plansza[6][2] = '$';
plansza[8][4] = '$';

plansza[zx][zy] = 'Z';
plansza[px][py] = 'P';

int ruchy = 20;
int pkt = 0;

while (ruchy > 0) {
    system("cls");
    cout << "Pozostale ruchy: " << ruchy  << " | Punkty: " << pkt  << "  / 4" << endl;




for  (int i =0; i<10; i++) {
    for (int j=0; j< 10;j++) {
        cout << plansza[i][j] << " "; }
        cout << endl; }}
      //wyswietlanie planszy







}
