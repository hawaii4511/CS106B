//#include "genlib.h"
//#include "simpio.h"
#include <iostream>

using namespace std;

const int NumScores = 4;

double GetScoresAndAverage(int numScores);

int main()
{
    cout << "This program averages " << NumScores << " scores." << endl;
    double average = GetScoresAndAverage(NumScores);
    cout << "The average is " << average << "." << endl;
    return 0;
}

double GetScoresAndAverage(int numScores)
{
    int sum = 0;
    for (int i = 0; i < numScores; i++) {
        int nextScore;
        cout << "Next scores? ";
        cin >> nextScore;
        sum += nextScore;
    }
    return double(sum)/numScores;
}