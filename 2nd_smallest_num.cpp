#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number of values to be stored : ";
    int num;
    cin >> num;
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter your " << i + 1 << " number : ";
        cin >> arr[i];
    }

    cout << "The second smallest number is : ";
    int temp;
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << arr[1];
}