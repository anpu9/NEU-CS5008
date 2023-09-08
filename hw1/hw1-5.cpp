/*
A new author is in the process of negotiating a contract for a new romance 
novel. The publisher is offering three options. In the first option, the author 
is paid $5,000 upon delivery of the final manuscript and $20,000 when the 
novel is published. In the second option, the author is paid 12.5% of the net 
price of the novel for each copy of the novel sold. In the third option, the 
author is paid 10% of the net price for the first 4000 copies sold, and 14% 
of the net price for the copies sold over 4000. The author has some idea 
about the number of copies that will be sold and would like to have an 
estimate of the royalties generated under each option. Write a program that 
prompts the author to enter the net price of each copy of the novel and the 
estimated number of copies that will be sold. The program then outputs the 
royalties under each option and the best option the author could choose. 
(Use appropriate named constants to store the special values such as royalties 
rates and fixed royalties.) 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    double netPrice;
    int numberOfCopy;

    // Prompt the user to enter input
    cout << "Enter the net price of each copy of the novel: $";
    cin >> netPrice;
    cout << "Enter the estimated number of copies that will be sold: ";
    cin >> numberOfCopy;

    const double manuscriptRoyalty = 5000;
    const double publicationRoyalty = 20000;
    const double generalRate = 0.125;
    const double basicRate = 0.1;
    const double highRate = 0.14;

    double option1Royalty = manuscriptRoyalty + publicationRoyalty;
    double option2Royalty = numberOfCopy * netPrice * generalRate;
    double option3Royalty =
        (numberOfCopy > 4000) ? (4000 * netPrice * basicRate + (numberOfCopy - 4000) * netPrice * highRate) : (numberOfCopy * netPrice * basicRate);

    string bestOption;
    double highestRoyalty = option1Royalty;

    if (option2Royalty > highestRoyalty) {
        highestRoyalty = option2Royalty;
        bestOption = "Option 2";
    }

    if (option3Royalty > highestRoyalty) {
        bestOption = "Option 3";
    }

    cout << "Royalty for Option 1: $" << option1Royalty << endl;
    cout << "Royalty for Option 2: $" << option2Royalty << endl;
    cout << "Royalty for Option 3: $" << option3Royalty << endl;
    cout << "The best option for the author is " << bestOption << endl;

    return 0;
}
