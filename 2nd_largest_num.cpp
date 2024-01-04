#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of values to be store : ";
    int num;
    cin >> num;
    int arr[num];
    cout << "Enter your numbers : " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter your " << i + 1 << " number : ";
        cin >> arr[i];
    }

    cout << "The second largest number is : ";
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
    cout << arr[num - 2];


}