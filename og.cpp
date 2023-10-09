#include<iostream>
using namespace std;

class Student{
	public:
	string name;
	int rollcall;
	int year;
	void get(){
		cin>>name;
		cin>>rollcall;
		cin>>year;
	}
	void display(){
		cout<<name<<endl;
		cout<<rollcall<<endl;
		cout<<year;
	}	
};

int main(){
	Student s;
	s.get();
	s.display();
	
	return 0;
}

