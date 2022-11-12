class SubrectangleQueries {
public:
    vector<vector<int>> rectangle;
    SubrectangleQueries(vector<vector<int>>& rectangle) 
    {
        this->rectangle = rectangle;
    }
    void printRectangle(vector<vector<int>> rectangle)
    {
        for(int i = 0; i < rectangle.size(); i++)
        {
            for(int j = 0; j<rectangle[i].size();j++)
            {
                cout<<rectangle[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) 
    {
        for(int i = row1; i<=row2; i++)
        {
            for(int j = col1; j<=col2; j++ )
            {
                rectangle[i][j] = newValue;
            }
        }
        printRectangle(rectangle);
    }
    
    int getValue(int row, int col) 
    {
        return rectangle[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */
