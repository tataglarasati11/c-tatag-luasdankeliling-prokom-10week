
#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;
void header ();
void jenis ();
void persegi ();
void persegiP ();
int hasil(int sisi, int panjang,int lebar) ;

int main()
{
	int pilih;
	char ulang;

do{
		header ();
	    cout << "Pilihan:" << endl;
	    cout << "1. Persegi "<< endl ;
		cout << "2. Persegi Panjang"<< endl;
		cout << "Masukkan piihan anda : ";
	    cin	 >> pilih;
	    system("cls");
	    switch (pilih){
	    	case 1 :
				persegi ();
			break ;
			
			case 2 :  
				persegiP();
			break ;
			default:
				cout<<"Pilihan yang anda inginkan tidak ditemukan"<<endl;
			break;
			
		}
		cout << "apakaah ingin menghitung lagi ? "<<endl ;
		cout << "Y/T"<<endl;
		cout << " pilih : ";
		cin >> ulang;	
		system("cls");
	}while(ulang=='Y'||ulang=='y');
	cout << "Terima kasih telah menggunakan program saya untuk menghitung"<<endl<<endl;
	getch ();
	cout << "=============================="<<endl;	
	cout << "Tatag Indah Larasati"<<endl;
	cout << " D04217025"<<endl;
    cout << "=============================="<<endl;	
}
	
	void header (){
		cout << "==================================="<< endl;
		cout << "Program menghitung Keliling dan Luas"<< endl;
		cout << "==================================="<< endl;
	}
	
	void jenis (){
		cout << "1. Keliling " 						<< endl ;
		cout << "2. Luas " 							<< endl ;
		cout << "=================================="<< endl ;
	}
	
	void persegi () {
		int s;
		int luas;
		int keliling;
		int pilih;
			  	header ();
	    		jenis ();
	    		cout << "masukkan piihan anda : ";
	    		cin >> pilih;
	    		system("cls");
	    		switch (pilih) {
	    			case 1 : 
		    			header();
				   		cout << "Mencari Keliling persegi"<<endl ;
				   		cout << " Masukkan nilai sisi : ";
				   		cin >> s;
				   		keliling = 4*s;
				   		cout << "keliling persegi adalah :" <<keliling<<"\n";
					break;
	    			case 2 :
						header();
				   		cout << "Mencari Luas persegi"<<endl ;
				   		cout << " Masukkan nilai sisi : ";
				   		cin >> s;
				   		luas = s*s;
				   		cout << "Luas persegi adalah :" <<luas<<"\n";
					break;	
					default:
						cout<<"Pilihan yang anda inginkan tidak ditemukan"<<endl;
					break;	
				}
		
	}
	
void persegiP (){
	int p;
	int l;
	int luas;
	int keliling;
	int pilih;
				header ();
				jenis ();
				cout << "masukkan piihan anda : ";
	    		cin >> pilih;
	    		system("cls");
	    		switch (pilih) {
	    			case 1 : 
		    			header ();
				   		cout << "Mencari Keliling persegi panjang"<<endl ;
				   		cout << " Masukkan nilai panjang : ";
				   		cin >> p;
				   		cout << " Masukkan nilai lebar : ";
				   		cin >> l;
			   			keliling = 2*(p+l) ;
						cout << "keliling persegi panjang adalah :" <<keliling<<"\n";
	    			break ;
	    			case 2 :	
						header ();
			    		cout << "Mencari luas persegi panjang"<<endl ;
				   		cout << " Masukkan nilai panjang : ";
				   		cin >> p;
				 		cout << " Masukkan nilai lebar : ";
				   		cin >> l;
				   		luas = p*l;
				   		cout << "Luas persegi panjang adalah :" <<luas<<"\n";	
					break;
				
					default:
						cout<<"Pilihan yang anda inginkan tidak ditemukan"<<endl;
					break;		
				}
}

