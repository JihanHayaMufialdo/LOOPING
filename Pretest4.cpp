#include <iostream>
using namespace std;

int main (){
	
	cout << "============================================" << endl;
	cout << " PROGRAM MENGHITUNG TOTAL BESERTA RATA-RATA " << endl;
	cout << "============================================" << endl;
	cout <<                                                   endl;
	cout << " +++ MASUKKAN DATA +++ "                      << endl;
	cout << "_______________________"                      << endl;
	cout <<                                                   endl;
	
	//TIPEDATA//
	int n;
	int x;
	float total = 0;
	float rata;
	
	//INPUT//
	cout << "Jumlah Bilangan : " ; cin >> n ;
	cout << endl;
	
	//LOOPING//    
	for ( int a=0 ; a<n ; a++ ){
	 	
	 	cout << "Bilangan        : " ; cin >> x ;
	    
		total = total+x;
	}
	    rata  = total/n;
	
	cout << endl;
	cout << "++++++++++++++++++++++" << endl;
	cout << " HASIL PENGHITUNGAN : " << endl;
	cout << "++++++++++++++++++++++" << endl;
	cout << endl;
	
	//OUTPUT//
	cout << "Total Penjumlahan : " << total << endl;
	cout << "Rata-Rata         : " << rata << endl;
	
	cout <<                                                  endl;
	cout << "---------------------------------------------" << endl;
	cout << "       TERIMA KASIH DAN TETAP BERJUANG       " << endl;
	cout << "---------------------------------------------" << endl;
	
	return 0;
		
}
