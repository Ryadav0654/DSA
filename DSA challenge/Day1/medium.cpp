#include <iostream>
using namespace std;
// Sam want to read exactly ‘TARGET’ number of pages.

// He has an array ‘BOOK’ containing the number of pages for ‘N’ books.

// Return YES/NO, if it is possible for him to read any 2 books and he can meet his ‘TARGET’ number of pages.

// Example:

// Explain
// Input: ‘N’ = 5, ‘TARGET’ = 5
// ‘BOOK’ = [4, 1, 2, 3, 1] 

// Output: YES
// Explanation:
// Sam can buy 4 pages book and 1 page book.

bool read(int n, int book[], int target)
{
    for(int i = 0; i < n-1; i++){
        
        for(int j = i+1; j < n; j++){

            if(book[i]+book[j] == target){

            return true;
            break;

            }
        }   
    }

    return false;
}

int main(int argc, char const *argv[])
{
    int n = 5;
    int target = 5;
    int book[n] ={4, 1, 2, 3, 1};

    if(read(5, book, 5)){

        cout << "yes" << endl;
    }else{

        cout << "no" << endl;
    }
    
    return 0;
}
