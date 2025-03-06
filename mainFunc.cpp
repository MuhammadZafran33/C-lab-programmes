#include <iostream>

using namespace std;

/*
*/
int add(int n1, int n2){
	int res= n1 + n2;
	return res;
}
int main(int argc, char** argv) {
	int x, y;
	int r;
	char repeat;
	do
	{
	cout<<"\nEnter two Numbers :"<<endl;
	cin>>x;
	cout<<"\nEnter two Numbers :"<<endl;
	cin>>y;
	int r = add(x, y);
	cout<<"the sum is = "<<r<<endl;
	
	cout<<"Do you want to repeat (y/N) "<<endl;
	cout<<endl;
	cin>>repeat;
	}while(repeat=='Y' || repeat=='y');
		return 0;
	
	
	
	
	return 0;
	
}