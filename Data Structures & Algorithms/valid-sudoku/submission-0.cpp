class Solution {
public:
    char atBox(int i, int j)
    {
        //First 3x3 block
        if(i<3)
        {
            int round = j/3;
            if(round == 0)
                return '0';
            if(round == 1)
                return '1';
            if(round == 2)
                return '2';
        }
        else if(i < 6)
        {
            int round = j/3;
            if(round == 0)
                return '3';
            if(round == 1)
                return '4';
            if(round == 2)
                return '5';
        }
        else if(i < 9)
        {
            int round = j/3;
            if(round == 0)
                return '6';
            if(round == 1)
                return '7';
            if(round == 2)
                return '8';
        }
        return '0';
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();
        unordered_set<string> rows;
        unordered_set<string> cols;
        unordered_set<string> boxes;
        // board [i],[j] với i là hàng, j là cột
        for(int i = 0; i < col; i++)
        {
            for(int j = 0; j<row; j++)
            {
                if(board[i][j] != '.')
                {
                    char box = atBox(i, j);
                    //1. check row
                    string keyRow =  string("R") + to_string(i) + board[i][j];
                    if(rows.count(keyRow))
                    {
                        cout<<"found trung at KeyRow where board" << i <<"  "<<j<<endl;
                        cout<<keyRow<<endl;   
                        return false;
                    }
                    else
                        rows.insert(keyRow);
                    string keyCol =  string("C") + to_string(j) + board[i][j];
                    if(cols.count(keyCol))
                    {
                        cout<<"found trung at keyCol where board" << i <<"  "<<j<<endl;
                        cout<<keyCol<<endl;  
                        return false;
                    }
                    else
                        cols.insert(keyCol);
                    string keyBox =  string("B") + box + board[i][j];
                    if(boxes.count(keyBox))
                    {
                        cout<<"found trung at keyBox where board" << i <<"  "<<j<<endl;
                        cout<<keyBox<<endl;  
                        return false;
                    }
                    else
                        boxes.insert(keyBox);
                }
            }
        }
        return true;
    }
};