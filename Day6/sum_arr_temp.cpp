#include <iostream>

template<class T>
T sum_array(T* array,int len){
    T total = array[0];
    if (len==1) {return total;}
    else
    {
        for (int i = 1; i < len; i++)
        {
            // std::cout << array[i] << std::endl;
            total += array[i];
        }
        return total;
    }
    
}

int main(){
    // int arr[5] = {3,5,6,8,9};
    char arr[3] = {'a','c','e'};
    char* ptr = arr;
    // sum_array(ptr,5);
    std::cout << "Total sum of all elements: " << sum_array(ptr,5) << std::endl; 
    return 0;
}