//2) Fare la funzione del punto 1) in maniera ricorsiva#include <iostream>

#include <iostream>
using namespace std;
int sommaprimiN (int n);
int sommaRic (int n);
int fattorialeRic (int n);

int main ()
{  int n=0;
   int r=0;
   cin>>n;
   r=fattorialeRic(n);
   cout<<r;
   getchar();
   return 0;
}

int sommaprimiN (int n)
{
	int somma=0;                                //Le due funzioni sono la stessa cosa, ma espressa in modi diversi
	for (int i=n; i>0; i--)
	{
		somma=somma+i;
	}
	
	return somma;
	
}

int sommaRic(int n){
	
	if(n==0)
		return 0;
	else
		return n+sommaRic(n-1);
	
}

int fattorialeRic(int n){
	
	if(n==1)
		return n;
	else
		return n*fattorialeRic(n-1);	
	
}
