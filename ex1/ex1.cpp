// Dont forget to cl /EHcs ex1.cpp  to avoid varnings 
#include <iostream>

void PlayGame()
{
// Print welcome message to the terminal
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue...";
    
    // declare a three digit code
    const int FirstDigit = 4;
    const int SecondDigit = 3;
    const int ThirdDigit = 15;
 
    const int NumbersSum = FirstDigit + SecondDigit + ThirdDigit;
    const int NumbersProduct = FirstDigit * SecondDigit * ThirdDigit;

    int GuessOne = NULL;
    int GuessTwo = NULL;
    int GuessThree = NULL;

    // Print sum and product to the terminal
    std::cout << "\n\n";
    std::cout << "There are three digits in the code\n";
    std::cout << "The coded add up to: " << NumbersSum << "\n";
    std::cout << "The codes multiply to give: " << NumbersProduct << "\n";
    
    //Asking player to guess
    std::cout << "Enter your choise of digits: \n";
    std::cin >> GuessOne >> GuessTwo >> GuessThree;
    std::cout << "You`ve just entered: " << GuessOne << GuessTwo << GuessThree << "\n";
        
    //Declare the variable for storing sum and product using player guesses
    int GuessSum = GuessOne + GuessTwo + GuessThree;
    int GuessProduct = GuessOne * GuessTwo * GuessThree;

    // check if the players guesses are correct
    if (GuessSum == NumbersSum && GuessProduct == NumbersProduct)
    {
        std::cout << "You win!!!";

    }

    else 
    {

        std::cout << "Wrong numbers this time!!!\n";
    }

    // Sending sum and product based on guesses back to console
    std::cout << "Sum is: " << GuessSum << "\n"; 
    std::cout << "Product is: " << GuessProduct << "\n";
        

}
int main()
{
    PlayGame();
    return 0;    
}
