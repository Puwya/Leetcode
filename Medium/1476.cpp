class SubrectangleQueries {
 private:
  std::vector<std::vector<int>> matrix;

 public:
  SubrectangleQueries(vector<vector<int>> &rec) {
    matrix = rec;
  }

  void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
    for (int row = row1; row <= row2; ++row) {
      for (int col = col1; col <= col2; ++col) {
        matrix[row][col] = newValue;
      }
    }
  }

  int getValue(int row, int col) {
    return matrix[row][col];
  }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */
