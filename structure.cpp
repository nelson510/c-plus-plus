//
//  main.cpp
//  Structure
//
//  Created by Nelson  on 9/12/2019.
//  Copyright © 2019 Nelson . All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//structure as normal
struct film{
    string name;
    int year;
}yours; //This is to create variable for the film structure

//structure as array type
struct subject{
    string subject;
    double gpa;
}student[2];

void printmovie(film x){
    cout<<x.name<<endl;
    cout<<x.year<<endl;
}

int main(int argc, const char * argv[]) {
    string yearoffilm;
    // insert code here...
    film mine; //This is another method to create
    mine.name = "Gattace";
    mine.year = 1993;
    
    cout<<"Please enter your favour film name : ";
    getline(cin,yours.name);
    cout<<"Please enter the film year : ";
    getline(cin,yearoffilm);
    stringstream(yearoffilm) >> yours.year;
    
    //In here the structure can work as a data type and pass the value into a method
    printmovie(mine);
    printmovie(yours);
    
    cout<<"------------------------"<<endl;
    
    student[0].subject = "English";
    student[0].gpa = 3.5;
    student[1].subject = "Chinese";
    student[1].gpa = 3;
    
    cout<<student[0].subject<<endl;
    cout<<student[0].gpa<<endl;
    cout<<student[1].subject<<endl;
    cout<<student[1].gpa<<endl;

    
}
