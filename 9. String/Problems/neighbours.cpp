#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    string grid[100];

    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    int x, y;
    cin >> x >> y;

    // Convert to 0-based indexing
    x--;
    y--;

    // 8 possible directions
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // Check if the neighbor is inside the grid
        if (nx >= 0 && nx < n && ny >= 0 && ny < m)
        {
            if (grid[nx][ny] != 'x')
            {
                cout << "no";
                return 0;
            }
        }
    }

    cout << "yes";

    return 0;
}
