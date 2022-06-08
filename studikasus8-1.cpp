#include <iostream>
using namespace std;

class toko{
	public:
		void databarang();
		void proses();
		void output();
	private:
		string array1[6]={"Samsung Evo", "San Disk 16GB", "Logitech M170", "WD Green 120GB", "Garmin Venu SQ", "Epson L3210 AIO"};
		int array2[2][6]={{30,45,55,23,12,14},{20000,60000,120000,400000,3100000,2500000}};
		long total[100],hasil;
};

void toko::databarang(){
	cout<<"=============================="<<endl;
	cout<<"Nama Barang\tStok\tHarga"<<endl;
	cout<<"=============================="<<endl;
	for(int i=0; i<6; i++){
		cout<<array1[i]<<"\t";
		for(int j=0; j<2; j++){
			cout<<array2[j][i]<<"\t";
		}
		cout<<endl;
	}
	cout<<"==============================="<<endl;
}

void toko::proses(){
	for(int i=0; i<6; i++){
		total[i]=array2[i][0] * array2[i][1];
	}
	for (int i=0; i<6; i++){
		hasil = hasil + total[i];
	}
	cout<<"Total Penjualan = Rp. "<<hasil;
}

int main (){
	toko x;
	x.databarang();
	x.proses();
}