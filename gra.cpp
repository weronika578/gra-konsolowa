 #include <iostream>
 #include <conio.h>
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
    cout << "Pozostale ruchy: " << ruchy  << " | Punkty: " << pkt  << " / 4" << endl;




for  (int i =0; i<10; i++) {
    for (int j=0; j< 10;j++) {
        cout << plansza[i][j] << " "; }
        cout << endl; }
      //wyswietlanie planszy

char ruch;
cout << "Ruch W,A,S,D: ";
ruch = getch();
plansza[zx][zy] = '.';

if ((ruch=='W' || ruch=='w') && plansza[zx-1][zy] != '#') zx--;
if ((ruch=='A' || ruch=='a') && plansza[zx+1][zy] != '#') zy--;
if ((ruch=='S' || ruch=='s') && plansza[zx+1][zy] != '#') zx++;
if ((ruch=='D' || ruch=='d') && plansza[zx][zy+1] != '#') zy++;
if (plansza[zx][zy] == '$') { pkt++;}
plansza[zx][zy] = 'Z';
plansza[px][py] = '.';

if (px < zx) px++;
else if (px > zx) px--;

if (py < zy) py++;
else if (py > zy) py--;
plansza[px][py] = 'P';

if (px == zx && py == zy) {
    system("cls");
    cout << "PRZEGRANA! Policjant cie zlapal!" << endl;
    break;
}
ruchy--;

}





}
