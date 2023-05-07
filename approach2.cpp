
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len, bre, sp;
    cout << "\nEnter length in kms: ";
    cin >> len;
    cout << "\nEnter Breadth int kms: ";
    cin >> bre;

    cout << "\nEnter number of spots: ";
    cin >> sp;

    vector<pair<int, int>> spot;

    for (int i = 0; i < sp; i++)
    {
        int x, y;
        cout << "\nEnter position of spot " << (i + 1) << " : ";
        cout << "\nx-coordinate: ";
        cin >> x;
        cout << "\ny-coordinate: ";
        cin >> y;
        spot.push_back({x, y});
    }

    double min_distance = INT_MAX;
    int min_pos = -1;

    for (int i = 0; i < sp; i++)
    {
        double distance = 0;
        for (int j = 0; j < sp; j++)
        {
            distance += sqrt(((spot[i].first - spot[j].first) * (spot[i].first - spot[j].first)) + ((spot[i].second - spot[j].second) * (spot[i].second - spot[j].second)));
        }
        if (distance < min_distance)
        {
            min_distance = distance;
            min_pos = i;
        }
    }

    cout << "The minimum sum of distances is " << min_distance << " and the position where the power station should be established has \nx-coordinate: ";
    cout << spot[min_pos].first << " \ny-coordinate: " << spot[min_pos].second << endl;

    return 0;
}
