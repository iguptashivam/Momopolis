#include<iostream>
using namespace std;
int peakElement(int arr[], int n)
{
        int s=0;
        int e=n-1;
        while (s<e)
        {
            int mid = s+(e-s)/2;
            if(arr[mid]<arr[mid+1])
            {
                s=mid+1;
            }
            else {
                e=mid;
            }
        }
        return s;
        
}
int main()
{
    int arr[10]={1,4,5,6,8,10,7,4,3,2};
    cout<<"Index of peak element is : "<<peakElement(arr,10)<<endl;
    int x;
    

}
