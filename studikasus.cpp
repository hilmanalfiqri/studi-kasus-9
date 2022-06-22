#include <iostream>
using namespace std;

class studi_kasus{
	private:
		int*nim;
		int nimMhs[5];
		string *nama;
		string namaMhs[5];
		
	public:
	void input(){
		cout<<"======================================"<<endl;
		cout<<"\tMasukan Data Mahasiswa Berhasil Masuk \n";
		cout<<"\tBabak Final Lomba Parmatika"<<endl;
		cout<<"=======================================";
		for(int i=0; i<5; i++){
			cout<<endl;
			cout<<"Masukan NIM Finalis :";
			cin>>nimMhs[i];
			cout<<"Masukan Nama Finalis :";
			cin.ignore();		
			getline(cin,(namaMhs[i]));
		}
}
	void proses(){
	cout<<"\n====================================";
	cout<<"\n\t\tMenyimpan data ke alamat \n";
	cout<<"=====================================\n";
	nim=new int[5];
	nama=new string[5];
	for(int i=0; i<5; i++){
		*nim = nimMhs[i];
		nim+= 1;
		*nama = namaMhs[i];
		nama+=1;
		}
	}
	void output(){
	nim -=5;
	nama -= 5;
	cout<<"\n===================================";
	cout<<"\n\tMenampilkan data ke alamat \n";
	cout<<"=====================================\n";
	for(int i=0; i<5; i++){
		cout<<"\n\tNama ke-"<<i+1<<" : ";
		cout<<*nama;
		nama+=1;
		cout<<"\n\tNIM		: "<<*nim<<"\t\t\t\t|";
		nim+=1;
		}
	cout<<"\n==================================\n";
	cout<<endl;
	}
	
};
int main(){
	studi_kasus studi;
	studi.input();
	studi.proses();
	studi.output();
}


