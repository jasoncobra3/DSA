#include <iostream>
using namespace std;
 
// exit is a inbuilt function use to terminate program
//while break is a keyword often use to get outside from loops
//Exit() is used to get outside from infinite loop
int main()
{
    for (int i = 1; i < 5; i++) {
        if (i == 3)
            exit(0);
        cout <<"i = "<< i << "\n";
    }
 
     
 
    for (int j = 9; j > 0; j--) {
        if (j == 5)
            cout <<"j = "<< j;
    }
 
    return 0;
}
 