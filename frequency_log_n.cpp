
/*
    Calculating Frequency with O(log n) time complexity
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> numbers_vector = {4, 1, 5, 7, 2, 1, 3, 1};
    int numbers_array[] = {4, 1, 5, 7, 2, 1, 3, 1};

    sort(numbers_vector.begin(), numbers_vector.end());
    sort(numbers_array, numbers_array + 8);

    // equal_range() returns the lower_bound() and the upper_bound() as a pair.

    auto range_vector = equal_range(numbers_vector.begin(), numbers_vector.end(), 1); // frequency of 1
    auto range_array = equal_range(numbers_array, numbers_array + 8, 1);

    cout << range_vector.second - range_vector.first << endl; // 3
    cout << range_array.second - range_array.first << endl; // 3

    return 0;
}
