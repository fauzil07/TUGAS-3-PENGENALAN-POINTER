#include<iostream>
using namespace std;

int main(){
	int x;	//variabel x
	int *y;	//cara mengakses pointer itu dengan cara menambah '*' di awal variabel / tipe_data *nama_variabel
	
	x=10;	//nilai dari a x = 100
	y=&x;	//p mmengambil alamat dari x
	cout<<"Nilai x  = "<<x<<endl;	//menampilkan nilai x
	cout<<"Alamat x = "<<&x<<endl;	//manampilkan alamat x
	cout<<"Nilai y  = "<<*y<<endl;	//menampilkan nilai p
	cout<<"Alamat y = "<<y;	//menampilkan alamat p
	
	return 0;
}
