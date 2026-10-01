#include <bits/stdc++.h>
using namespace std;

class Score
{
    int points;
    public:
    Score(int a)
    {
        points = a;
    }
    friend int operator-(Score &a, Score &b)
    {
        return a.points - b.points;
    }
};

int main()
{
    Score o1(10), o2(5);
    cout << "Difference = " << o1-o2 << endl;
    return 0;
}