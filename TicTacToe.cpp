#include <iostream>

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
    // printing board
    // for(int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         std::cout << ar[i][j];
    //     }
    //     std::cout << "\n";
    // }
}