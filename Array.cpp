#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	string subject[5]={"Math","Urdu","OOP","English","Physics"};
	int Marks[5];
	cout<<"\n enter your Marks: ";
	
	for(int i = 0; i<5;i++)
	{
		cout<<"\n Enter marks for "<<subject[i]<<" : ";
		cin>>Marks[i];
		
	}
	
	cout<<"================================\n";
	
	int total=0;
	for(int i = 0; i<5;i++)
	{
		total += Marks[i];
		cout<<"Marks of "<<subject[i]<<" is : "<<Marks[i]<<endl;
		}
	int greatest =Marks[0], gIndex=0;
	for(int i = 0; i<5;i++)
	{
		if(Marks[i]>greatest)
		{
			int temp = Marks[i];
			Marks[i] = greatest;
			greatest =temp;
			gIndex = i;
			
		}
		
	}
	cout<<"Greatest Marks is: "<<subject[gIndex]<<" "<<greatest;
	
	return 0;
}