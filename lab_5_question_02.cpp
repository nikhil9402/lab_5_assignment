#include <iostream>
using namespace std;

int ascending_fn(int [], int , int );
void largest_fn(int [],int ,int );
void smallest_fn(int [],int ,int );
void mean_fn(int [],int ,int );
void median_fn(int [],int ,int );
int freq(int [], int, int);
void mode_fn(int [], int);


int main() {

int x[100],i,N;

  cout << "Enter the size of the array : \n";
  cin >> N;
  cout << "Enter the elements of the array : \n";

  for (i=0;i<N;i++){
     cin >> x[i];
     }

  
  ascending_fn(x,i,N);
  largest_fn(x,i,N);
  smallest_fn(x,i,N);
  mean_fn(x,i,N);
  median_fn(x,i,N);
  mode_fn(x,N);

return 0;
}


int ascending_fn(int x[], int i, int N)
  { 
   int j;
   for (j=0;j<N;j++)
   {
     for (i=0;i<N;i++)
        {
           if (x[j] < x[i] )
              
             {
               int a=x[j];
               int b=x[i];
               x[j]=b;
               x[i]=a;
              
             }
        }
   }
   cout << "Ascending order :\n" ;
  for (i=0;i<N;i++) {
  cout << x[i] << endl;
  }
  return 0;
 }

void largest_fn(int x[],int i,int N)
  {
   cout << "Largest no. in the array is : " << x[N-1] << endl;
   return ;

 }

void smallest_fn(int x[],int i,int N)
  {
   cout << "Smallest no. in the array is : " << x[0] << endl;
   return ;
  }
  
void mean_fn(int x[],int i,int N)
  {
    float sum=0;
     for (i=0;i<N;i++)
       {
          sum+=x[i];
       }
    float mean=sum/N;
    cout << "Mean of the elements in the array is : " << mean << endl;
    return ;
  }

void median_fn(int x[],int i,int N)
  {
    float median;
    if (N%2==0)
         float median = ((x[(N/2)-1] + x[N/2])/2);
    else 
         float median = (x[(N-1)/2]);
    cout << "Median of the elements in the array is : " << median << endl;
    return ;
  }

int freq(int x[], int len, int x1) {
	int count = 0;
	for (int i=0; i<len; ++i) {
		if (x1 == x[i]) {
			++count;
		}
	}
	return count;
}

void mode_fn(int x[], int len) {
	int maxfreq=0;
	int mode=x[0];

	for (int i=0; i<len; ++i) {
		if (freq(x,len,x[i]) > maxfreq) {
			maxfreq = freq(x,len,x[i]);
			mode=x[i];
		}
	}

	cout << "Mode of the elements in the array is : " << mode << endl;
}
