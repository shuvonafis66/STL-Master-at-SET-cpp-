#include <iostream>
#include <set>

using namespace std;

int main() {
    // Creating a multiset
    multiset<int> myMultiSet;

    // empty()
    cout << "Is multiset empty? " << (myMultiSet.empty() ? "Yes" : "No") << endl;

    // insert()
    myMultiSet.insert(1);
    myMultiSet.insert(2);
    myMultiSet.insert(3);
    myMultiSet.insert(1); // Inserting duplicate value

    // size()
    cout << "Size of the multiset: " << myMultiSet.size() << endl;

    // erase()
    int valToErase = 2;
    myMultiSet.erase(valToErase);

    // clear()
    // myMultiSet.clear();

    // find()
    int valToFind = 3;
    auto it = myMultiSet.find(valToFind);
    if (it != myMultiSet.end()) {
        cout << "Value " << valToFind << " found." << endl;
    } else {
        cout << "Value " << valToFind << " not found." << endl;
    }

    // count()
    int valToCount = 1;
    int count = myMultiSet.count(valToCount);
    cout << "Number of elements with value " << valToCount << ": " << count << endl;

    // lower_bound()
    auto lowerBoundIt = myMultiSet.lower_bound(2);
    cout << "Lower bound of value 2: " << *lowerBoundIt << endl;

    // upper_bound()
    auto upperBoundIt = myMultiSet.upper_bound(2);
    cout << "Upper bound of value 2: " << *upperBoundIt << endl;

    // equal_range()
    auto equalRange = myMultiSet.equal_range(2);
    for (auto it = equalRange.first; it != equalRange.second; ++it) {
        cout << "Equal range for value 2: " << *it << endl;
    }

    return 0;
}

