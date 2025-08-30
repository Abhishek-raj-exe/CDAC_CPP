#include<iostream>

typedef class Person{
    private:
        std::string name,city;
        int age;
    public:
        Person():name("NA"), age(0), city("NA") {}
        ~Person(){}
        void setter(std::string name, int age, std::string city){
            this->name = name;
            this->age = age;
            this->city = city;
        }
        std::string get_name() { return name;}
        int get_age() { return age; }
        std::string get_city() { return city; }
}p;

int main(){
    p p1;    
    p1.setter("Abhi",22,"Pune");
    std::cout << "Name: " << p1.get_name() << std::endl;
    std::cout << "Age: " << p1.get_age() << std::endl;
    std::cout << "City: " << p1.get_city() << std::endl;
    return 0;
}