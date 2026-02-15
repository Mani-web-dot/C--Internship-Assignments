#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];
    int sum = 0;

    cout << "Enter marks:\n";
    for(int i = 0; i < n; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    // Bubble Sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(marks[j] > marks[j + 1]) {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    cout << "\nTop 3 Marks:\n";
    for(int i = n - 1; i >= n - 3 && i >= 0; i--) {
        cout << marks[i] << " ";
    }

    double average = (double)sum / n;

    cout << "\nAverage Score: " << average << endl;

    return 0;
}

