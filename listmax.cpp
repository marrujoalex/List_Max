#include <iostream>
#include <list>

using namespace std;

int searchMaximum(list<int> a) {
    list<int>::iterator start, stop;
    start = a.begin();
    int temp = *start;
    stop = a.end();

    for (; start != stop; start++) {
        if (*start == NULL) { // If this encounters the null node, then return
            return *start;
        }

        if (*start > temp) { // If the current node is greater than the current max,
            temp = *start;   // then reassign current max to current node
        }
    }
    return temp;
}

int main() {
    int myValues[] = {16,85,22,34,55,1,10};
    list<int> item(myValues, myValues+sizeof(myValues)/sizeof(int));
    int maxNumber = searchMaximum(item);
    cout << "The largest number in the list is: " << maxNumber << "\n";
    return 0;
}