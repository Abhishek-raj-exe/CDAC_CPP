#include <iostream>

template<class T> 
T max(T &a,T &b){
    if (b>a)
    {
        return b;
    }
    else{
        return a;
    }
}

int main(){
    int a = 7;
    int b = 3;
    std::cout << "The max of " << a <<
    " & " << b << " = " << max(a,b) << std::endl;
    return 0;
}