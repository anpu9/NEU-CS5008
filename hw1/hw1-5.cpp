#include <iostream>
#include <string>
using namespace std;

int main() {
    double netPrice;
    int numberOfCopy;

    // Prompt the user to enter input
    cout << "Enter the Price: $";
    cin >> netPrice;
    cout << "Enter the copies: ";
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

    string bestOption = "O1";
    double highestRoyalty = option1Royalty;

    if (option2Royalty > highestRoyalty) {
        highestRoyalty = option2Royalty;
        bestOption = "O2";
    }

    if (option3Royalty > highestRoyalty) {
        bestOption = "O3";
    }

    cout << "Option 1: $" << option1Royalty << endl;
    cout << "Option 2: $" << option2Royalty << endl;
    cout << "Option 3: $" << option3Royalty << endl;
    cout << "Best Option: " << bestOption << endl;

    return 0;
}
