#include <bits/stdc++.h> 
using namespace std;


vector<int>ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
  
   while(arr1.size()>m){
     arr1.pop_back();

   }
   for (int i = 0; i < n; i++) {
     arr1.push_back(arr2 [i]);
   }
   sort(arr1.begin(),arr1.end());
   return arr1;

}

