#include<bits/stdc++.h>

using namespace std;

const int ignore = 0;
const int upper = 1;
const int lower = 2;

void print(char *s, int how = -1);

int main()
{
    cout << "Enter a string: ";
    char s[100];
    cin.getline(s, 100);
    print(s);
    return 0;
}