#include<iostream>
#define MAX_SIZE 50

using namespace std;

/**
 *   task is to merge the sorted array one after another 
 * 
 *   final array is also sorted
 * 
 *   note that : size should not be increase dynamicly 
 * 
*/

void mergeArray(int arr1[], int arr2[], int &s1, int &s2) {
    int s = s1;
    
    for(int i = 0, j = 0; i < s1 + s2; i++) {
        while(arr1[i] < arr2[j] && i < s) {
            i++;
        }
        if(j < s2) {
            s = s + 1;
            for(int k = s; k > i; k--) {
                arr1[k] = arr1[k - 1];
            }
            arr1[i] = arr2[j];
            j++;

        }

        
        
        
    }
    s1 = s1 + s2;
}


 
int main()
{
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];

    int s1,s2;

    cout << "Enter the size of 1st array: ";
    cin >> s1;

    cout << "Enter the Element to the 1st array: " << endl;
    for(int i = 0; i < s1; i++) {
        cout << "\tat index: [" << i << "] : ";
        cin >> arr1[i];
    }


    cout << "Enter the size of 2nd array: ";
    cin >> s2;

    cout << "Enter the Element to the 2nd array: " << endl;
    for(int i = 0; i < s2; i++) {
        cout << "\tat index: [" << i << "] : ";
        cin >> arr2[i];
    }

    mergeArray(arr1,arr2,s1,s2);

    cout << "Traversing array : " << endl; 
    for(int i = 0; i < s1; i++) {
        cout << "\tat index: [" << i << "] : " << arr1[i] << endl;
    }
    return 0;
}
