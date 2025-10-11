#include<iostream>
using namespace std;

class secureBankaccount{
	int accountnumber;
	double balance;
	const string accountType;
	int *logHistory;
	
	public:
		secureBankaccount(int accountnumber,double balance,const string type,int log):accountType(type){
			this->accountnumber=accountnumber;
			this->balance=balance;
			logHistory=new int(log);
				if(balance<500.0){
				cout<<"Error"<<endl;
			}
		}
	secureBankaccount(const secureBankaccount&other):accountType(other.accountType){
		this->accountnumber=other.accountnumber;
			this->balance=other.balance;
			logHistory=new int(*other.logHistory);
			
	}
	~secureBankaccount(){
		delete logHistory;
		cout<<"Account with Account number "<<accountnumber<<" Memory is released "<<endl;
	}
	void updateBalance(double bal){
		balance=bal;
	}
	void display(){
		cout<<"Account Number is "<<accountnumber<<endl;
		cout<<"Balance is "<<balance<<endl;
		cout<<"Log History is "<<*logHistory<<endl;
		cout<<"Account Type is "<<accountType<<endl;
	}
};
int main(){
	secureBankaccount Account(59131,20000.00,"Current",5);
	Account.display();cout<<endl<<endl<<endl;
	secureBankaccount Account1(Account);
	Account.updateBalance(30000.00);
	Account.display();
	cout<<endl<<endl<<endl;
	Account1.display();

}
