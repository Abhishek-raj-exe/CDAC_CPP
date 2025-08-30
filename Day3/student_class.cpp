#include <iostream>

class Student{
    private:
        int roll_no;
        int marks1;
        int marks2;
        int marks3;
    public:
        Student(): roll_no(0) , marks1(0), marks2(0), marks3(0) {}
        ~Student(){}
        void acceptinfo(int roll_no,int marks1,int marks2, int marks3){
           this->roll_no = roll_no;
           this->marks1 = marks1;
           this->marks2 = marks2;
           this->marks3 = marks3;
        }

        void display(){
            int total = marks1+marks2+marks3;
            std::cout<< "Roll no: " << roll_no << std::endl;
            std::cout<< "marks 1: " << marks1<< std::endl;
            std::cout<< "marks 2: " << marks2<< std::endl;
            std::cout<< "marks 3: " << marks3<< std::endl;

            std::cout<< "Total: " << total << std::endl;
            std::cout<< "Percentage: " << total/3 << std::endl;
            std::cout<< "Grades: ";
            if ((total/3)>=90) {std::cout << "A+"<< std::endl;}
            else if (((total/3)<90) && (70<=(total/3)) ) {std::cout << "B"<< std::endl;}
            else if (35>(total/3)) {std::cout << "F-"<< std::endl;}
            else {std::cout << "C"<< std::endl;}
        }
};

using st = Student;

int main(){
    st s1;
    s1.acceptinfo(102,54,34,49);
    s1.display();
}