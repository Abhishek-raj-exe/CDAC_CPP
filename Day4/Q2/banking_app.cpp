#include <iostream>

class Bank{
    int account_no = 0;
    std::string account_name = "NA";
    double balance = 0.0;

    public:
        Bank(){}
        Bank(int account_no,std::string account_name){
            this->account_name = account_name;
            this->account_no = account_no;
        }
        void deposit(double value){
            balance+=value;
        }
        void withdraw(double value){
            if ( (balance>0.0) && ((balance-value)>=0) )
            {
                balance-=value;
            }
            else{
                std::cout << "Insufficient funds" << std::endl;
            }
            
        }

        double get_balance(){
            return balance;
        }

        ~Bank(){}
};

int main(){
    Bank abhi_kotak(103,"Abhi");
    std::cout << "Current Balance: " << abhi_kotak.get_balance() << "$" << std::endl;
    abhi_kotak.deposit(2000);
    std::cout << "Depositing " << "2000$" << std::endl;
    abhi_kotak.withdraw(1972);
    std::cout << "Withdrawing " << "1972$" << std::endl;
    std::cout << "Current Balance: " << abhi_kotak.get_balance() << "$" << std::endl;
    

    return 0;
}