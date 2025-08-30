#include <iostream>

class Date
{
    private:
        unsigned short int dd;
        unsigned short int mm;
        unsigned int yy;
    public:
        Date(): dd(1) , mm(1), yy(1950){}
        Date(const short int dd,const short int mm,const int yy);
        ~Date(){}
        void print_date(){
            printf("%02d/%02d/%4d",dd,mm,yy);
        }
};
    
Date::Date(const short int dd,const short int mm,const int yy){
    this->dd = dd;
    this->mm = mm;
    this->yy = yy;
}

int main(){
    Date ram_dob(10,4,2001);
    std::cout << "The DOB of Ramesh: " ;
    ram_dob.print_date();
}