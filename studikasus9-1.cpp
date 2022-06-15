#include <iostream>
#include <string.h>

using namespace std;

class urutan{
	public:
		void input();
		void proses();
		void output();
	
	private:
		int buku[100], k, n=24, temp, rakbuku[10][10];
};

void urutan::input(){
	for(int i=1; i<=n; i++){
		cout<<"Masukan nomor buku ke-"<<i<<" = ";
		cin>>buku[i];
	}
	cout<<"\nBuku sebelum diurutkan :\n";
	for(int j=1; j<=n; j++){
		cout<<" "<<buku[j];
	}
	cout<<"\n******************************************\n";
};

void urutan::proses(){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(buku[i]>buku[j]){
				temp = buku[j];
				buku[j] = buku[i];
				buku[i] = temp;
			}
		}
	}
	k=1;
	for(int i=1; i<=4; i++){
		for(int j=1; j<=6; j++){
			rakbuku[i][j]=buku[k];
			k++;
		}
	}
};

void urutan::output(){
	cout<<" Buku setelah diurutkan :"<<endl;
	for(int i=1; i<=n; i++){
		cout<<" "<<buku[i];
	}
	cout<<"\n******************************************\n\n";
	
	cout<<"\nSusunan buku sesudah di urutkan :\n\n";
	for(int i=1; i<=4; i++){
		for(int j=1; j<=6; j++){
			cout<<"\t"<<rakbuku[i][j]<<" ";
		}
		cout<<endl;
	}
};

int main(){
	urutan x;
	x.input();
	cout<<endl;
	x.proses();
	cout<<endl;
	x.output();
	cout<<endl;
	return 0;
}