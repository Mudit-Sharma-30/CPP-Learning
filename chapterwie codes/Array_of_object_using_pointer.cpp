#include<iostream>
using namespace std;

class ShopItem {
		int Id;
		float Price;
	public:
		void SetData(int a , float b) {
			Id=	a;
			Price = b;
		}

		void GetData(void) {
			cout<<"The Id of the item is "<<Id<<endl;
			cout<<"The Price of this item is "<<Price<<endl;
		}
};

int main() {
	int Size=3;
	// 1. general store
	// 2. veggie store
	// 3. hardware store

	ShopItem * ptr = new ShopItem [Size];
	int p;
	float q;
	for(int i =0; i<Size; i++) {
		cout<<"Id and Price of item "<<i+1<<endl;
		cin>>p>>q;
		(ptr+i)->SetData(p,q);


	}

	for(int i =0; i<Size; i++) {
		cout<<endl;
		(ptr+i)->GetData();
		cout<<"-------------------";

	}


	return 0;
}

