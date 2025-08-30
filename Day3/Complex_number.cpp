#include <iostream>

class Complex_Numbers{
    private:
        int real;
        int imaginary;
        char Operator;
    public:
        Complex_Numbers(): real(0) , imaginary(0){}
        Complex_Numbers(const int real,const char Operator, const int imaginary){ 
            if ((Operator == '+') || (Operator == '-'))
            {
                this->real = real;
                this->Operator = Operator;
                this->imaginary = imaginary;
            }
            else{
                std::cout << "Only '+','-' operators are valid.."<<std::endl;
                this->real = 0;
                this->Operator = '+';
                this->imaginary = 0;
            }
            
        }
        ~Complex_Numbers(){}
        void display(){
            std::cout << this->real << this->Operator
            << this->imaginary << "i" << std::endl;
        }
};

int main(){
    Complex_Numbers c1(2,'-',3),c2(6,'*',3);
    c1.display();
    c2.display();
    return 0;
}