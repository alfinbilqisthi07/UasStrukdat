#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include "conio.h"
using namespace std;

int main() {    
   int i;  
   string pass_input, user_input;  
   char ch;
   string password;
   
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
   string login = "block";    
   i = 1;    
   
  do {        
       cout << "Username = "; cin>>user_input;        
       cout << "Password : ";
            while(ch != 13){// //Loop until 'Enter' is pressed
				{
					ch = getch();
					if(ch == '0')
					 {
						switch(getch())
						  {
						  default:
							  break;            
						};
					}
				 else if(ch == '\b')   //If the 'Backspace' key is pressed
					{
					if(pass_input.size() != 0)  //If the password string contains data, erase last character
					   {
					   cout << "\b \b";
					   pass_input.erase(pass_input.size() - 1, 1);
					   }
					continue;
					}
				 else if(ch <= '9' && ch >= '0' || ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') 
					{
					pass_input += ch;
					cout << "*";
					}
				 else
					continue;
				 }   
				 
       if (user_input == user1 && pass_input == password1) {    
	   	   system("cls");        
           cout << " ================\n";            
           cout << "| Login Berhasil |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "|  Yosua |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "| ^^^^^^^^^^^^^^ |" << endl;            
           cout << " ================\n\n";  
		   cout << " Diatas adalah kode Rahasia nya\n\n";    
           i = 4;
           login = "berhasil";        } 
		   
		else if (user_input == user2 && pass_input == password2) {    
	   	   system("cls");        
           cout << " ================\n";            
           cout << "| Login Berhasil |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "|  Raihan |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "| ^^^^^^^^^^^^^^ |" << endl;            
           cout << " ================\n\n";  
		   cout << " Diatas adalah kode Rahasia nya\n\n";    
           i = 4;
           login = "berhasil";        } 
		
		else if (user_input == user3 && pass_input == password3) {    
	   	   system("cls");        
           cout << " ================\n";            
           cout << "| Login Berhasil |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "|  Raihan |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "| ^^^^^^^^^^^^^^ |" << endl;            
           cout << " ================\n\n";  
		   cout << " Diatas adalah kode Rahasia nya\n\n";    
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