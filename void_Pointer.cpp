#include <iostream>
using namespace std;

// some important Rules of Pointer
/*
    Pointer should point same type of data structure;
    Void pointer can point any data type variable;
*/


// !!!!!!!!!!--- BE ALERT OF USING VOID PTR ---!!!!!!!!!!!!//

/*
        Because while type casting pointer to some data types if you made a mistake -> it is Logical Mistake You'll not 
        get any Error......



        void print(void* ptr, char type){
            switch(type){
                case 'i':
                    cout<<*((char*)ptr) <<endl;   // instead of int I've written Char but getting no error printing '♣'
                    break;
                case 'c':
                    cout<<*((char*)ptr) <<endl;
            }
        }
*/

void printNumber(int* numPtr){
    cout<<*numPtr<<endl;
}

void printLetter(char* charPtr){
    cout<<*charPtr<<endl;
}


void print(void* ptr, char type){
    switch(type){
        case 'i':
            cout<<*((int*)ptr) <<endl;
            break;
        case 'c':
            cout<<*((char*)ptr) <<endl;
    }
}

int main(){
    int number = 5;
    char letter = 'a';

    printNumber(&number);
    printLetter(&letter);

    cout<<"------------------------------------"<<endl;

    print(&number,'i');
    print(&letter,'c');


return 0;
}