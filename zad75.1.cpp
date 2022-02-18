#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream dane("tekst.txt");
	string slowo;
	vector<string> podpunkt1;
	while(dane >> slowo){
		if(slowo[0] == 'd' && slowo[slowo.length()-1] == 'd'){
			podpunkt1.push_back(slowo);
		}
	}
	
	cout << "75.1: " << endl;
	for(int a=0; a<podpunkt1.size(); a++){
		cout << podpunkt1[a] << endl;
	}
}
