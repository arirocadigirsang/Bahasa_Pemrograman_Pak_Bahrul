#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	char code;
	float harga,diskon,harga_asli;
	atas: 
	
	cout<<"\t\t       Menghitung Struk Belanja \n"<<endl<<endl;
	cout<<"Masukkan Harga Barang      = ";
	cin>>harga;
	cout<<"Masukkan Code Barang       = "; 
	cin>>code;
	cout<<"\n\n\n";
	
	if (code=='A' || code=='a'){
		diskon=(harga*50)/100;
		harga_asli=harga-diskon;
		cout<<"Harga Awal               = Rp. "<<harga<<endl;
		cout<<"Potongan Diskon          = Rp. "<<diskon<<endl;
		cout<<"Harga Yang Harus Dibayar = Rp. "<<harga_asli<<endl<<endl;
		cout<<"\t\t======================================================="<<endl;
		cout<<"\t\t===================== TERIMA KASIH ===================="<<endl;
		cout<<"\t\t======================================================="<<endl;
	}
	else if (code=='B' || code=='b'){
		diskon=(harga*40)/100;
		harga_asli=harga-diskon;
		cout<<"Harga Awal    	        = Rp. "<<harga<<endl;
		cout<<"Potongan Diskon          = Rp. "<<diskon<<endl;
		cout<<"Harga Yang Harus Dibayar = Rp. "<<harga_asli<<endl;
		cout<<"\t\t======================================================="<<endl;
		cout<<"\t\t===================== TERIMA KASIH ===================="<<endl;
		cout<<"\t\t======================================================="<<endl;		
	}
	else if (code=='C' || code=='c'){
		diskon=(harga*30)/100;
		harga_asli=harga-diskon;
		cout<<"Harga Awal               = Rp. "<<harga<<endl;
		cout<<"Potongan Diskon          = Rp. "<<diskon<<endl;
		cout<<"Harga Yang Harus Dibayar = Rp. "<<harga_asli<<endl;
		cout<<"\t\t======================================================="<<endl;
		cout<<"\t\t===================== TERIMA KASIH ===================="<<endl;
		cout<<"\t\t======================================================="<<endl;
	}
	else if (code=='D' || code=='d'){
		diskon=(harga*20)/100;
		harga_asli=harga-diskon;
		cout<<"Harga Awal               = Rp. "<<harga<<endl;
		cout<<"Potongan Diskon          = Rp. "<<diskon<<endl;
		cout<<"Harga Yang Harus Dibayar = Rp. "<<harga_asli<<endl;
		cout<<"\t\t======================================================="<<endl;
		cout<<"\t\t===================== TERIMA KASIH ===================="<<endl;
		cout<<"\t\t======================================================="<<endl;
	}
	else if (code=='E' || code=='e'){
		diskon=(harga*10)/100;
		harga_asli=harga-diskon;
		cout<<"Harga Awal               = Rp. "<<harga<<endl;
		cout<<"Potongan Diskon          = Rp. "<<diskon<<endl;
		cout<<"Harga Yang Harus Dibayar = Rp. "<<harga_asli<<endl;
		cout<<"\t\t======================================================="<<endl;
		cout<<"\t\t===================== TERIMA KASIH ===================="<<endl;
		cout<<"\t\t======================================================="<<endl;
	}
	else {
		cout<<"CODE EROR!!\n";
		goto atas;		
	}

	
	getch();;
}
