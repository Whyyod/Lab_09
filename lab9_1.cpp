	#include<iostream>
	#include<iomanip> //For using setw(), setprecision(), ...
	using namespace std;

	int main(){
		double 	PrevBalance , interest , Payment , Total , NewBalance , rate ;
		int end=1; 
		cout << "Enter initial loan: ";
		cin >> PrevBalance ;
		cout << "Enter interest rate per year (%): ";
		cin  >> interest ;
		cout << "Enter amount you can pay per year: ";
		cin >> Payment ;

		//use 'setw' to set width of table and 'left' to set left-alignment
		//you can change input argument of 'setw()' to see the effect
		//Try to change from 'left' to 'right' and see the effect

		cout << setw(13) << left << "EndOfYear#"; 
		cout << setw(13) << left << "PrevBalance"; 
		cout << setw(13) << left << "Interest"; 
		cout << setw(13) << left << "Total";
		cout << setw(13) << left << "Payment";
		cout << setw(13) << left << "NewBalance";
		cout << "\n";

		NewBalance = PrevBalance ;

		 while (NewBalance > 0)
		{

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << end; 
		cout << setw(13) << left << PrevBalance;
		rate = PrevBalance *(interest/100);
		cout << setw(13) << left << rate;
		Total = PrevBalance + rate;
		cout << setw(13) << left << Total;
		if (Total < Payment)
		{
			Payment = Total ;
		}
		
		cout << setw(13) << left << Payment;
		NewBalance = Total - Payment;
		cout << setw(13) << left << NewBalance;
		PrevBalance = NewBalance ;
		cout << "\n";
		end++ ;
		}
		
		

		return 0;
	}
