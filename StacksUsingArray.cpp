/******************************************************************************
Implement a stack using an array. Perform the following operations: push(x), pop(), top()
(or peek()), isEmpty(), and isFull() operations, and prints output based on
query inputs.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;


vector<int> pushInArrey(vector <int> arrey, int size) {

    for (int i = 0; i<size; i++) {
        arrey.push_back(i);
    }
    return arrey;
}

// vector<int> popOutArrey(vector <int> arrey, int size) {
    
//     if (!isEmpty) {
//         arrey.pop_back();
//     }
// }

// bool isEmpty(vector <int> arrey) {
    
//     if (arrey.top == 0) {
//         return true;
//     }
// }

int main()
{
    int i,size;

    cout << "Enter size of array: ";
    cin >> size;

    // vector<int> arrey(size);
    
       

    return 0;
}