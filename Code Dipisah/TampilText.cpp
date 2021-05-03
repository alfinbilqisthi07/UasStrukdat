#include <iostream>
#include <fstream>
#include <string>
#include <conio.h> //untuk memanggil getch();
 
using namespace std;
 
int main ()
{
string baca;
string baris;
ifstream data;
data.open ("log.txt"); // membuka file dataku.txt
while(!data.eof()) //membaca data secara keseluruhan
{
getline(data, baris);
baca += baris+"\n";
 
}
data.close();
system("cls");
cout<< baca; // menampilkan data ke layar
getch();
}