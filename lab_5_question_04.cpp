#include <iostream>
using namespace std;

void merge_fn(int [] , int [] , int , int , int, int []);
void max_fn(int [], int , int );
void min_fn(int [], int , int );
int main() {


    int arr1[100],arr2[100],i,N1,N2,arr[200];
   
    cout << "Enter the size of array 1 : ";
    cin >> N1;

    cout << "Enter the elements of the array 1 : \n";
    for (i=0;i<N1;i++)
       {
          cin >> arr1[i];
       }

    cout << "Enter the size of array 2 : ";
    cin >> N2;

    cout << "Enter the elements of the array 2 : \n";
    for (i=0;i<N2;i++)
       {
          cin >> arr2[i];
       }

    merge_fn(arr1,arr2,i,N1,N2,arr);
    int N=(N1+N2);
    max_fn(arr, i, N);
    min_fn(arr, i, N);
return 0;
}

void merge_fn(int arr1[], int arr2[], int i, int N1, int N2,int arr[])
    {
      
      for (i=0;i<N1;i++)
         {
            arr[i]=arr1[i];
         }
      for (i=N1;i<(N1+N2);i++)
         {
            arr[i]=arr2[i-N1];
         }
      
      cout << "New array after the merging of array 1 and array 2 is : \n" ;
      for (i=0;i<(N1+N2);i++)
         {
            cout << arr[i] << endl;
         }
      
       return ;
    }

void max_fn(int arr[], int i, int N)
    {
       int max=0;
       for (i=0;i<N;i++)
          {
             if( arr[i] > max )
                 max=arr[i];
          }
        cout << "Largest no. in the new array = " << max << endl;
    return;
    }  

void min_fn(int arr[], int i, int N)
    {
       int min=arr[0];
       for (i=0;i<N;i++)
          {
             if( arr[i] < min )
                 min=arr[i];
          }
        cout << "Smallest no. in the new array = " << min << endl;
    return;
    }  






