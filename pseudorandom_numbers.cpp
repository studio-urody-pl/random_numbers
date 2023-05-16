#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <istream>

using namespace std;

int number, guess, tries=0;
int main()
    {
        cout << "Hello my friend, stay a while and listen" << endl;
        cout << "I thought about a number within 1 ... 100" << endl;
        srand(time(NULL));
        number=rand()%100+1;
//        cout<<number<<endl;

        while (guess!=number)
        {
            tries++;

            cout<<"Try guessing which one (it's your "<<tries<<" try:";
            cin>>guess;

            if (guess==number)
                cout<<"Good job! You win in "<<tries<<" try."<< endl;
            else if (guess<number)
                cout<<"My number is bigger than yours"<<endl;
            else if (guess>number)
                cout<<"My number is smaller than yours"<<endl;
        }
    cout << "Press \'Return\' to end." << endl;
    getchar();

    return 0;
}
