#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> height(N);
        for (int i = 0; i < N; i++)
        {
            cin >> height[i];
        }

        int left = 0, right = N - 1;
        int maxMinHeight = 0;
        int maxWidth = 0;
        int resLeft = 0, resRight = 0;

        while (left < right)
        {
            int h = min(height[left], height[right]);
            int width = right - left;

            if (h > maxMinHeight || (h == maxMinHeight && width > maxWidth))
            {
                maxMinHeight = h;
                maxWidth = width;
                resLeft = left;
                resRight = right;
            }

            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        cout << resLeft << " " << resRight << "\n";
    }

    return 0;
}