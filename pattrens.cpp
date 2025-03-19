#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=10;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
   	cout<<endl;
   		cout<<endl;
   			cout<<endl;
   			
	for(int i=n; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
		for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<"-";
			}
		for(int j=1; j<=2*i-1; j++){
			cout<<"*";
			}
			
				cout<<endl;
			}
			
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
		for(int i=n; i>=1; i--){
		for(int j=n-1; j>=1; j++){
			cout<<"-";
			}
		for(int j=1; j<=2*i-1; j++){
			cout<<"*";
			}
			
				cout<<endl;
			}
			
			
     	cout<<endl;	cout<<endl;
     		cout<<endl;
     			cout<<endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==1 || i==n || j==1 ||j==n){
			cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
		cout<<endl;
			cout<<endl;
				cout<<endl;
					cout<<endl;
					
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<" ";
			}
		for(int j=1; j<=2*i-1; j++){
			if(j==1 || j==2*i-1 || i==n){
			cout<<"*";
			}
			else{
				cout<<" ";
			}
		
		}
		cout<<endl;
	}
		for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<" ";
			}
		for(int j=1; j<=2*i-1; j++){
			cout<<"*";
			}
			
				cout<<endl;
			}
	
		for(int i=n-1; i>=1; i--){
		for(int j=1; j<=n-i; j++){
			cout<<" ";
			}
		for(int j=1; j<=2*i-1; j++){
			cout<<"*";
			}
			
				cout<<endl;
			}
	
	return 0;
}