#include <iostream>

template<class T> void Swap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    // int 
    int a1 = 3;
    int b1 = 4;
    std::cout << a1 << " swapped with " << b1 << " = " ;
    Swap(a1,b1);
    std::cout << a1 << " " << b1 << std::endl;
    
    // double 
    double a2= 3.0;
    double b2= 4.0;
    std::cout << a2<< " swapped with " << b2<< " = " ;
    Swap(a2,b2);
    std::cout << a2<< " " << b2<< std::endl;
    
    // string
    std::string a3= "text1";
    std::string b3= "text2";
    std::cout << a3<< " swapped with " << b3<< " = " ;
    Swap(a3,b3);
    std::cout << a3<< " " << b3<< std::endl;
    return 0;
}