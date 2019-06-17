#include<iostream>
using namespace std;
void swap(int *a,int *b){
  int t=*a;
   *a=*b;
   *b=t;
 }

int partition(int arr[],int l,int h){
    int i=l+1;
    int pivot=arr[l];
    for(int j=l+1;j<=8;j++){
        if(arr[j]<=pivot){
         
           swap(&arr[i],&arr[j]);
             i++;
           }
      }
  swap(&arr[i-1],&arr[l]);
 return (i-1);
}

void quicksort(int arr[],int l,int h){
   if(l<h){
 int    p=partition(arr,l,h);
    quicksort(arr,l,p-1);
    quicksort(arr,p+1,h);
        }
 }


void display(int arr[]){
   int count=0;
   for(int i=0;i<9;i++){ 
     cout<<arr[i]<<",";
      }
}

int main(){
  int arr[]={1,4,6,3,8,2,5,9,7};
 
  quicksort(arr,0,8);
  display(arr);
return 0;
 }
