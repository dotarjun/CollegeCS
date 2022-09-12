#include <iostream>
using namespace std;

int main()
{
    int i, j, temp;
    int arr[8] = { 12, 3, 1, 5, 18, 10, 7, 35 };
    
    cout << "Unsorted Array : \n";

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << "\t";
    }
    
    cout << endl;

    for (int i = 0; i < 8; i++)
    {
        for (int j = i +1; j < 8; j++)
        {
            if (arr[i]> arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        
    }
    
    cout << "Sorted Array : \n";

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << endl;
    
    return 0;
}
