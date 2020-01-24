#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
    double prev,payment,per;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout<<"Enter initial loan: ";
	cin>>prev;
	cout<<"Enter interest rate per year (%): ";
	cin>>per;
	cout<<"Enter amount you can pay per year: ";
	cin>>payment;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
    double	in=prev*(per/100);
	int end=1;
	if(payment<prev){
	while(prev+in-payment>=0 && prev!=0){		
	cout << fixed << setprecision(2);
	cout << setw(13) << left << end++; 			
	cout << setw(13) << left << prev;
	cout << setw(13) << left << in;
	cout << setw(13) << left << prev+in;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << prev+in-payment;
	cout << "\n";	

	prev=prev+in-payment;
	in=prev*(per/100);	
	if(prev+in<payment){
		payment=prev+in;
	}
	
	}

	}else if(payment>prev){
		payment=prev+in;
		cout << fixed << setprecision(2);
	cout << setw(13) << left << end++; 			
	cout << setw(13) << left << prev;
	cout << setw(13) << left << in;
	cout << setw(13) << left << prev+in;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << prev+in-payment;
	cout << "\n";	

	prev=prev+in-payment;
	in=prev*(per/100);
	}
	return 0;
}