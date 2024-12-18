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

void brute(const vector<vector<int>>& matrix,int n){
    int rows=n;
    int col=n;
    vector<vector<int>> ans(rows, vector<int>(col));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n-1-i]=matrix[i][j];
        }
    }
    printMatrix(ans);

}

void optimal(vector<vector<int>>& matrix,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    printMatrix(matrix);

}
int main(){

    // ROTATE MATRIX/IMAGE 



    int rows = 4, cols = 4;

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

    // brute
    brute(matrix,4);

    // optimal
    optimal(matrix,4);

}