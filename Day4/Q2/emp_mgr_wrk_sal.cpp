#include <iostream>

class Employee{
    private: 
        // private members
        int id ;
        int deptId ;
        std::string name ;
    protected: 
        // protected members for child class
        double basic_salary , net_salary ;
    public:
        // default constructor
        Employee(): id(0),name("NA"),deptId(0),basic_salary(0.0),net_salary(0.0) {}
        
        // parameterised constructor
        Employee(const int id, const std::string name, const int deptId, const double basic_salary ){
            this->id = id;
            this->name = name;
            this->deptId = deptId;
            this->basic_salary = basic_salary;
            this->net_salary = 0;
        }
        
        virtual double compute_net_sal(){
            return net_salary;
        }
    };
    
using emp = Employee;

/* Child */
class Mgr: public emp{
    private: 
        double perfbonus;
    public:
        Mgr(){}
        Mgr(const int id, const std::string name, const int deptId, const double basic_salary, const double perfbonus): emp(id,name,deptId,basic_salary) {
            this->perfbonus = perfbonus;
        }
        double compute_net_sal() override {
            this->net_salary = this->basic_salary + perfbonus;
            return net_salary;
        }
        ~Mgr(){}
};

/* Worker class */

class Worker: public emp{
    private:
        double hoursWorked,hourlyRate;
    public:
        Worker(){}
        Worker(const int id, const std::string name, const int deptId, const double basic_salary, const double hoursWorked, double hourlyRate): emp(id,name,deptId,basic_salary)
        {
            this->hourlyRate = hourlyRate;
            this->hoursWorked = hoursWorked;
        }
        double compute_net_sal() override {
            net_salary = basic_salary + (hourlyRate*hoursWorked);
            return net_salary;
        }
        ~Worker(){}

};

int main(){
    // Mgr m1(100,"Akash",300,40000.0,3000);
    // std::cout<<"Net salary: "<< m1.compute_net_sal() <<std::endl;
    // Worker w1(100,"Akash",300,15000.0,8.0,50);
    // std::cout<<"Net salary: "<< w1.compute_net_sal() <<std::endl;
    Mgr* mgr_array = NULL;
    Worker* wkr_array = NULL;
    int mg_count = 0,wk_count = 0;
    std::cout << "options\tActions" << std::endl;
    std::cout << "1.\tHire Managers" << std::endl;
    std::cout << "2.\tHire Workers" << std::endl;

    short int choice = 0;
    std::cout << "Enter your choice: " ; 
    std::cin >> choice;
    
    switch (choice)
    {
        case 1:
            int id;
            std::string name;
            int deptid;
            double salary,bonus,hourworked,hourrate;

            std::cout << "Enter no of managers to hire: ";
            std::cin >> choice;
            for (int i = 0; i < choice; i++)
            {
                std::cout << "Enter manager id: ";
                std::cin >> id;
                std::cout << "Enter manager name: ";
                std::cin >> name;
                std::cout << "Enter manager deptID: ";
                std::cin >> deptid;
                std::cout << "Enter manager basic salary: ";
                std::cin >> salary;
                std::cout << "Enter manager performance bonus: ";
                std::cin >> bonus;
                mg_count++;
                mgr_array[i] = Mgr(id,name,deptid,salary,bonus) ;

            }
            break;
        
        default:
            break;
    }

    
}