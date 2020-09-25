#include <iostream>

// get the player choice on where to mark X's/O's
// param: none
// return an integer between 1-9
int GetPlayerChoice ()
{
    int choice = -1;
    std:: cout << " Where would you like to go? Please choose between 1-9";
    std:: cin >> choice;
    while (choice < 1 || choice >9)
    {
        std:: cout << "Invalid input: Please choose between 1-9 :)";
        std:: cin >> choice;
    }
    return choice;

}

// print out the whole board at the start
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
    std:: cout << GetPlayerChoice() << std:: endl;
    
  
}