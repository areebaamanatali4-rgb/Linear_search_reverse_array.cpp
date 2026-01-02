#include <iostream>
using namespace std;
// Function to perform linear search
// and return the index
int linearsearchindex(int arr[] , int size , int key){
     for (int y = 0; y < size; y++){
         if (arr[y] == key){
            return y; // return the index if key is found
         }
     }
     return -1;  // return -1 if key not found
}  
//Function to reverse the array
void reverse(int arr[], int size){
      for (int g = 0; g < size/2; g ++){
      swap(arr[g] , arr[size - 1 - g]); // mirror swap 
      }
}
      
int main() {
   //input array size 
   int  size;
   cout <<"Enter size 🤔🧑‍💻 = ";
   cin >>size;
   int arr[size];
   //array input element 
   for (int x = 0; x < size; x++){
       cout <<"Enter element = ";
       cin >> arr[x];
   }
   //Display original array      
   cout <<"original array\n ";
   cout <<"{";
   for (int t =0; t < size; t++){
      cout <<arr[t];
      if(t < size -1){
         cout <<",";
      }
   } 
   cout <<"}";     
   //Linear search 
   int key; 
   cout <<"\nEnter element for search = ";
   cin >> key;
   int idx = linearsearchindex(arr , size , key);
   //logic 
   if(idx != -1)  cout <<" Found at  index "<<idx;
   else    cout <<"Not found";
   //Reverse array 
   reverse(arr , size);
   //Display reversed array 
   cout <<"\nReversed  array\n ";
   cout <<"{";
   for (int k =0; k < size; k++){
      cout <<arr[k];
      if(k < size -1){
         cout <<",";
      }
   } 
   cout <<"}"; 
   return 0;
}        
