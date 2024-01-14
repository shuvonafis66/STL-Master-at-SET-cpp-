#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    // Initialized UnorderedSet
    unordered_set<int> initializedSet = {5, 1, 2, 3, 4};

    // Range-based for loop to print initialized set
    cout << "Initialized UnorderedSet (range-based for loop): ";
    for (const auto& element : initializedSet) {
        cout << element << " ";
    }
    cout << endl;

    // Dynamic UnorderedSet with iterator
    unordered_set<int> dynamicSet;
    dynamicSet.insert(10);
    dynamicSet.insert(20);
    dynamicSet.insert(30);

    // Iterator to print dynamic set
    cout << "Dynamic UnorderedSet (iterator): ";
    for (auto it = dynamicSet.begin(); it != dynamicSet.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Initialized UnorderedSet with auto
    auto autoInitializedSet = unordered_set<int>{5, 1, 2, 3, 4};

    // Range-based for loop to print auto-initialized set
    cout << "Initialized UnorderedSet (auto): ";
    for (const auto& element : autoInitializedSet) {
        cout << element << " ";
    }
    cout << endl;

    // Unordered Set operations
    unordered_set<int> myUnorderedSet;

    // empty()
    cout << "Is unordered set empty? " << (myUnorderedSet.empty() ? "Yes" : "No") << endl;

    // insert()
    myUnorderedSet.insert(1);
    myUnorderedSet.insert(2);
    myUnorderedSet.insert(3);
    myUnorderedSet.insert(4);
    myUnorderedSet.insert(5);

    // size()
    cout << "Size of the unordered set: " << myUnorderedSet.size() << endl;

    // erase()
    int valToErase = 2;
    myUnorderedSet.erase(valToErase);

    // clear()
    // myUnorderedSet.clear();

    return 0;
}
