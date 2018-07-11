#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstdlib>
using namespace std;

struct mahasiswa
{
	char nama[30];
};

mahasiswa ueu;
char fileInput[15], fileInput2[15], fileInput3[15];

int garis()
{
	for(int i=0; i<70; i++)
	{
		cout<<"-";
	}
	cout<<endl;
}

int menu()
{
	cout<<"	NAMA	: ARI ROCADI "<<endl;
	cout<<"	NIM	: 20170801231 "<<endl<<endl;
	cout<<"\t     === Data Mahasiswa ==="<<endl;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"	Pilihlah kode yang Anda inginkan : "<<endl;
	cout<<"[1] Input Data"<<endl;
	cout<<"[2] Tambah Data"<<endl;
	cout<<"[3] Baca Data"<<endl;
	cout<<"[4] Keluar"<<endl;
	cout<<"Masukkan kode yang Anda pilih [1/2/3/4] : ";
}

int input_data()
{
	cout<<"Masukkan nama file (.txt) : ";
	cin.getline(fileInput,15);
	ofstream simpan (fileInput);
	system("cls");
	cout<<"\nNama\t    : ";
	cin.getline(ueu.nama,30);
	simpan<<ueu.nama<<endl;
	cout<<"\n\n\n"; system("pause");
}

int tambah_data() //menambahkan data
{
	cout<<"Masukkan nama file(.txt) : ";
	cin.getline(fileInput,15);
	ofstream simpan (fileInput, ios::app);
	system("cls");
	cout<<"\nNama\t    : ";
	cin.getline(ueu.nama,30);
	simpan<<ueu.nama<<endl;
	cout<<"\n\n\n"; system("pause");
}

int baca_data() //melihat data yang telah disimpan
{
	cout<<"Masukkan nama file (.txt): "; //memasukkan nama file
	cin>>fileInput;
	ifstream buka (fileInput);
	if(buka.good())
	{
		while(!buka.eof())
		{
			system("cls");
			while(buka)
			{ 
				buka.getline(ueu.nama,30);	
				cout<<ueu.nama<<endl;
			}
		}
		cout<<"\n\n\n"; system("PAUSE");
	}
	else cout<<"file tidak ada"<<endl;
	getch();
}

int main()
{
	char kode;

	data_saya:
	system("cls"); menu(); cin>>kode; cin.ignore(); system("cls");

   	switch (kode)
   	{
   		case '1': input_data(); goto data_saya;
   		case '2': tambah_data(); goto data_saya;
		case '3': baca_data(); goto data_saya;
		case '4': cout<<"\n\n\tTERIMA KASIH !!!"<<endl; break;
   	 	default : cout<<"\n\n\tMAAF KODE ANDA SALAH!!!\n\n"<<endl; 
				 system("PAUSE"); goto data_saya;
   	}
   	return 0;
}


