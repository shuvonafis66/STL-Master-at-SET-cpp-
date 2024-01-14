#include <iostream>
#include <set>

using namespace std;

int main() {
    // Creating a set
    set<int> mySet;

    // empty()
    cout << "Is set empty? " << (mySet.empty() ? "Yes" : "No") << endl;

    // insert()
    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3);

    // size()
    cout << "Size of the set: " << mySet.size() << endl;

    // erase()
    int valToErase = 2;
    mySet.erase(valToErase);

    // clear()
    // mySet.clear();

    // find()
    int valToFind = 3;
    auto it = mySet.find(valToFind);
    if (it != mySet.end()) {
        cout << "Value " << valToFind << " found." << endl;
    } else {
        cout << "Value " << valToFind << " not found." << endl;
    }

    // count()
    int valToCount = 1;
    int count = mySet.count(valToCount);
    cout << "Number of elements with value " << valToCount << ": " << count << endl;

    // lower_bound()
    auto lowerBoundIt = mySet.lower_bound(2);
    cout << "Lower bound of value 2: " << *lowerBoundIt << endl;

    // upper_bound()
    auto upperBoundIt = mySet.upper_bound(2);
    cout << "Upper bound of value 2: " << *upperBoundIt << endl;

    // equal_range()
    auto equalRange = mySet.equal_range(2);
    for (auto it = equalRange.first; it != equalRange.second; ++it) {
        cout << "Equal range for value 2: " << *it << endl;
    }

    return 0;
}

