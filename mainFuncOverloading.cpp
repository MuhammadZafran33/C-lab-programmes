#include <iostream>
using namespace std;
int  hilal(int a, int b){
	int R= a + b;
	cout<<"the addition  is : "<<R<<endl;
	
}

int hilal(float a, int b){
	float R = a * b;
	cout<<"the multiuplication is : "<<R<<endl;
	
}
int main(int argc, char** argv) {
	int x, y;
	float z;
	cout<<"Enetr 1st number : ";
	cin>>x;
	cout<<"Enetr 2nd number : ";
	cin>>y;
	cout<<"Enetr 3rd number : ";
	cin>>z;
	
	
	hilal(x, y);
	hilal(z, y);
	
	return 0;
}