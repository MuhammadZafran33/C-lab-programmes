#include <iostream>

#include <ctime>
using namespace std;

int main() {
	int A;
	bool found=false;
	srand(time(0));
	 
	int Secrete;
	Secrete=rand()%21;
	 
	cout<<"\nGuess Any number: ";
	cin>>A;
	 
	while (!found)
	 {
	 	if(A<Secrete)
	 	{
	 		cout<<"\nyour guess is too low.";
	 		break;
		 }
		 
		 else if (A>Secrete)
		 {
		 	cout<<"\nYour guess is too high.";
		 	break;
		 }
		 
		 else
		 {
		 	cout<<"\nCongratulation! You won. ";
	 		found=true;
	 		break;
		 }
	 }
	

	return 0;
}