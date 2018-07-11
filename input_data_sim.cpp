#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	char nama [30];
	char alamat [30] ;
	char ttl [30];
	char tinggi [30];
	char pekerjaan [30];
	char no_sim [30];
	char berlaku_sampai_dengan [30]; 
	
	cout<<"\t\t================================="<<endl;
	cout<<"\t\t|	input data sim		|\n";
	cout<<"\t\t================================="<<endl<<endl;
	cout<<"nama :";
	cin.getline(nama, 30);
	
	cout<<"alamat :";
	cin.getline(alamat, 30);
	
	cout<<"ttl :";
	cin.getline(ttl, 30);
	
	cout<<"tinggi :";
	cin.getline(tinggi, 30);
	
	cout<<"pekerjaan :";
	cin.getline(pekerjaan, 30);
	
	cout<<"no_sim :";
	cin.getline(no_sim, 30);
	
	cout<<"berlaku_sampai_dengan :";
	cin.getline(berlaku_sampai_dengan, 30);
	 
	
	
	getch();

	
}
