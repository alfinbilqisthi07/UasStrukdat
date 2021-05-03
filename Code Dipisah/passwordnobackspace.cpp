#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include "conio.h"
using namespace std;

int main() {    
   int i;  
   string pass_input, user_input;  
   char ch;
   string username;
   
   cout << "==========================================\n";    
   cout << "Program Billing Warnet JOFIRAI | STRUKDAT \n";    
   cout << "==========================================\n";  
   cout << "Untuk keamanan silahkan login user billing\n";  
   cout << "==========================================\n\n";
   string user1 ="yosua";    
   string password1 = "12345";   
   string user2 ="raihan";    
   string password2 = "12345";  
   string user3 ="alfian";    
   string password3 = "12345";     
   string user4="ade";
   string password4="12345";
   string login = "block"; 
   
   i = 1;    
   
  do {        
       cout << "Username = "; cin>>user_input;        
       cout << "Password : ";
             ch = _getch();
            while(ch != 13){//character 13 is enter
            pass_input.push_back(ch);
            cout << '*';
            ch = _getch();
			}
			
			
       if (user_input == user1 && pass_input == password1) {    
	   	   system("cls");        
           cout << " ================\n";            
           cout << "| Login Berhasil |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "|  Selamat datang Staff Yosua selamat bekerja ! |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "| ^^^^^^^^^^^^^^ |" << endl;            
           cout << " ================\n\n";  
		   username = "yosua";
           i = 4;
           login = "berhasil";        } 
		   
		else if (user_input == user2 && pass_input == password2) {    
	   	   system("cls");        
           cout << " ================\n";            
           cout << "| Login Berhasil |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "|  Selamat datang Staff Raihan selamat bekerja ! |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "| ^^^^^^^^^^^^^^ |" << endl;            
           cout << " ================\n\n";  
		   username = "Raihan";
           i = 4;
           login = "berhasil";        } 
		
		else if (user_input == user3 && pass_input == password3) {    
	   	   system("cls");        
           cout << " ================\n";            
           cout << "| Login Berhasil |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "| Selamat datang Staff Alfian selamat bekerja !|" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "| ^^^^^^^^^^^^^^ |" << endl;            
           cout << " ================\n\n";  
		   username="alfian";
           i = 4;
           login = "berhasil";        } 	

      
      else if (user_input == user4 && pass_input == password4) {    
	   	   system("cls");        
           cout << " ================\n";            
           cout << "| Login Berhasil |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "| Selamat datang Staff Ade selamat bekerja !|" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "| ^^^^^^^^^^^^^^ |" << endl;            
           cout << " ================\n\n";  
		   username="Ade ";
           i = 4;
           login = "berhasil";        } 	
		
       else {            
           cout << "\n===========================\n";            
           cout << "Username / Password Salah! ("<<i<<"x)\n";
		   cout << "=============================\n\n";            
           i = i +1;
       }   
    } while (i <= 3);
	
    if(login != "berhasil"){
       cout<<"Anda telah 3x salah login.\n";       
       cout<<"Silahkan coba 40218 Hari lagi. Terima Kasih..\n\n";      
	}   
   return 0;


}