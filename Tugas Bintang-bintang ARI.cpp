#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int bil;
	cout<<"\t\t=========================================================\n";
	cout<<"\t\t=========== Tugas Praktikum Bahasa Pemrograman ==========\n";
	cout<<"\t\t=========================================================\n"<<endl<<endl;
	cout<<"Jumlah Size <Ukuran> =  ";
	cin>>bil;
	cout<<endl;
	
	
	for (int i = bil; i >= 0; i--)
	{
		cout<<"\n";
		for (int j = i; j >= 0; j--)
		{
			cout<<" *";
		}
		for (int k = i; k < bil; k++)
		{
			cout<<"  ";
		}
		
		for (int k = i; k < bil; k++)
		{
			cout<<"  ";
		}
		for (int j = i; j >= 0; j--)
		{
			cout<<" *";
		}
	}
		
	
	
	for (int i = bil; i >= 0; i--)
	{
		cout<<"\n";
		for (int j = i; j <= bil; j++)
		{
			cout<<" *";
		}
		for (int k = i; k > 0; k--)
		{
			cout<<"  ";
		}
		
		for (int k = i; k > 0; k--)
		{
			cout<<"  ";
		}
		for (int j = i; j <= bil; j++)
		{
			cout<<" *";
		}		
	}
	cout<<endl<<endl;
	cout<<"\n\t==========================================================";
	cout<<"\n\t===                  TERIMA KASIH                      ===";
	cout<<"\n\t==  Program ini dibuat oleh : ARI ROCADI (20170801231)  ==";
	cout<<"\n\t==========================================================";
	
	
	getch();
}

