#include <iostream>
using namespace std;

void kthLarge_fn(int [],int ,int ,int );
void kthSmall_fn(int [],int ,int ,int );

int main() {
     int arr[100],i,N,k;
     cout << "Enter the size of the array : " << endl;
     cin >> N;
     cout << "Enter the elements of the array : " << endl;
     
     for (i=0;i<N;i++)
       {
        cin >> arr[i] ;
       }

     cout << "Enter the value of k \n";
     cin >> k;
     kthLarge_fn(arr,i,N,k);
     kthSmall_fn(arr,i,N,k);


return 0;
}

void kthLarge_fn(int arr[],int i,int N,int k)
    {
       int j;
       for (i=0;i<N;i++)
          {
            for (j=i+1;j<N;j++)
               {
                   if ( arr[j] > arr[i] )
                      {
                       int a=arr[j];
                       int b=arr[i];
                       arr[i]=a;
                       arr[j]=b;
                      }
                }
          }
         
        cout << k << "th largest no. in the array = " << arr[k-1] << endl;
        return ;
    }

void kthSmall_fn(int arr[],int i,int N,int k)
    {
       int j;
       for (i=0;i<N;i++)
          {
            for (j=i+1;j<N;j++)
               {
                   if ( arr[j] < arr[i] )
                      {
                       int a=arr[j];
                       int b=arr[i];
                       arr[i]=a;
                       arr[j]=b;
                      }
                }
          }
         
        cout << k << "th smallest no. in the array = " << arr[k-1] << endl;
     return;
    }

