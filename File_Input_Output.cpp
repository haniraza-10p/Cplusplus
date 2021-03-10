#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	
	ofstream out;
	ifstream in;
	string st;
	
	out.open("sample.txt"); //For Overwritting
	//out.open("sample.txt",ios::app); //For appending
	out<<"This is line 1\n";
	out<<"This is line 2\n";
	out<<"This is line 3\n";
	out<<"This is line 4\n";
	out<<"This is line 5\n";
	out.close();
	
	in.open("sample.txt");
	while(!in.eof()){
		getline(in,st);
		cout<<st<<endl;
	}
	in.close();
	
	
	//A short Example
	string name;
	int age;
	
	cout<<"Enter name: ";
	cin>>name;
	cout<<endl;
	
	cout<<"Enter Age: ";
	cin>>age;
	cout<<endl;	
	
	ofstream detail_file;
	detail_file.open("details.txt",ios::app);
	detail_file<< "Name is : "<<name<<". And Age is : "<<age<<endl;
	detail_file.close();
	
	ifstream details_output; string st1;
	details_output.open("details.txt");
	while(!details_output.eof()){
		getline(details_output,st1);
		cout<<st1<<endl;
	}
	details_output.close();
	
	cout<< "Name is : "<<name<<". And Age is : "<<age<<endl;
	
	//Reading numbers from file
	ifstream number_file;
	number_file.open("numbers.txt");
	
	int x,y;
	number_file>>x>>y;
	
	cout<<"Number 1 is : "<<x<<endl;
	cout<<"Number 2 is : "<<y<<endl;
	
	//Fruit List Example
	ifstream fruit_file;
	fruit_file.open("fruit_list1.txt");
	
	if(fruit_file.fail()){
		cerr<<"Error Opening File";
		exit(1);
	}
	
	string item;
	int count;
	
	while(!fruit_file.eof()){
		fruit_file>>item;
		count++;
	}
	cout<<endl;
	
	cout<<count<<" items found";
	
	
	return 0;
}
