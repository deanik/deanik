#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    ifstream wej;
    ofstream wyj;
    wej.open("wej.txt");
    wyj.open("wyj.json");
    
        int a =0;
        int b [1000];
        if (wej.good()) 
		{
            wyj<<"[";
            while  (!wej.eof()) 
			{
            wej >> b[a++];
            }
            while (a!=-1) 
			{
                wyj << " {  \"liczba\" : \"" << b[a--]<<"\"}";
                if(!wej.eof()){
                wyj << ", ";
                    }
            }
            wyj<<"]";
        }
        system("PAUSE");
        return 0;

}
