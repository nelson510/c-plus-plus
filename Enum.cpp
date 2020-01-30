//
//  main.cpp
//  Enum
//
//  Created by Nelson  on 31/1/2020.
//  Copyright © 2020 Nelson . All rights reserved.
//

#include <iostream>
using namespace std;
enum Action {Left,Right,Up,Down};

void play(Action ac){
    switch (ac) {
        case Action::Left:
            cout<<"Left"<<endl;
            break;
        case Action::Right:
            cout<<"Right"<<endl;
            break;
        case Action::Up:
            cout<<"Up"<<endl;
            break;
        case Action::Down:
            cout<<"Down"<<endl;
            break;
        default:
            cout<<"No matching"<<endl;
            break;
    }
}
int main() {
    play(Action::Left);
    play(Action::Right);
    //play(Action::None);
    //No Action::None exist
    /*
     :: is the scope resolution operator - used to qualify names.

     You use this whenever you need to be explicit with regards to what you're referring to. Some samples:

     namespace foo {
       class bar;
     }
     class bar;
     using namespace foo;
     
     Now you have to use the scope resolution operator to refer to a specific bar.

     ::foo::bar is a fully qualified name.

     ::bar is another fully qualified name. (:: first means "global namespace")
     */
}
