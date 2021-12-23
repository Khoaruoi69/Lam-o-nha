#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
//	//doc file
	ifstream file;
	file.open("XXXXX.txt",ios::in);
string a;
//	
	string line;
//	while (!file.eof())          
//	{
//		getline(file, line); 
//		a =a+ line+"\n";
//		
//	}
//	cout<<"XXX.com:   "<<a<<"\n\n";
//	file.close();
//	system("pause");
   cout<<(file>>a)?
    ("XXX.com:   "<<a<<"\n\n"):NULL;
	
}
