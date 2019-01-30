#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the simplifiedChessEngine function below.
 */
// 퀸: 아무대로나 무조건 1개 - 잡히면 쥬금
// 룩: 최대 2개, 상하좌우 무제한
// 비숍: 나이트 + 비숍 합쳐서 최대 2개, 대각선 무제한 
// 나이트: 나이트 + 비숍 합쳐서 최대 2개, (2,1) 로 움직임, 중간에 체스 있어도 노상관
int type[128];
vector<pair<int, pair<int, int>>> horses[2];

bool isInBound(int x, int y) {
    return x >= 0 && y >= 0 && x < 4 && y < 4;
}
// 누구 턴인지, 몇번째 move인지, 최대 몇 move 해야 하는지
bool dfs(int turn, int cnt, int maxCnt, long long chess) { 
    bool ret = false;

    return ret;
}

string simplifiedChessEngine(vector<vector<char>> whites, vector<vector<char>> blacks, int moves) {
    /*
     * Write your code here.
     */
    type['Q'] = 0; type['R'] = 1; type['B'] = 2; type['N'] = 3;
    // 비트맵으로 표현한 체스판
    long long chess = 0;
    for(int i = 0 ;i < whites.size();i++) {
        int idx = (whites[i][1] - 'A') * 4 + (whites[i][2]);
        chess |= (type[whites[i][0]] << (idx * 3));
        horses[0].push_back(
            make_pair(type[whites[i][0]], make_pair(whites[i][1], whites[i][2])));
    }
    for (int i = 0 ;i < blacks.size();i++) {
        int idx = (blacks[i][1] - 'A') * 4 + (blacks[i][2]);
        chess |= ((type[blacks[i][0]] * 2) << (idx * 3));
        horses[1].push_back(
            make_pair(type[blacks[i][0]], make_pair(blacks[i][1], blacks[i][2])));
    }
    for(int i = 0;i < 4;i++) {
        if (dfs(0, 0, moves, chess)) {

        }
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        string wbm_temp;
        getline(cin, wbm_temp);

        vector<string> wbm = split_string(wbm_temp);

        int w = stoi(wbm[0]);

        int b = stoi(wbm[1]);

        int m = stoi(wbm[2]);

        vector<vector<char>> whites(w);
        for (int whites_row_itr = 0; whites_row_itr < w; whites_row_itr++) {
            whites[whites_row_itr].resize(3);

            for (int whites_column_itr = 0; whites_column_itr < 3; whites_column_itr++) {
                cin >> whites[whites_row_itr][whites_column_itr];

                if (whites_column_itr != 3 - 1) {
                    cin.ignore(numeric_limits<streamsize>::max(), ' ');
                }
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        vector<vector<char>> blacks(b);
        for (int blacks_row_itr = 0; blacks_row_itr < b; blacks_row_itr++) {
            blacks[blacks_row_itr].resize(3);

            for (int blacks_column_itr = 0; blacks_column_itr < 3; blacks_column_itr++) {
                cin >> blacks[blacks_row_itr][blacks_column_itr];

                if (blacks_column_itr != 3 - 1) {
                    cin.ignore(numeric_limits<streamsize>::max(), ' ');
                }
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        vector<string> result = simplifiedChessEngine(whites, blacks, m);
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
