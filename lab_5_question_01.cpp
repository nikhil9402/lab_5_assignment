#include <iostream>
using namespace std;

void sum_fn(int [],int,int);
int main() {
 
int arr[100],i,N;

cout << "Enter the size of the array : \n";
cin >> N;
cout << "Enter the elements of the array : \n";

for (i=0;i<N;i++){
   cin >> arr[i];
   }
sum_fn(arr,i,N);

return 0;
}

void sum_fn(int arr[],int i,int N) {
     int sum;
     for (i=0;i<N;i++)
       {
          sum=sum+arr[i];
       }
     
     cout << "Sum of the elements in the array = " << sum << endl;
return;
}
