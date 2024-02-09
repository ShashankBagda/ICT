#include<iostream>
using namespace std;

class Account	// Q1 - Demonstrating the Public, Private and Protected Parameter
{
	public: //Q3 - Demonstrating Public Inheritance
		int Balance;
		int Deposit;
		Account();
		
	private:
		int any; //Q4 - Demonstrating Private Inheritance	// Which is not possible because of private
		
	protected: //Q5 - Demonstrating Protected Inheritance
		int Withdraw;
};

//Q2 - Demonstrating multiple inheritance i.e. Account -> Details

class Details:public Account
{
	public:
		Details();
		void printAccountData();
};


Account::Account()
{
	Balance = 5000;
	Withdraw= 200;
	Deposit = 300;
}

Details::Details()
{
	//Account();
}

void Details::printAccountData()
{
	cout<<endl<<"Balance Amount = "<<this->Balance;
	cout<<endl<<"Withdraw Amount = "<<this->Withdraw;
	cout<<endl<<"Deposit Amount = "<<this->Deposit;	
}

void Interest()
{
	int SInt ;	//simple interest
	int Pri ;	//principle amount
	int Time;	//time period
	
	cout<<endl<<"Enter Simple Interest : ";
	cin>>SInt;
	
	cout<<endl<<"Enter Principle Amount : ";
	cin>>Pri;
	
	cout<<endl<<"Enter Time Period : ";
	cin>>Time;
	
	int Int;	//Interest
	Int = (SInt * 100) / (Pri * Time);
	cout<<endl<<"The Interest is : "<<Int;
}

int main()
{
	Details c;
	c.printAccountData();
	Interest();
	return 0;
}
