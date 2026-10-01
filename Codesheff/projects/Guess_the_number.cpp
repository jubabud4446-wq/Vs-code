#include <bits/stdc++.h>
using namespace std;

int main()
{
    int min = 1, max = 100, guess;
    srand(time(0));
    int num = (rand() % (max - min + 1)) + min;
    cout << "Guess the number between " << min << " and " << max << endl;
    cin >> guess;
    if (guess == num)
    {
        cout << "Congratulations! You guessed the number!" << endl;
    }
    else
    {
        cout << "Sorry, the number was " << num << ". Better luck next time!" << endl;
    }
    return 0;
}