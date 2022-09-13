#include<iostream>
using namespace std;

int main()
{
    int i, j, num, temp, arr[30];

    cout << "Enter the number of Elements : \n";
    cin >> num;
    cout << "Enter the Elements : \n";

    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    // cout << "The unsorted Elements are : \n";
    
    // for (i = 0; i < num; i++)
    // {
    //     cout << arr[i] << "\t";
    // }

    for ( i = 1; i <= num -1; i++)
    {
        temp = arr[i];
        j = i - 1;

        while (temp<arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;

        }
        arr[j + 1] = temp;
    }

    cout << "Sorted Elements : ";
    for ( i = 0; i < num; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}

