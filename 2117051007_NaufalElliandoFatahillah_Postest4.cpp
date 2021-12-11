#include<iostream>
using namespace std;

int main(){
	
	int f;
	double total=0;
	float n_hari,rata_rata,konversi_usd;
	
	cin>>n_hari;
	
	    for(f=0; f<n_hari; f++){
	    double n_pembelian[f];
	    cin>>n_pembelian[f];
	    total+=n_pembelian[f];
	    
	}
	rata_rata=total/n_hari;
	konversi_usd=total*4000;
	
	cout << endl;
	
	cout<<"Rata-rata: "<<rata_rata<<" ETH"<<endl;
	cout<<"Total ETH: "<<total<<" ETH"<<endl;
	cout<<"Dalam USD: $"<<konversi_usd<<endl;
	return 0;
	
}
