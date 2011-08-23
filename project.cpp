#include <iostream> //cin, cout
#include <fstream>  //open , read file
#include <string>   
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib> // random
using namespace std;


class test
	{
	public:
	
	
	char fileName[64];
	void showData();
	void refreshData();
void parseRss();
	};



void test::parseRss()
{

system("perl get-rss");

}

void test::showData()
{

	ifstream infile;

	infile.open ("text.log");
	if (infile.is_open()) { 
	while (!infile.eof())
      		cout << (char) infile.get();
	infile.close();
	}else{cout << "cannot open file for reading" << endl;}
	
  		




}

void test::refreshData()
{
	
  	ofstream outfile;
	
	outfile.open ("text.log");
 	if (outfile.is_open()) { 
	outfile << "The random number generated ... " << rand() << endl;
  	outfile.close();
	}else{cout << "cannot open file for writting" << endl;}
	
}


int main(void)
{
	
	test tst;
	int selectedOption;
	bool On = true;
	

while(On != false) {
	cout << "Select an option :" << endl;
	cout << "1. View data." << endl;
	cout << "2. Refresh data." << endl;
	cout << "3. Parse RSS." << endl;
cout << "4. Exit." << endl;

	cin >> selectedOption;


switch (selectedOption) {

case 1 : tst.showData(); break ;			
case 2 : tst.refreshData(); break ;
case 3 : tst.parseRss(); break ;
case 4 : exit(0); break ;
default : cout << "Please select an option";break;
			}

On=true;
}
	return 0;
}