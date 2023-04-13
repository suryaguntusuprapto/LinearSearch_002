#include <iostream>
using namespace std;

int arr[20]; //array to be searched
int n;
int i;

void input() {

    while (true) {
        cout << "Enter the number of element in the array : ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 element.\n\n";
    }

    //accept array elements
    cout << "\n--------------------\n";
    cout << "Enter array elements \n";
    cout << "--------------------\n";
    for (i = 0; i < n; i++) {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }
}

void Linearsearch() {
    char ch;
    int comparison; //number of comparisons

    do      //langkah 3
    {
        //accept the number to be searched
        cout << "\nEnter the element you want to search : "; //langkah 1
        int item;
        cin >> item;

        comparison = 0;
        for (i = 0; i < n; i++) {                   //langkah 2 dan 4
            comparison++;
            if (arr[i] == item) {                    //langkah 5a found
                cout << "\n" << item << " found at position " << (i + 1) << endl;
                break;
            }
        }
    }
}

