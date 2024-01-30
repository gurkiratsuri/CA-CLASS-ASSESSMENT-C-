/*
TASK
Move Zeroes to right		
sample input: 12, 0, 13, 0, 15
sample output: 12, 13, 15, 0, 0
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] == 0)
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            for (int j = i+1; j < n-1; j++)
            {
                if (arr[j] == 0)
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
            for (int k = i-1; k < n-1; k++)
            {
                if (arr[k] == 0)
                {
                    temp = arr[k];
                    arr[k] = arr[k+1];
                    arr[k+1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}