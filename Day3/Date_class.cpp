#include <iostream>

class Date{
    // members
    unsigned short int dd;
    unsigned short int mm;
    int yy;

    public:
        Date(): dd(1), mm(1), yy(1960) {} // default constructor
        Date(const short int dd,const short int mm,const int yy  /*arguments*/){ 
            // parameterised constructor
            this->dd = dd;
            this->mm = mm;
            this->yy = yy;
        }
        ~Date(){} // destructor

        // getter methods
        int get_day(){
            return dd;
        }
        int get_month(){
            return mm;
        }
        int get_year(){
            return yy;
        }
        // setter method
        void set(const short int dd, const short int mm, int yy){
            this->dd = dd;
            this->mm = mm;
            this->yy = yy;
        }
        // display method
        void display(){
            std::cout << dd << "/" << mm <<  "/" << yy << std::endl;
        }
};

int main(){

    Date mahesh_Dob; // new object
    mahesh_Dob.set(mahesh_Dob.get_day(),4,2002); // invoke setter
    mahesh_Dob.display(); // invoke display
    return 0;
}