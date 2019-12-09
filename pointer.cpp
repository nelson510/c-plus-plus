#include <iostream>
#include <string>
using namespace std;

// Pass by value
int sq1(int n){
    cout<<"Address of n1 in sq1"<<&n<<endl;
    n*=n;
    return n;
}

/*
 Note that the asterisk (*) used when declaring a pointer only means that it is a pointer (it is part of its type compound specifier), and should not be confused with the dereference operator seen a bit earlier, but which is also written with an asterisk (*). They are simply two different things represented with the same sign.

 */

//Pass by reference with pointer argument
int sq2(int* n){ //This is declaring it is a pointer rather than a dereference
    cout<<"Address of n2 in sq2 :"<<n<<endl;
    *n *= *n;
    return *n;
}

//Pass by reference with reference argument
int sq3(int &n){
    cout<<"Address of n3 in sq3 :"<<&n<<endl;
    n *= n; //we need not apply * here
    return n;
}


void greeks(){
    int n1 = 8;
    cout<<"Address in n1 : "<<&n1<<endl;
    cout<<sq1(n1)<<endl;
    cout<<"No change in n1 :"<<n1<<endl;
    
    int n2 = 8;
    cout<<endl;
    cout<<"Address in n2 :"<<&n2<<endl;
    cout<<sq2(&n2)<<endl;
    cout<<"Change reflect in n2 :"<<n2<<endl;
    
    int n3 = 8;
    cout<<endl;
    cout<<"Address in n3"<<&n3<<endl;
    cout<<sq3(n3)<<endl;
    cout<<"Change reflect in n3 :"<<n3<<endl;

}

void arrayandpointer(){
    int va[3]={1,2,3};
    cout<<endl;
    cout<<"The above is array and pointer :"<<endl;
    cout<<va<<endl;  //This show that an array is actually a memory
    
    int* prt;
    prt=va;
    cout<<prt[0]<<va[1]<<prt[2]<<endl; //both pointer and array can use []
    cout<<"This shows that the \[\] and \* has the same usage \: dereferencing"<<endl;
}


    

int main(){
    greeks();
    arrayandpointer();
    
}

/*
 Difference in Reference variable and pointer variable
 References are generally implemented using pointers. A reference is same object, just with a different name and reference must refer to an object. Since references can’t be NULL, they are safer to use.

 A pointer can be re-assigned while reference cannot, and must be assigned at initialization only.
 Pointer can be assigned NULL directly, whereas reference cannot.
 Pointers can iterate over an array, we can use ++ to go to the next item that a pointer is pointing to.
 A pointer is a variable that holds a memory address. A reference has the same memory address as the item it references.
 A pointer to a class/struct uses ‘->'(arrow operator) to access it’s members whereas a reference uses a ‘.'(dot operator)
 A pointer needs to be dereferenced with * to access the memory location it points to, whereas a reference can be used directly.

 */
