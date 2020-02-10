/*We created a pointer to
*an employee object.
* Now we only have to define which
*type of employee.
*Then we can use the same code for all
*employees.
*
*The question is .... does it work? NO!!!
*/
#include "Header.h"
#include <string>
using namespace std;

int main()
{
    const string status = "salary"; //options: hourly or salary
    string level;
    level = "hourly";
    Employee *e1; //e1 is now a pointer to Employee object
    
    if(status == level)
    {
        e1 = new Employee(); //we define an hourly employee
    }
    else
    {
        e1 = new Manager();
        cout<<"Manager"<<endl;//we define a salaried employee
    }
    
    e1->setPayRate(12000.00);
    cout<<"This doesn't work. We get the wrong pay.\n";
    cout<<"e1 pay: $"<<e1->calcWeeklyPay();
    cout<<"\nThe pay is calculated as an hourly employee.";
    delete e1; //every 'new' must have a delete
    return 0;
}
/*
 Example example;
 This is a declaration of a variable named example of type Example. This will default-initialize the object which involves calling its default constructor. The object will have automatic storage duration which means that it will be destroyed when it goes out of scope.

 Example* example;
 This is a declaration of a variable named example which is a pointer to an Example. In this case, default-initialization leaves it uninitialized - the pointer is pointing nowhere in particular. There is no Example object here. The pointer object has automatic storage duration.

 Example* example = new Example();
 This is a declaration of a variable named example which is a pointer to an Example. This pointer object, as above, has automatic storage duration. It is then initialized with the result of new Example();. This new expression creates an Example object with dynamic storage duration and then returns a pointer to it. So the example pointer is now pointing to that dynamically allocated object. The Example object is value-initialized which will call a user-provided constructor if there is one or otherwise initialise all members to 0.

 Example* example = new Example;
 This is similar to the previous line. The difference is that the Example object is default-initialized, which will call the default constructor of Example (or leave it uninitialized if it is not of class type).

 A dynamically allocated object must be deleted (probably with delete example;).
 */
