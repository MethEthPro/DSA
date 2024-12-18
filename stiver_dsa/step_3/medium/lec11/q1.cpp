#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printMatrix(int matrix[4][4],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    
}

void markRow(int matrix[4][4],int n, int i){
    for(int j=0;j<n;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}

void markCol(int matrix[4][4],int n,int j){
    for(int i=0;i<n;i++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}

void brute(int matrix[4][4],int n){


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                markRow(matrix,4,i);
                markCol(matrix,4,j);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
    printMatrix(matrix , 4);
}


void better(int matrix[4][4],int n){
    vector<int> row(4,1);
    vector<int> col(4,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                row[i]=0;
                col[j]=0;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(row[i]==0 || col[j]==0){
                matrix[i][j]==0;
            }
        }
    }
    printMatrix(matrix,4);
}

void optimal(int matrix[4][4],int n){
    int colvar=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0){
                    matrix[0][j]=0;
                }
                else{
                    colvar=0;
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }
    if(matrix[0][0]==0){
        for(int j=0;j<n;j++){
            matrix[0][j]=0;
        }
    }
    if(colvar==0){
        for (int i = 0; i < n; i++)
        {
            matrix[i][0]=0;
        }
        
    }
    printMatrix(matrix,4);
}

int main(){

    // set matrix elements to zero
    int matrix[4][4]={{1,1,1,1},
                      {1,0,1,1},
                      {1,1,0,1},
                      {1,0,0,1}
                      };

    printMatrix(matrix,4);

    

    // brute
    brute(matrix,4);

    // better
    better(matrix,4);



}