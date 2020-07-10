#include<iostream>
using namespace std;
int main()
{
	int age;
	char name[50];
	cout<<"Enter name of Candidate:";
	cin>>name;
	cout<<"\nEnter age of candidate: ";
	cin>>age;
	if(age>=18){
		cout<<name <<" is eligible to vote.\nHave a nice day!"; 
	}
	else{
		cout<< name<<" is not eligible to vote. Please wait until you turn 18.\nHave a nice day!";
	}return 0;
	
}
