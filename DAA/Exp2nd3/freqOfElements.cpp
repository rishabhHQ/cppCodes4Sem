// Evaluate the complexity of the developed program to find
// frequency of elements in a given array.

#include <iostream> 
using namespace std; 
 
int main() { 
    int n; 
    int arr[n];
    int freq[100] = {0};

    cout << "enter size of array: ";
    cin >> n;

    for (int i = 0; i < n; i++) { 
        cin >> arr[i]; 
    }
     
    for (int i = 0; i < n; i++) { 
        freq[arr[i]]++; 
    } 

    for (int i = 0; i < n; i++) { 
        if (freq[i] > 0) { 
            cout << i << " occurs " << freq[i] << " times" << endl; 
        } 
    }
     
    return 0; 
}