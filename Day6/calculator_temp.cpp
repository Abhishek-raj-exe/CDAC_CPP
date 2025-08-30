#include <iostream>

template<class T>
class Calculator{
    private:
        T a;
        T b;
    public:
        Calculator(const T &a,const T &b){
            this->a = a;
            this->b = b;
        }
        T add(){ return a+b; }
        T sub(){ return a-b; }
        T mul(){ return a*b; }
        T div(){ return a/b; }

        ~Calculator(){}

};

int main(){
    int a1 = 3;
    int b1 = 5;
    int a2 = 9.3;
    int b2 = 12.1;
    
    Calculator<int> c1(a1,b1);
    Calculator<double> c2(a2,b2);

    std::cout << a1 << " + " << b1 << " = " << c1.add() << std::endl;
    std::cout << a2 << " - " << b2 << " = " << c2.sub() << std::endl;
    std::cout << a1 << " * " << b1 << " = " << c1.mul() << std::endl;
    std::cout << a2 << " / " << b2 << " = " << c2.div() << std::endl;
    return 0;
}