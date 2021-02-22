 
#include<stdio.h>
void generate(int x[],int n){
    int i = 0;
    while(i<n){
        x[i] = i;
        i++;
    }
}
int binsearch(int x, int v[], int n)
{
    int low,high,mid;
    
    low = 0 ; 
    high= n-1;
    while(low <=high && v[mid]!=x){
        mid = (low + high) /2;
        if( x < v[mid])
            high = mid - 1;
        else 
            low = mid+1;
    }
    if(v[mid]==x)return x;
    return -1;
};
int main(){
    
    int arr[10000];
    generate(arr,10000);
    printf("%d",binsearch(1234,arr,10000));
    
    
}
