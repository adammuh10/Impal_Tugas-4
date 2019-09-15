#include <iostream>
#include <conio.h>

using namespace std;

main (void) {    
   string username;    
   int password;    
   int i;    
   cout << "------------------------------------------\n";    
   cout << "Selamat Datang Di Form Login Informatika \n";    
   cout << "------------------------------------------\n\n";
   string user ="adam";    
   int pass = 1234512345;    
   int login=0;    
   i = 1;    
   
   do {        
       cout << "Username : "; cin >> username;        
       cout << "Password : "; cin >> password;        
       if (username ==user && password == pass) {            
           cout << "\n--------------------\n";            
           cout << "Anda Berhasil Login" << endl;            
           cout << "--------------------\n\n";            
           i=4;            

 
           login=1;        } 
       else {            
           cout << "\n------------------------\n";            
           cout << "Maaf ID & PASSWORD Salah!" << endl;                         cout << "-------------------------\n\n";            
           i = i +1;      
       }   
    }while (i <= 3);       
    if(login != 1){
       cout<<"Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";       
       cout << "Mohon Maaf Akun Anda Kami Blockir, Terima Kasih..";      }   
   getch();


}
