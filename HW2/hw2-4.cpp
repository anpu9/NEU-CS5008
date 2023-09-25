#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Define a struct to store candidate information
struct candidate {
    string lastName;
    int votes;
    double percent;
};

int main() {
    string lastName;
    int votes;
    int totalVotes = 0; // Initialize totalVotes to zero
    candidate candidates[5];

    cout << "Enter 5 Candidate’s last names and votes" << endl;

    // Receive candidate names and votes
    for (int i = 0; i < 5; i++) {
        cin >> lastName; // Receive candidate's last name
        cin >> votes;    // Receive candidate's votes

        // Calculate the total votes
        totalVotes += votes;

        // Initialize the current candidate's information
        candidate cur;
        cur.lastName = lastName;
        cur.votes = votes;
        candidates[i] = cur;
    }

    int max = 0;

    cout << "Candidates  " << "Votes Received  " << "% of Total Votes" << endl;

    // Print the candidate information
    for (int i = 0; i < 5; i++) {
        // Calculate the percentage of votes received
        candidates[i].percent = candidates[i].votes * 100.00 / totalVotes;

        // Output candidate information
        cout << left << setw(15) << candidates[i].lastName;
        cout << left << setw(16) << candidates[i].votes;
        cout << left << setw(15) << fixed << setprecision(2) << candidates[i].percent << endl;

        // Find the candidate with the most votes
        if (candidates[i].votes > candidates[max].votes) {
            max = i;
        }
    }

    // Output the total votes and the winner
    cout << left << setw(15) << "Total " << totalVotes << endl;
    cout << "The Winner of the Election is " << candidates[max].lastName << endl;

    return 0;
}
