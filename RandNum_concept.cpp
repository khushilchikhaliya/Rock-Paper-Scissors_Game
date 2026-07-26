#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    //Random number generator 
    srand(time(NULL));
    int randomnumber = rand()%5;
    cout << randomnumber << endl;
    return 0;
}