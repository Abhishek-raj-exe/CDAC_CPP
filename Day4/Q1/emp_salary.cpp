#include <iostream>

class Employee{
    private:
        // class members
        int id = 0;
        std::string name = "NA";
        double basic_salary = 0.0, HRA = 0.0 , Medical = 1000.0, 
        PF = 0.0, PT = 200.0, Net_salary = 0.0, Gross_salary = 0.0;
        
        // Calculate salary
        void calculate_salary(){
            Gross_salary = basic_salary + HRA + Medical;
            Net_salary = Gross_salary - (PT+PF);
        }

    public: 
        // default constructor
        Employee(){}
        
        // parameterised constructor
        Employee(const int id,const std::string name,const double basic_salary)
        {
            this->id = id;
            this->name = name;
            this->basic_salary = basic_salary;
            this->HRA = 0.5*basic_salary;
            this->PF = 0.12*basic_salary;
            calculate_salary();
        }
        
        // setter of employee details
        void set_details(const int id,const std::string name,const double basic_salary)
        {
            this->id = id;
            this->name = name;
            this->basic_salary = basic_salary;
            this->HRA = 0.5*basic_salary;
            this->PF = 0.12*basic_salary;
            calculate_salary();

        }
        // Getter for net_salary & gross salary
        int get_net_salary(){
            return this->Net_salary;
        }
        int get_gross_salary(){
            return this->Gross_salary;
        }

        // Destructor
        ~Employee(){}
};

// alais for emp class
using emp = Employee;

int main(){
    // create object of employee class
    emp e1,e2(100,"Abhi",30000.0);
    std::cout << "Employee1 net salary: " << e1.get_net_salary() << std::endl;
    std::cout << "Employee2 net salary: " << e2.get_net_salary() << std::endl;
    std::cout << "Employee2 gross salary: " << e2.get_gross_salary() << std::endl;
}