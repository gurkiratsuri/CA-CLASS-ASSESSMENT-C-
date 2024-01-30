/*
TASK
FIND THE MISSING NUMBERS
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
int size;
    cout << "Size of the array: ";
    cin >> size;

    int array[size];

    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    sort(array,array+size);
    for(int i = 0; i < size; i++)
    {
        if(array[i+1]-array[i]>1)
        {
            cout<<"Missing Number: "<<array[i]+1;
            break;
        }
    }
    return 0;
}