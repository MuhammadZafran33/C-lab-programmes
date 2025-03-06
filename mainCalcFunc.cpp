#include <iostream>
using namespace std;
float calculator(int n1, int n2, char op){

float res;
switch(op){
	
	case'+':
		res = n1 + n2;
		break ;
	case'-':
		res = n1 - n2;
		break ;
	case'*':
		res = n1 * n2;
		break ;
	case'/':
		res = n1 / n2;
		break;
	case'%':
		res = n1 % n2;
		break ;
		
	default:
	cout<<"invalid opartor intered !"  <<endl;
    
	break ;
}
return res;
}

int main(int argc, char** argv) {
	
	int x, y;
	int r;
	char op;
	char repeat;
	do
	{
	cout<<"\nEnter two Numbers :"<<endl;
	cin>>x;
	cout<<"\nEnter two Numbers :"<<endl;
	cin>>y;
//	int r = add(x, y);
//	cout<<"the sum is = "<<r<<endl;

	cout<<"Enter oprator ( +, _, * , / ,%)"<<endl;
	cin>>op;
	
	
	cout<<"Do you want to repeat (y/N) "<<endl;
	cout<<endl;
	cin>>repeat;
	}while(repeat=='Y' || repeat=='y');
		return 0;
	
	
	return 0;
	
	
	
}