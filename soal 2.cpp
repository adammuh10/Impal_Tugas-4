
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,biaya;
    string waktu;
    
    cout <<"Masukkan Jumlah Perangkat : ";
    cin >> a;
    
    
    if(a <= 2)
    {
    	cout <<"Apakah Masih Jam Kerja ?(yes/no) : ";
    	cin >> waktu;
    	
		if (waktu == "yes") 
    	{
    		biaya = 50;
    		cout <<"Total Biaya : "<<biaya*a<<endl;		
		}else
			{
			biaya = 50;
    		cout <<"Total Biaya : "<<biaya*2*a<<endl;
			}
 	} 	if( a >= 11)
		 	{
		 		cout <<"Apakah Masih Jam Kerja ?(yes/no) : ";
    			cin >> waktu;
		 		if (waktu == "yes") 
    				{
    				biaya = 500;
    				cout <<"Total Biaya : "<<biaya*a*10<<endl;		
					}else
					{
					biaya = 500;
    				cout <<"Total Biaya : "<<biaya*2*a*10<<endl;
					}
			 }else if (a >= 3 && a <= 10)
 				{		
 					cout <<"Apakah Masih Jam Kerja ?(yes/no) : ";
    				cin >> waktu;
 					if (waktu == "yes") 
    				{
    				biaya = 100;
    				cout <<"Total Biaya : "<<biaya*a*10<<endl;		
					}else
					{
					biaya = 100;
    				cout <<"Total Biaya : "<<biaya*2*a*10<<endl;
					}
		 }
		 
 	
	
    system("pause");
    return 0;
}

