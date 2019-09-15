
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,i,b,n,nomor[5];
    
	nomor[1]=1010;
	nomor[2]=1011;
	nomor[3]=1110;
	nomor[4]=1111;
	nomor[5]=1000;
	
    cout <<"Masukan Nomor Akun: ";
    cin >> a;
    
	i=0;
	n=5;
	do{
		if(nomor[i]==a)
			b=nomor[i];
		i++;
		}
	while(i<n);
	{
	
			if(b==a)
				cout<<"  Nomor Akun "<<a<<" Ditemukan"<<endl;
			else
				cout<<"  Nomor Akun "<<a<<" Tidak Ditemukan"<<endl;
	
			}

    system("pause");
    return 0;

}

