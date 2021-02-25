#include <iostream>
#include <fstream>
#include <string>


#define RZM 20
typedef short obrazek[RZM+1][RZM+1]; 
using namespace std;

class file{
	ifstream plik;
	string a;

public:
	
	void otworz();
	void ilosc_jedynek();
	void ileCzarnych();


};
void file::otworz(){
	plik.open("dane_obrazki.txt");
	if(plik.good() == true)
    {
        while(!plik.eof())
        {
            getline(plik, a);
            cout << a << endl;
            
        }
        plik.close();
}
}
void file::ilosc_jedynek(){
	string wiersz;
plik>>wiersz;
int ilosc_jedynek=0;
for (int i=0; i<20; i++) 
   if (wiersz[i]=='1') 
       ilosc_jedynek++;
}
void file::ileCzarnych(){
	int ileCzarnych,obrazek ,pobraz;{
 int czarne=0;
 for(int i=0;i<RZM;i++){
 for(int j=0;j<RZM;j++){
 czarne+=pobraz[i][j];
 }
 }
 return czarne;
} 
}
int main() {
	file plik;
	plik.otworz();
	plik.ilosc_jedynek();
	plik.ileCzarnych();
	
	return 0;
}
