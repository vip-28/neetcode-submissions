class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<pair<int, int>, set<char>> mp;

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {

                int currI = i / 3;  
                int currJ = j / 3;   

                if (board[i][j] != '.') {
                    pair<int, int> curr = {currI, currJ};

                    if (mp[curr].contains(board[i][j])) {
                        return false;
                    }

                    mp[curr].insert(board[i][j]);
                }
            }
        }

        for (int i = 0; i < 9; i++) {
            set<char> st;

            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.')
                    continue;

                if (st.contains(board[i][j])) {
                    return false;
                }

                st.insert(board[i][j]);
            }
        }

        for (int i = 0; i < 9; i++) {
            set<char> st;

            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.')
                    continue;

                if (st.contains(board[j][i])) {
                    return false;
                }

                st.insert(board[j][i]);
            }
        }

        return true;
    }
};