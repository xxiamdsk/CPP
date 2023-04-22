#include<iostream>
using namespace std;
int sort(int arr[], int num){
    int temp;
    for (int i = 0; i < num; i++)
    {
        for (int j = i+1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int num;
    cout<<"Enter the number of values to be store : ";
    cin>>num;
    int arr[num];   
    cout<<"Enter your numbers : "<<endl; 
    for (int i = 0; i < num; i++)
    {
        cout<<"Enter your "<<i+1<<" number : ";
        cin>>arr[i];
    }

    cout<<"The array after sorting is : ";

    sort(arr,num);
}