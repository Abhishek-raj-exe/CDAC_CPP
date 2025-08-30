#include <iostream>

template<class T>
class Box{
    private:
        T value;
    public:
        void set_Value(T value){
            this->value = value;
        }
        T get_Value(){
            return value;
        }
        ~Box(){}

};

int main(){
    Box<int> b1;
    b1.set_Value(100);
    std::cout << "The box value: " << b1.get_Value() << std::endl;

    Box<float> b2;
    b2.set_Value(10.0);
    std::cout << "The box value: " << b2.get_Value() << std::endl;
    
    Box<char> b3;
    b3.set_Value('v');
    std::cout << "The box value: " << b3.get_Value() << std::endl;
}