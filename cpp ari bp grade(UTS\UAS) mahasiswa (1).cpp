#include<iostream>
#include<conio.h>
using namespace std;

int main(){float tm,nilai_mid,final,nam;
	cout<<"\t----- Menghitung Nilai Mahasiswa -----\n\n"<<endl<<endl;
	
	cout<<"Masukkan Nilai Tugas Mandiri =  ";
	cin>>tm;
	cout<<"Masukkan Nilai Mid           =  ";
	cin>>nilai_mid;
	cout<<"Masukkan Nilai Final         =  ";
	cin>>final;
	nam = 0.2*tm+0.3*nilai_mid+0.5*final;
	
	cout<<"\n\nNilai Akhir Mahasiswa        = "<<nam<<endl;
	
	if (nam<=100 && nam>84){
		cout<<"\nAnda Mendapatkan Grade A"<<endl;
	}
	else if (nam<=84 && nam>74){
		cout<<"\nAnda Mendapatkan Grade B"<<endl;
	}
	else if (nam<=74 && nam>64){
		cout<<"\nAnda Mendapatkan Grade C"<<endl;
	}
	else if (nam<=64 && nam>49){
		cout<<"\nAnda Mendapatkan Grade D"<<endl;
	}
	else if (nam<=49 && nam>=0){
		cout<<"\nAnda Mendapatkan Grade E"<<endl;
	}
	else {
		cout<<"\nNilai Eror!!"<<endl;
	}
	
	
	return 0;
}
