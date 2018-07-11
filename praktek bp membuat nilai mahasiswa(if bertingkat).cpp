#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
     int nilaiMHS;
     string indeks;

     // Memberikan informasi agar user memasukkan
     // Nilai yang akan dikonversi
     cout<<"\t== Program Konversi Nilai ==\n\n";
     cout<<"Masukkan nilai : ";

     // Membaca nilai yang dimasukkan dari keyboard
     // Dan disimpan ke variabel nilaiMHS
     cin>>nilaiMHS;

     // Program ini merupakan
     // Contoh if lebih dari dua kondisi
     if(nilaiMHS >= 80){
          indeks = "A+";
     }
     else if(nilaiMHS >= 75){
          indeks = "A";
     }
     else if(nilaiMHS >= 70){
          indeks = "B+";
     }
     else if(nilaiMHS >= 65){
          indeks = "B";
     }
     else if(nilaiMHS >= 60){
          indeks = "C+";
     }
     else if(nilaiMHS >= 55){
          indeks = "C";
     }
     else if(nilaiMHS >= 40){
          indeks = "D";
     }
     else{
          indeks = "E";
     }

     // Menampil nilai indeks hasil konversi
     cout<<"\nNilai indeks hasil konversi dari "<<nilaiMHS;
     cout<<" adalah "<<indeks;
     cout<<endl<<endl;
     cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
     cout<<"++++++++++++++++++++ TERIMA KASIH +++++++++++++++++++++++\n";
     cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
  
     return 0;
}

