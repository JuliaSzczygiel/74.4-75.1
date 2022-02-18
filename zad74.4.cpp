#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
ifstream dane("hasla.txt");
	string haslo;
	int mocnychHasel = 0;
	while(dane >> haslo){
		bool znakNumeryczyny = false;
		bool malaLitera = false;
		bool duzaLitera = false;
		for(int a=0; a<haslo.size(); a++){
			if((int)haslo[a] >= (int)'0' && (int)haslo[a] <= (int)'9'){
				znakNumeryczyny = true;
			}
			if((int)haslo[a] >= (int)'a' && (int)haslo[a] <= (int)'z'){
				malaLitera = true;
			}
			if((int)haslo[a] >= (int)'A' && (int)haslo[a] <= (int)'Z'){
				duzaLitera = true;
			}
		}
		if(znakNumeryczyny && malaLitera && duzaLitera){
			mocnychHasel++;
		}
	}
	cout << "74.4: " << endl;
	cout << "Ilosc mocnych hasel: " << mocnychHasel << endl;
}
