#include <iostream>
#include <string>
using namespace std;

class tas{
	public:
		void bahan(string kulit);
		string merk;
		double harga;
};
int main () {
	tas kulit;
	
	kulit.merk ="ripcurl";
	kulit.harga = 20000;
	
	cout<<"merk yang dipakai "<< (kulit.merk)<<endl;
	cout<<"Harga modal nya "<< (kulit.harga)<<endl;
	
	kulit.bahan("terbuat dari kulit buaya yang berkualitas tinggi");
}
void tas::bahan(string kulit){
	cout<<"tas ini sangat kuat dan tahan lama "<<kulit<<" dijamin kalau kamu beli tas ini tidak akan menyesal"<<endl;
}
