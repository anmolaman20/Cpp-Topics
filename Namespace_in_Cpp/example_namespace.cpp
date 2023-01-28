#include<iostream>
// using namespace std;  -> Not a good idea to use as there are many members of std namespace 

using std::cout;
using std::endl;
using std::string;


namespace hi1{
    int hi = 2;
}

namespace hi2{
    int hi = 3;
    string name = "anmol";
}

using namespace hi1;
int main(){
    /*   !!!!!!!!!!!----Giving Error Due to Conflict in Name --------> Here Comes Numspaces!!!!!!!!!!
        // int hi = 2;
        // int hi = 3;
        // hi = 5;
    */
//    cout<<hi<<endl; //Error  -> can be solve using namespace 
   cout<<hi<<endl;     //as we haven't mention hi is from which namespace so it will use as mentioned in using namespace;
   cout<<hi1::hi<<endl;
   cout<<hi2::hi<<endl;
   cout<<hi2::name<<endl;    
return 0;
}