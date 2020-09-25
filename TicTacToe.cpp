#include <iostream>
#include <string>

// get the player choice on where to mark X's/O's
// param: none
// return an integer between 1-9
int GetPlayerChoice(std::string name)
{
    std::string choice = "";
    std::cout << name << ", where would you like to go? Please choose between 1-9: ";
    getline(std::cin,choice);

    int turn = stoi(choice);

    while (turn < 1 || turn > 9)
    {
        std:: cout << "Invalid input: Please choose between 1-9: ";
        getline(std::cin,choice);
        turn = stoi(choice);
    }
    return turn;
}

void PlaceMarker(char ar[3][3], int position, char player)
{
    switch(position)
    {
        case 1:
            ar[0][0] = player;
            break;
        case 2:
            ar[0][1] = player;
            break;
        case 3: 
            ar[0][2] = player;
            break;
        case 4:
            ar[1][0] = player;
            break;
        case 5:
            ar[1][1] = player;
            break;
        case 6: 
            ar[1][2] = player;
            break;
        case 7:
            ar[2][0] = player;
            break;
        case 8: 
            ar[2][1] = player;
            break;
        case 9:
            ar[2][2] = player;
            break;
        default:
            std::cout << "invalid" << std::endl;
            break;
    }
}

// print out the whole board at the start
void DisplayBoard(char arr[3][3])
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

void CreateBoard(char ar[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ar[i][j] = '-';
        }
    }
}

int main()
{
    char ar[3][3];
    CreateBoard(ar);
    DisplayBoard(ar);

    char player1 = 'X';
    char player2 = 'O';

    std::string p1name = "";
    std::string p2name = "";

    std::cout << "Please enter Player 1's name: ";
    getline(std::cin,p1name);
    std::cout << "Please enter Player 2's name: ";
    getline(std::cin,p2name);

    int playerChoice = -1;
    
    for(int i = 0; i < 9; i++)
    {
        if(i%2==0) // player1
        {
            playerChoice = GetPlayerChoice(p1name);
            PlaceMarker(ar,playerChoice,player1);
        }
        else // player2
        {
            playerChoice = GetPlayerChoice(p2name);
            PlaceMarker(ar,playerChoice,player2);
        }
        DisplayBoard(ar);
    }
    std::cout << "Thanks for playing!" << std::endl;
}