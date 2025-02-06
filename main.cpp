#include <iostream>
using namespace std;

class employee{
	int Id;
	static int count;
	
	public:
		void setData(void){
			cout<<"enter the id of employee: "<<endl;
			cin>>Id;
			count++;
			
		}
		void getData(void){
			cout<<"the id of the employee is "<<Id<<" and this is employee number "<<count<<endl;
		}
		
	static getCount(void){
		cout<<"the value of count is "<<count<<endl;
	}
};
int employee:: count;
int main() {
	
	employee zafran,abdulaziz, salman;
	zafran.setData();
	zafran.getData();
	employee::getCount();
	
	abdulaziz.setData();
	abdulaziz.getData();
	employee::getCount();
	
	salman.setData();
	salman.getData();
	employee::getCount();
	
	return 0;
}