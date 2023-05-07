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
    int min_x = -1, min_y = -1;

    for (int i = 0; i < len; i++)
    {
        
        for (int j = 0; j < bre; j++)
        {
            double distance = 0;
            for(int k = 0;k<sp;k++){
                distance += sqrt(((spot[k].first - i) * (spot[k].first - i)) + ((spot[k].second - j) * (spot[k].second - j)));
            }
            if (distance < min_distance)
            {
                min_distance = distance;
                min_x = i;
                min_y = j;
            }
        }

    }

    cout << "The minimum sum of distances is " << min_distance << " and the position where the power station should be established has \nx-coordinate: ";
    cout << min_x << " \ny-coordinate: " << min_y << endl;

    return 0;
}
