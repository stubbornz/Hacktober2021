#include<iostream>
using namespace std;
 
int main()
{
    //Step:- 1:-- Create two variable repersent row and column.
    
    int n = 2,m = 3; // n is for row and m is for column.

    //Step:- 2:-- Create two level pointer variable.
    int **arr; 

    //Step:- 3:-- Allocate the memory for row.

    arr = new int*[n];

    //Step:- 4:-- run the loop for n-time starting form 0 - index.

    for(int i = 0; i < n; i++) {
        //Step:- 5:-- Allocate the memory for column at every index.
        arr[i] = new int[m];
    }

    //Step:- 6:- Store data into the array

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "At index : " << i << " " << j << " : ";
            cin >> arr[i][j]; 
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "At index : " << i << " " << j << " : " <<  arr[i][j] << endl;
        }
    }

    return 0;
}
