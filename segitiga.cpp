
#include <iostream>
#include <string>

using namespace std;

int main()
{
    double a,b,c,d,terbesar;

    cout <<"Berikan sisi A : ";
    cin >> a;

    cout <<"Berikan sisi B : ";
    cin >> b;

    cout <<"Berikan sisi C : ";
    cin >> c;
    
    d = a+=b;
    
    if(a > b)
    {
		terbesar = a;
 	}
	else
		terbesar = b;
 
	if(c > terbesar){
		terbesar = c;
	}
	
	d = a+b;
	
    if(terbesar >= d || terbesar == d)
    {
    	cout<<"Segitiga tidak ada"<<endl;
	}else if( a==0 || b==0 || c==0 )
		{
		cout<<"Segitiga tidak ada"<<endl;
	 	} else if( a<= 0 || b<=0 || c<=0) 
			{
				cout<<"Segitiga tidak ada"<<endl;
			}else if(a==b && a==c)
    				{
     	   				cout<<"Segitiga sama sisi"<<endl;
    				}
    				else if(a==b || a==c)
    					{
        					if(a!=b || a!=c)
        					{
            				cout<<"Segitiga sama kaki"<<endl;
        					}
        	
    					}else if(terbesar*terbesar == (b*b + c*c))
    					{
    						cout<<"Segitiga siku siku"<<endl;
						}
						else
    						cout<<"Segitiga bebas"<<endl;

    system("pause");
    return 0;

}

