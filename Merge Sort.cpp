#include <bits/stdc++.h>
using namespace std;
template <class T>

void merge( T arr[],int low,int mid,int high){
	int leftsize=(mid-low)+1;
	int rightsize=high-mid;
	T left[leftsize];T right[rightsize];
	//copying left and right
	for(int i=0;i<leftsize;i++){
		left[i]=arr[low+i];
	}
	for(int j=0;j<rightsize;j++){
		right[j]=arr[j+mid+1];
	}
	int i=0,j=0,k=low;
	while((i<leftsize) && (j<rightsize)){
		if(left[i]<=right[j]){
			arr[k]=left[i];
			i++;
			k++;
		}
		else{
			arr[k]=right[j];
			j++;k++;
		}

	}
	while(i<leftsize){
		arr[k]=left[i];
	
		i++;k++;
	}
	while(j<rightsize){
		arr[k]=right[j];
		j++;k++;
	}
}
template <class T>
void mergesort(T arr[],T l,T r){
	if(l>=r) return;
	T m= l+(r-l)/2;
	mergesort(arr,l,m);
	mergesort(arr,m+1,r);
	merge(arr,l,m,r);
}
// void merge(int array[], int const left, int const mid, int const right)
// {
//     auto const subArrayOne = mid - left + 1;
//     auto const subArrayTwo = right - mid;
 
//     // Create temp arrays
//     auto *leftArray = new int[subArrayOne],
//          *rightArray = new int[subArrayTwo];
 
//     // Copy data to temp arrays leftArray[] and rightArray[]
//     for (auto i = 0; i < subArrayOne; i++)
//         leftArray[i] = array[left + i];
//     for (auto j = 0; j < subArrayTwo; j++)
//         rightArray[j] = array[mid + 1 + j];
 
//     auto indexOfSubArrayOne = 0, // Initial index of first sub-array
//         indexOfSubArrayTwo = 0; // Initial index of second sub-array
//     int indexOfMergedArray = left; // Initial index of merged array
 
//     // Merge the temp arrays back into array[left..right]
//     while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
//         if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
//             array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
//             indexOfSubArrayOne++;
//         }
//         else {
//             array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
//             indexOfSubArrayTwo++;
//         }
//         indexOfMergedArray++;
//     }
//     // Copy the remaining elements of
//     // left[], if there are any
//     while (indexOfSubArrayOne < subArrayOne) {
//         array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
//         indexOfSubArrayOne++;
//         indexOfMergedArray++;
//     }
//     // Copy the remaining elements of
//     // right[], if there are any
//     while (indexOfSubArrayTwo < subArrayTwo) {
//         array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
//         indexOfSubArrayTwo++;
//         indexOfMergedArray++;
//     }
// }
 
// // begin is for left index and end is
// // right index of the sub-array
// // of arr to be sorted */
// void mergeSort(int array[], int const begin, int const end)
// {
//     if (begin >= end)
//         return; // Returns recursively
 
//     auto mid = begin + (end - begin) / 2;
//     mergeSort(array, begin, mid);
//     mergeSort(array, mid + 1, end);
//     merge(array, begin, mid, end);
// }
int main(){
  int arr[]={12,-1,10,0,17,-9,14,8,-10,201};
  // merge sort is divide and conquer alogorithm works in
  // nlogn complexity and BigO(n) space it works
  // merge(arr,0,4,8);
  // //n=9 l=0,r=n-1,m=l+(r-l)/2  0+(9-0)/2=0+4
  // for(int i=0;i<9;i++)
  // {
  // 	cout <<arr[i]<<endl;
  // }
  // cout <<"hello"<<endl;
  int n=sizeof(arr)/sizeof(arr[0]);
  mergesort(arr,0,n-1);
  for(int i=0;i<n;i++)
  {
  	cout <<arr[i]<<endl;
  }
   // cout <<"hello"<<endl;
































































}