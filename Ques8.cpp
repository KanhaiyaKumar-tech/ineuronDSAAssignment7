#include <iostream>
#include <vector>
using namespace std;

bool checkStraightLine(vector<vector<int>>& coordinates) {
    int n = coordinates.size();

    if (n <= 2)
        return true;

    int x0 = coordinates[0][0];
    int y0 = coordinates[0][1];
    int x1 = coordinates[1][0];
    int y1 = coordinates[1][1];

    for (int i = 2; i < n; i++) {
        int xi = coordinates[i][0];
        int yi = coordinates[i][1];

        if ((xi - x0) * (y1 - y0) != (x1 - x0) * (yi - y0))
            return false;
    }

    return true;
}

int main() {
 
    vector<vector<int>> coordinates;
    int start,end;
    while (std::cin >> start >> end) {
        coordinates.push_back({start,end});
        if (std::cin.peek() == '\n') {
            break;
        }
    }


    if (checkStraightLine(coordinates))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}

