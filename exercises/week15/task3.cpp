#include <iostream>
using namespace std;

//function which checks if arr[i][j] is found somewhere else in the array => arr[i][j]
// is not a unique value
bool isNotUnique(int **arr, int n, int i, int j) {
    for(int k=0; k<n; ++k) {
        for(int l=0; l<n; ++l) {
            //we have to skip the current element (a[i][j]) so don't check
            // when k==i and j==l
            if(arr[k][l] == arr[i][j] && (i!=k || (i==k && j!=l))) {
                return true;
            }
        }
    }
    //we haven't found the value anywhere else in the array
    return false;
}

int* func(int** arr, int n, int* unique, int& uniqueCount) {
    bool foundFirstNotUnique = false; //flag which indicates if we have found the _first_ not unique element
    int* result = NULL; //the pointer to the first not unique elemet; if we don't find such => we'll return NULL
    uniqueCount = 0;

    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            if(isNotUnique(arr, n, i, j)) {
                if(!foundFirstNotUnique) {
                    result = &arr[i][j];
                    //we store the pointer (address) of arr[i][j] which is the first not unique element which
                    // we have encountered
                foundFirstNotUnique = true;
                //we have found the _first_ non-unique element
                }
            } else {
                //arr[i][j] is *for sure* a unique element so add it to the unique elements array
                // and then increment uniqueCount (the index variable for the unique array)
                unique[uniqueCount++] = arr[i][j];
            }
        }
    }

    return result;
}

int main() {
    const int N = 5;
    int arr[N][N] = {{1,4,1,1,1},{1,1,2,5,6},{2,3,67,7,8},{12,3,12,12,12},{1,100,1,100,1}};
    // int[][] is different from int** so the next few lines are a way to pass a _static_
    // 2D array to a function which expects int** (you actually don't have to worry about that
    // the task doesn't require for you to call the function from main, just write it :) )
    int *rows[N];
    for(int i=0; i<N; ++i) {
        rows[i] = arr[i];
    }    

    int unique[N*N];
    //this is not in the task, but its good to know actually how many unique elements have been found
    // (in order to know how much to print from the array)
    // we are passing uniqueCount by reference so it's value will be filled correctly by func
    int uniqueCount;

    int *res = func(rows, N, unique, uniqueCount);
    //printing the pointer value (if there isn't a cast to void* it'll show the
    // value of the memory pointed by res
    cout << (void *) res << endl;

    for(int i=0; i<uniqueCount; ++i) {
        cout << unique[i] << " ";
    }
    cout << endl;
    

    return 0;
}

