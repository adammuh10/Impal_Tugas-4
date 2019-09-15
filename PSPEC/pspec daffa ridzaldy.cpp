#include <conio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

    string nama,alamat,no_hp;
    int kilo,bayar,kembalian,total_bayar,perkilo,pilih;
    char pil;
    
	void inputdata()
	{
		cout <<"Nama Anda : ";
    	cin >> nama;
		cout <<"Alamat Anda : ";
    	cin >> alamat;
		cout <<"No HP Anda : ";
    	cin >> no_hp;		
	}
	
	void inputdatalondry()
	{
		cout <<"Harga Perkilo Rp5500 "<<endl;
		cout <<"Jumlah Kilo : ";
    	cin >> kilo;	
	}
	
	void pembayaran(){
		perkilo=5500;
		total_bayar=perkilo*kilo;
		cout<<"Total yang harus di bayar "<<total_bayar<<endl;
		cout<<"Masukkan Uang pembayaran : ";
		cin >> bayar;
		kembalian=bayar-total_bayar;
		cout<<"Kembalian :"<<kembalian<<endl;
	}
	
	int main()
	{
		awal:
		system("cls");
		cout<<" PILIHAN MENU "<<endl;
		cout<<"1. Input Data Diri"<<endl;
		cout<<"2. Input Data Londry"<<endl;
		cout<<"3. Pembayaran"<<endl;
		cout<<"4. Kwitansi"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Masukkan Pilihan : ";
		cin >> pilih;
		if (pilih == 1){
			system("cls");
			inputdata();
			goto awal;
		}
		if (pilih == 2){
			system("cls");
			inputdatalondry();
			goto awal;
		}
		if (pilih == 3){
			system("cls");
			pembayaran();
			goto awal;
		}
		if (pilih == 4){
			system("cls");
			cout <<"Nama Anda : "<<nama<<endl;
			cout <<"Alamat Anda : "<<alamat<<endl;
			cout <<"No HP Anda : "<<no_hp<<endl;
			cout <<"Jumlah Kilo : "<<kilo<<endl;
			cout <<"Total Pembayaran : "<<total_bayar<<endl;
			cout <<"Kembalian : "<<kembalian;
		}
		if (pilih == 5){
			system("cls");
			cout<<"APAKAH ANDA YAKIN KELUAR DARI PROGRAM?? [Y][N]"<<endl;
			cin>>pil;
   			if(pil=='y'||pil=='Y')
    			{
    			cout<<"PROGRAM SELESAI";
				}
   			if(pil=='n'||pil=='N')
           		{
           			system("cls");
				   goto awal;}}
				}

	
