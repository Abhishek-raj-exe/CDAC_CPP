#include <iostream>

class Employee{
    private:
        // data members
        int id ;
        std::string name ;
        std::string dob;
    public:
        // default constructor
        Employee(): id(0) ,name("NA"), dob("NA") {}
        // parametric constructor
        Employee(int Id, std::string Name, std::string Dob): id(Id), name(Name), dob(Dob) {}
        // constructors
        ~Employee(){}
        
        // setters
        void accept(int Id, std::string Name, std::string Dob){
            id = Id;
            name = Name;
            dob = Dob;
        }

        // getters
        int get_id(){
            return id;
        }
        
        std::string get_name(){
            return name;
        }

        std::string get_dob(){
            return dob;
        }
        
        // member funcions
        void display(){
            std::cout << "Employee Name: " << name << std::endl;
            std::cout << "Employee Id: " << id << std::endl;
            std::cout << "Employee DOB: " << dob << std::endl;
        }

};

using emp = Employee;
    
int main(){
    // objects
    emp e1,e2(303,"Jeet","06/10/2103");
    e1.accept(102,"Lara","04/03/2001");
    e1.display();
    std::cout << std::endl;
    e2.display();
    return 0;
}