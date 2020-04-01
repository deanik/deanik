#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream plik2;
	
	string t[1000]; 
	int licznik=0;
    string a;


    plik2.open("c:\\a.txt");  
    if(plik2.good())
     while(!plik2.eof())
                {
				plik2>>a;
				t[licznik] = a;
				cout<<licznik++<<": "<<a;
				cout<<endl;
                }
	cout<<licznik<< endl;
    system("PAUSE");
    return 0;
}
