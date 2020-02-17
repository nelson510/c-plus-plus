//
//  main.cpp
//  Insertion sort algorithm
//
//  Created by Nelson  on 13/2/2020.
//  Copyright © 2020 Nelson . All rights reserved.
//

#include <iostream>


void insertion_sort(int *unorder,int size){
    for (int i=1;i<size;i++){
        int temp=unorder[i];
        int j=i-1;
        while(j>=0&&temp<unorder[j]){
            unorder[j+1]=unorder[j];
            j--;
        }
        unorder[j+1]=temp;
    }
    
}
void print(int *unorder){
    for (int i=0;i<5;i++){
        std::cout<<unorder[i]<<" ";
    }
}

int main(int argc, const char * argv[]) {
    int unorder [] ={4,2,6,7,3};
    insertion_sort(unorder,5);
    print(unorder);
}


/*
 Running time
 1. Depend on input (rather it is sored or not)
 2. Depend on input size (how many input number)
    - parameterize the input size
 -> We want upper bound of the time (guarantee)
 
 Kind of analysis
 1.Worst Case (usually)
 T(n) -> maximum time on any input size n
 2.Average Case
 T(n) -> expected time over all input of size n
 expected time = time of every input * the probability that it will be that input (weighted average)
 The Probability =  assumption of stat distribution ~ all are equally likely
 3.Best Case analysis (Not good)
 We can cheat on some input but not all
 
 Insertion sort worst case time
 1.Depend on computer you working on
 -compare with relative speed (on same machine)
 -absolute spped (algorithm is better no matter what machine is run on)
 
 BIG IDEA! (asymptotic analysis)
 1.Ignore machine dependent constants
 2.Look at the growth of T(n)
 
 Asymptotic notation
 theta notation -> Drop low-order term and ignore leading constants
 2n^3+90n^2-5n+6046 = O(n^3)
 if n -> infinity => O(n^2) prevail over O(n^3)
 
 Insertion sort analysis
 1.Worst case - input reverse sorted
 -loop 1 -> n O(j) =O(n^2)
 */
