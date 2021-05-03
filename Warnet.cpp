#include <iostream> // library input output stream
#include <stdlib.h> // library untuk melakukan perbandingan == 
#include <windows.h> // library untuk mengatur layar, cls
#include "conio.h" // library untuk memanggil getsch
#include <fstream> // library untuk menggunakan text
#include <ctime> // library untuk fungsi waktu

using namespace std; // std agar tidak perlu menggunakan std disetiap fungsi;

   void kerja(); // deklrasai fungsi kerja
   void pilih(); // deklrasai fungsi
   void sejam(); // deklrasai fungsi
   void duajam(); // deklrasai fungsi
   void limajam(); // deklrasai fungsi
   void paketsepuluh(); // deklrasai fungsi
   void tampil(); // deklrasai fungsi
   
   int pil; // deklrasai variabel Pil bertip integer
   string username; // deklrasai variabel username bertipe string
	
int main() {
  
   int i;  
   string pass_input, user_input;  
   char ch;
   int jam;
   int harga;
   
   system("cls");
   cout << "\n\n";
   cout << "\t\t==========================================\n";    
   cout << "\t\tProgram Billing Warnet JOFIRAI | STRUKDAT \n";    
   cout << "\t\t==========================================\n";  
   cout << "\t\tUntuk keamanan silahkan login user billing\n";  
   cout << "\t\t==========================================\n\n";
   string user1 ="yosua";    // deklarasi user1 beserta isinya
   string password1 = "12345";   
   string user2 ="raihan";    // deklarasi user2 beserta isinya
   string password2 = "12345";  
   string user3 ="alfian";    // deklarasi user3 beserta isinya
   string password3 = "12345";     
   string login = "block";    
   i = 1;    
   system("Color 70");
  do {        
       cout << "\t\tUsername = "; cin>>user_input;        
       cout << "\t\tPassword : ";
            while(ch != 13) // melakukan looping while sampai tombol 13 ( enter ) ditekan
    {
        ch = getch(); // getch dalam artian membaca penekanan
        if(ch == '0')
         {
            switch(getch())
              {
              default:
                  break;            
            };
        }
     else if(ch == '\b')   //melakukan pembacaan bila /b ( backspace ) ditekan
        {
        if(pass_input.size() != 0)  //bila backspace ditekan, kurangi satu data dari karakter pass_input
           {
           cout << "\b \b"; //backspace
           pass_input.erase(pass_input.size() - 1, 1); //proses pengahapusan
           }
        continue;
        }
     else if(ch <= '9' && ch >= '0' || ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') //proses perbandingan input dari karakter
        {
        pass_input += ch; 
        cout << "*"; //input dari password akan di sensor dengan *
        }
     else
        continue;
     }
	 

        if (user_input == user1 && pass_input == password1) {    
	   	   system("cls");   
		   cout << " \n\n"; 
           cout << "\t\t\t\t ================\n";            
           cout << "\t\t\t\t| Login Berhasil |" << endl;  
		   cout << "\t\t\t\t ================\n";         
           cout << " \n\n";                    
		   cout << "\t\t ===============================================\n"; 
		   cout << "\t\t|  Selamat datang Staff Yosua, selamat bekerja! |" << endl;            
           cout << "\t\t| ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ |" << endl;            
           cout << "\t\t ===============================================\n\n";  
		   username = "yosua";
           i = 4;
           login = "berhasil";        
		   getch();
		   kerja(); // memanggil funsi kerja
		   } 
		   
		else if (user_input == user2 && pass_input == password2) {    
	   	   system("cls");        
		   cout << "\t\t\t\t ================\n";            
           cout << "\t\t\t\t| Login Berhasil |" << endl;  
		   cout << "\t\t\t\t ================\n";         
           cout << " \n\n";          
		   cout << " \n";            
		   cout << "\t\t ===============================================\n"; 
           cout << "\t\t|  Selamat datang Staff Raihan, selamat bekerja!|" << endl;            
           cout << "\t\t| ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ |" << endl;            
           cout << "\t\t ===============================================\n\n";  
		   username = "Raihan";
           i = 4;
           login = "berhasil";        
		   getch();
		   kerja();	 // memanggil funsi kerja
		   } 
		
		else if (user_input == user3 && pass_input == password3) {    
	   	   system("cls");        
		   cout << "\t\t\t\t ================\n";            
           cout << "\t\t\t\t| Login Berhasil |" << endl;  
		   cout << "\t\t\t\t ================\n";         
           cout << " \n\n";          
		   cout << " \n";            
		   cout << "\t\t ===============================================\n"; 
           cout << "\t\t| Selamat datang Staff Alfian, selamat bekerja !|" << endl;            
           cout << "\t\t| ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ |" << endl;            
           cout << "\t\t ===============================================\n\n";  
		   username="alfian";
           i = 4;
           login = "berhasil";    
		   getch();
		   kerja(); // memanggil funsi kerja
		   } 	
		
       else { 
		   cout << endl;
           cout << "\t\t\t=============================\n";            
           cout << "\t\t\tUsername / Password Salah! ("<<i<<"x)\n";
		   cout << "\t\t\t=============================\n\n";
           i = i +1; // fungsi untuk menhiung jumlah gagal password
		   ch = 0; // mereset input dari ch
		   pass_input = ""; // mereset input dari password
       }   
    } while (i <= 3);
	
    if(login != "berhasil"){
		system("cls");
		
       cout<<"\n\n\n\t\tAnda telah 3x salah login.\n\n";       
       cout<<"Silahkan hubungi bagian service untuk informasi lebih lanjut. \n\t\t Terima Kasih..\n\n";      
	}   
   return 0;


}

void kerja(){ // fungsi kerja
do{
  system("cls"); 
  cout << "\n\n";
  cout << "\t\tStaff Aktif : " << username;
  cout << "\t  ADMIN Warnet JOFIRAI  "<< endl; 
  cout << "\t\t===============================================\n"; 
  cout << "\t\t\t\t Tarif warnet : " <<endl;
  cout << "\t\t===============================================\n"; 
  cout << "\t\t\t\t 1  jam RP. 3000 " << endl;
  cout << "\t\t\t\t 2  jam RP. 5000 " << endl;
  cout << "\t\t\t\t 5  jam RP.10000 " << endl;
  cout << "\t\t\t\t 10 jam RP.18000 " << endl;
  cout << "\t\t\t\t BEBAS: RP. 3000 / jam " << endl;
  cout << "\t\t===============================================\n\n"; 
  cout << "\t\tINPUT PERINTAH :" << endl << endl;
  cout << "\t\t1. Pemesanan 1  jam" << endl;
  cout << "\t\t2. Pemesanan 2  Jam" << endl;
  cout << "\t\t3. Pemesanan 5  Jam" << endl;
  cout << "\t\t4. Pemesanan 10 Jam" << endl;
  cout << "\t\t5. Tampil Log Pesanan" << endl;
  cout << "\t\t6. Selesai" << endl << endl;
  cout << "Perintah : ";
  cin>>pil;
  pilih();
 }while (pil!=6);  // bila pilihan = 6, kembali / keluar
 return;
}

void pilih(){
 if(pil==1){ 
  sejam(); // bila pilihan = 1, panggil perintah sejam
 }
 else if(pil==2){
  duajam(); // bila pilihan = 2, panggil perinrah duajam
 }
 else if(pil==3){
  limajam(); // bila pilihan = 3, panggil perintah limajam
 }
 else if(pil==4){
  paketsepuluh(); // bila pilihan = 4, panggil perintah paketsepuluh
 }
 else if(pil==5){
  tampil();  // bila pilihan = 5, panggil perintah tampil
 } 
}

void sejam(){ 
	int jam = 1;
	int harga = 3000;
	time_t now = time(0);
	int nomorpc = 10;
	string pembeli = "Tono";
    tm *ltm = localtime(&now);
	
	system("cls"); 
    cout << "\t\tStaff Aktif : " << username;
    cout << "\t  ADMIN Warnet JOFIRAI  "<< endl; 
    cout << "\t\t===============================================\n"; 
    cout << "\t\t\t\t Tarif warnet : " <<endl;
    cout << "\t\t===============================================\n"; 
    cout << "\t\t\t\t 1  jam RP. 3000 " << endl;
    cout << "\t\t\t\t 2  jam RP. 5000 " << endl;
    cout << "\t\t\t\t 5  jam RP.10000 " << endl;
    cout << "\t\t\t\t 10 jam RP.18000 " << endl;
    cout << "\t\t\t\t BEBAS: RP. 3000 / jam " << endl;
    cout << "\t\t===============================================\n\n"; 

	cout << " \n\t\tPaket " << jam << " jam ";
	cout << " \t\t\tHarga RP." << harga << endl;
	cout << "\t\t===============================================\n\n"; 
	cout << " \t\tPC :" << nomorpc;
	cout << " \t\t\t     Atas Nama : " << pembeli << endl<< endl;
	cout << " \t\t\t  Dimulai dari Jam : " <<  ltm->tm_hour << ":" <<  ltm->tm_min << ":" <<  ltm->tm_sec << endl;
	cout << " \t\t\t  Hingga nanti jam : " << 1 + ltm->tm_hour << ":" <<  ltm->tm_min << ":" <<  ltm->tm_sec << endl <<endl;
	cout << " \t\t\t\t\tKasir Pengurus :" << username<<endl;
	cout << "\t\t===============================================\n\n"; 
	getch();
}

void duajam(){
	int jam = 2;
	int harga = 5000;
	getch();
}

void limajam(){
	int jam = 5;
	int harga = 10000;
	getch();
}

void paketsepuluh(){
	int jam = 10;
	int harga = 18000;
	getch();
}

void tampil(){
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
		

