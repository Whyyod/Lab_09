		#include<iostream>
		using namespace std;

		//Write the function printO() here

		void printO(int N,int M) {

			if (N > 0 && M > 0) 
		{
			for(int i=0; i<N ; i++){
				for(int j = 0 ; j < M ; j++){
					cout << "O" ;
				}
				cout << '\n' ;
			}
		}
		else
		{
			cout << "Invalid input" ;
		}
		
}
	int main() {
		return 0 ;
	}