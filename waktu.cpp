#include <iostream>
#include <windows.h>

using namespace std;

void waktu(){
	
	int n;
	
	for(int i=n; i>=0 ; i--){
		cout << "waktu : ";
		cout << i;
		Sleep(1000);
		system("cls");
		
		if(i==0){
		cout << "WAKTU HABIS\n";
		cout << "Score : " << score;
		}
	}
	
	
}

int main(){
	waktu();
}
