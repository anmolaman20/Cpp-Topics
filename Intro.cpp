#include<iostream>

/*
    Pointer is a special variable used to store the address of other variable;
    Pointer variable is declared using * symbol
    Pointer variable is dereferenced using * operator to get the content of the variable where our variable is pointing.


    these are just the example but this is not actually use of pointer.
*/

int main(){
    int n = 10;
    std::cout<< &n << std::endl;   

    int *ptr = &n;
    std::cout<< ptr << std::endl;


    std::cout<< n <<std::endl;
    std::cout<< *ptr << std::endl;

    *ptr = 50;
    // ptr = 50; -> lvalue error

    std::cout<<"----------------------------------------"<<std::endl;

    std::cout<< n <<std::endl;
    std::cout<< *ptr << std::endl;

return 0;
}