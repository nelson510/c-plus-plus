//
//  main.cpp
//  Merge sort algorithm
//
//  Created by Nelson  on 17/2/2020.
//  Copyright © 2020 Nelson . All rights reserved.
//

#include <iostream>
using namespace std;

void merge(int *ar,int l,int mid,int r){
    int fir=mid-l+1;
    int sec=r-mid;
    
    int first[fir];
    int second[sec];
    
    for(int i=0;i<fir;i++){
        first[i]=ar[l+i]; //cannot use ar[i] as i must form 0 but we need to get maybe 4,5,6 element
    }
    for(int j=0;j<sec;j++){
        second[j]=ar[mid+1+j];
    }
    
    int i=0; //first array
    int j=0; //second array
    int k=l; //this point to the specific location of the array need to sort
    
    //The real sorting happen here
    // when both arr still have member waiting to sort
    while (i<fir && j<sec){
        if(first[i]<second[j]){
            ar[k]= first[i];
            i++;   //first array point to next
        }
        else{
            ar[k]=second[j];
            j++;   //second array point to next
        }
        k++;
    }
    
    /* Copy the remaining elements of left, if there
         are any while all right have gone */
      while (i < fir)
      {
          ar[k] = first[i];
          i++;
          k++;
      }
    
      /* Copy the remaining elements of right, if there
         are any while all left have gone*/
      while (j < sec)
      {
          ar[k] = second[j];
          j++;
          k++;
      }
    
    
    
    
}

void mergesort(int *ar,int l,int r){
    
if(r>l){ // not break into 1
       int mid = (l+r)/2;
       
       mergesort(ar,l,mid);     // this will loop all the left node,until it reach the leaf
       mergesort(ar,mid+1,r); //this will loop all the right node, until it reach the leaf
       merge(ar,l,mid,r);  //after left and right node reach the leaf, sort both and return to the previous recursion
    }
}

int main(int argc, const char * argv[]) {
    int ar []={2,5,4,0,3,1};
    /*
     If you have an array then sizeof(array) returns the number of bytes the array occupies. Since each element can take more than 1 byte of space, you have to divide the result with the size of one element (sizeof(array[0])). This gives you number of elements in the array.
     */
    int size = sizeof(ar)/sizeof(ar[0]);
    mergesort(ar,0,size-1); // array start from 0 so size need to -1
    for(int i=0;i<size;i++){
        cout<<ar[i]<<" ";
    }
    
}




/*
 1.If n = 1, then it is done (only one element)
 O(1) It take a constant time
 
 2.Recursive sorting
 from 1-n/2 -> n/2+1 -> n
 2T(n/2)
 
 3.Take the two list and merge them
 O(n)
 
 So,finally
 T(n) =
 if N=1  => O(1)
 if N>1  => O(1)+O(n)+2T(n/2) => O(n)+2T(n/2) because it O(n) is > than O(1)
 
 because merge sort is divide the num into two and do it recursive,therefore log(n) is the number of level in the tree and n is the time it take for each level. => O(n log n)
 
 eg:https://i.stack.imgur.com/33vP2.jpg
 
 
 Divide and coquer
 1.Dicide
    The problem (instance) into one or more subproblems
 2.Conquer
    Conquer each subproblem recursively
 3.Combine
    Solutions
 
 Merge sort
 1.Divide trivial (cut array into two part)
 2.Conquer recursively sort each subarray
 3.Combine each solution (O(n))
 */

