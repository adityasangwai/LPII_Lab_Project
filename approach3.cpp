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

    int x_co = 0, y_co = 0;

    for (int i = 0; i < sp; i++)
    {
        x_co += spot[i].first;
        y_co += spot[i].second;
    }

    x_co /= spot.size();
    y_co /= spot.size();

    double dist = 0;

    for (int i = 0; i < sp; i++)
    {
        dist += sqrt(((spot[i].first - x_co) * (spot[i].first - x_co)) + ((spot[i].second - y_co) * (spot[i].second - y_co)));
    }

    cout << "The minimum sum of distances is " << dist << " and the position where the power station should be established has \nx-coordinate: ";
    cout << x_co << " \ny-coordinate: " << y_co << endl;

    return 0;
}
