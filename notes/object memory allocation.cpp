#include<iostream>
using namespace std;

class shop

{
		// private class ke andr array

		int ItemId[100];
		int ItemPrice[100];
		int counter;

	public:
		// 	counter is in private class we gave to
		//	assign the value we have to use function
		void initCounter(void) {
			counter =0;
		};
		//	Function to set the price of the object
		void setPrice(void);
		//	Function to display the price of the oject
		void displayPrice(void);

};

void shop ::setPrice(void) {
	cout<<"Enter the Id of your item of your item number "<<(counter+1) <<endl;

	//Value is stored in array
	cin>>ItemId[counter];


	cout<<"Enter the Price of your item number "<<counter+1 <<endl;
	cin>>ItemPrice[counter];

	counter ++;

}

void shop::displayPrice (void) {
	for(int i=0; i<counter ; i++) {
		cout<<"The price of Item with id "<< ItemId[i]<<" is "<<ItemPrice[i]<<endl;

	}
}


int main() {
	shop dukaan;
	dukaan.initCounter();

//	// we can even call the loop for the setPrice
//	dukaan.seetPrice();
//	dukaan.setPrice();
//	dukaan.setPrice();
//	dukaan.setPrice();
//	dukaan.setPrice();
	// loop to set the price
	cout<<"How many values you want to enter in the array"<<endl;
	int NumberItem;
	cin>>NumberItem;
	for(int i=0; i<NumberItem; i++) {
		dukaan.setPrice();
	}
	dukaan.displayPrice();
	return 0;
}

