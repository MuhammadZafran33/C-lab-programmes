#include <iostream>

using namespace std;

int main() {
//	int salary;
//	int serviceYears;
//	bool loan;
//	cout<<"enter the salary of employee: "<<endl;
//	cin>>salary;
//	cout<<"enter the service years of employee: "<<endl;
//	cin>>serviceYears;
//	cout<<"have you availed loan? ";
//	cin>>loan;
//	if(loan==0){
//	 if(salary<100000)
//		if(serviceYears>5){
//		
//		cout<<"you are eligible for loan";
//		
//		cout<<"you are elegible ";
//}
//	}
//	else
//	cout<<"not elegible for loan ";
//	


    int k; 
    int num; 
    
    
    cout << "Enter the number for the multiplication table: ";
    cin >> num;

    cout << "Enter the range (k value): ";
    cin >> k;
    
     
    
    for(int i = 1; i <= k; i++) {
    	for(int j = 1; j <= k; j++) {
    
        cout << num << " x " << i << " = " << num * i << endl;
        cout <<i<< j << ":\n";
    }

}
    return 0;
}

