#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
    cout<<endl;
    cout<<endl;
}
int main(){
    int rows = 6, cols = 6;

    // Create a matrix using vector
    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Initialize with values
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value;
            value++;
        }
    }
    printMatrix(matrix);

    int n=rows;
    vector<int> ans;

    int left=0;
    int top=0;
    int right=n-1;
    int bottom=n-1;
    while(left<=right && top<=bottom){
        // Traverse top row
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;

        // Traverse right column
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;

        // Traverse bottom row (if any)
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // Traverse left column (if any)
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
     
        }

    }
    int n2=ans.size();
    for(int i=0;i<n2;i++){
        cout<<ans[i]<<" ";
    }
}



