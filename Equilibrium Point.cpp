
#include <iostream>
using namespace std;


class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        int i = 0;
        int b = -1;
        int leftsum =0;
        int rightsum=0;
        for(int i=0;i<n;i++){
            rightsum += a[i];
        }
        for(int i=0;i<n;i++){
            rightsum -= a[i];
          if(leftsum == rightsum){
            b = i+1;
            break;
          }
          leftsum += a[i];
            
        }
          return b;
    }
  
};



int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
