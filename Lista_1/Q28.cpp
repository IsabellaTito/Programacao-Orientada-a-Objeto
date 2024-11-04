#include <iostream>

void swap( int &r1, int &r2){
    int temp{0};
    temp = r1;
    r1 = r2;
    r2 = temp;
};

int main(){

    int n1{3}, n2{10}, &ref1{n1}, &ref2{n2};

    std::cout << "Antes do swap: referencia 1 - " << ref1 
              << " \\ referencia 2 - " << ref2 << std::endl;
    
    swap(ref1,ref2);

    std::cout << "Depois do swap: referencia 1 - " << ref1 
              << " \\ referencia 2 - " << ref2 << std::endl;

    return 0;
}