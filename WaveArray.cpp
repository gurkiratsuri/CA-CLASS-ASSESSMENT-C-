/*
TASK
Wave Array	
sample input: 2, 4, 7, 8, 9, 10
sample output: 4, 2, 8, 7, 10, 9
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 4, 7, 8, 9, 10};
    int temp;
    for (int i = 0; i < 6; i=i+2)
    {
        if (arr[i] < arr [i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
}