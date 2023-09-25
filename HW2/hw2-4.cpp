#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Define a struct to store candidate information
struct Candidate {
    string lastName;
    int votes;
    double percent;
};

void receiveCandidateData(Candidate candidates[], int numCandidates, int& totalVotes);
void calculatePercentages(Candidate candidates[], int numCandidates, int totalVotes);
int findWinner(const Candidate candidates[], int numCandidates);
void printCandidateData(const Candidate candidates[], int numCandidates, int totalVotes);

int main() {
    const int numCandidates = 5;
    Candidate candidates[numCandidates];
    int totalVotes = 0;

    receiveCandidateData(candidates, numCandidates, totalVotes);
    calculatePercentages(candidates, numCandidates, totalVotes);
    printCandidateData(candidates, numCandidates, totalVotes);

    return 0;
}

// Function to receive candidate names and votes
void receiveCandidateData(Candidate candidates[], int numCandidates, int& totalVotes) {
    string lastName;
    int votes;

    cout << "Enter " << numCandidates << " Candidate’s last names and votes" << endl;

    for (int i = 0; i < numCandidates; i++) {
        cin >> lastName; // Receive candidate's last name
        cin >> votes;    // Receive candidate's votes

        // Calculate the total votes
        totalVotes += votes;

        // Initialize the current candidate's information
        Candidate cur;
        cur.lastName = lastName;
        cur.votes = votes;
        candidates[i] = cur;
    }
}

// Function to calculate the percentage of votes for each candidate
void calculatePercentages(Candidate candidates[], int numCandidates, int totalVotes) {
    for (int i = 0; i < numCandidates; i++) {
        // Calculate the percentage of votes received
        candidates[i].percent = candidates[i].votes * 100.00 / totalVotes;
    }
}

// Function to find the candidate with the most votes
int findWinner(const Candidate candidates[], int numCandidates) {
    int max = 0;

    for (int i = 0; i < numCandidates; i++) {
        if (candidates[i].votes > candidates[max].votes) {
            max = i;
        }
    }

    return max;
}

// Function to print the candidate information
void printCandidateData(const Candidate candidates[], int numCandidates, int totalVotes) {
    cout << "Candidates  " << "Votes Received  " << "% of Total Votes" << endl;

    for (int i = 0; i < numCandidates; i++) {
        cout << left << setw(15) << candidates[i].lastName;
        cout << left << setw(16) << candidates[i].votes;
        cout << left << setw(15) << fixed << setprecision(2) << candidates[i].percent << endl;
    }

    cout << left << setw(15) << "Total " << totalVotes << endl;
    int winnerIndex = findWinner(candidates, numCandidates);
    cout << "The Winner of the Election is " << candidates[winnerIndex].lastName << endl;
}
