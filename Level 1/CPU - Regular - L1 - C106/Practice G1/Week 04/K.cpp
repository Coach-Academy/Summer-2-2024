#include <bits/stdc++.h>

using namespace std;
const int N = 3;
int arr[N][N];
bool mat[N][N];

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            mat[i][j] = true;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] % 2 == 0)
                continue;
            mat[i][j] = !mat[i][j];
            // !1 = 0
            // !0 = 1
            //up i-1
            if (i - 1 >= 0)
                mat[i - 1][j] = !mat[i - 1][j];
            //down i+1;
            if (i + 1 <= 2)
                mat[i + 1][j] = !mat[i + 1][j];
            //right j+1
            if (j + 1 <= 2)
                mat[i][j + 1] = !mat[i][j + 1];
            // left j-1
            if (j - 1 >= 0)
                mat[i][j - 1] = !mat[i][j - 1];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << mat[i][j];
        cout << '\n';
    }
    return 0;
}