#include <iostream>

void DisplayBoard(int arr[3][3])
{
    for(int i =0; i <3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            std:: cout << arr[i][j] << " ";
        }
            std:: cout  << std:: endl;
    }
}

void CreateBoard(int ar[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ar[i][j] = 0;
        }
    }
}

int main()
{
    int ar[3][3];
    CreateBoard(ar);
    DisplayBoard(ar);
}