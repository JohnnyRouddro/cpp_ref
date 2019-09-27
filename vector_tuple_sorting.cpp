#include <bits/stdc++.h>
using namespace std;

bool sort_by_second(const tuple<int, float, char> &a, const tuple<int, float, char> &b){
    return (get<1>(a) < get<1>(b));
}
bool sort_by_third(const tuple<int, float, char> &a, const tuple<int, float, char> &b){
    return (get<2>(a) < get<2>(b));
}

// ======= for reverse, we only return if it's "greater than" the other

bool sort_by_second_rev(const tuple<int, float, char> &a, const tuple<int, float, char> &b){
    return (get<1>(a) > get<1>(b));
}
bool sort_by_third_rev(const tuple<int, float, char> &a, const tuple<int, float, char> &b){
    return (get<2>(a) > get<2>(b));
}

int main(){

    int a[] = {5, 4, 3, 2, 1};
    float b[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int c[] = {'a', 'b', 'c', 'd', 'e'};

    vector <tuple<int, float, char>> v;

    for(int i=0; i<5; i++){
        v.push_back(make_tuple(a[i], b[i], c[i]));
    }

    sort(v.begin(), v.end()); // ascending sort by first element
    sort(v.rbegin(), v.rend()); // descending sort by first element

    sort(v.begin(), v.end(), sort_by_second); // ascending sort by second element
    sort(v.rbegin(), v.rend(), sort_by_second); // descending sort by second element
    sort(v.begin(), v.end(), sort_by_second_rev); // descending sort by second element

    sort(v.begin(), v.end(), sort_by_third); // ascending sort by third element
    sort(v.rbegin(), v.rend(), sort_by_third); // descending sort by third element
    sort(v.begin(), v.end(), sort_by_third_rev); // descending sort by third element

    for(int i=0; i<5; i++){
        cout << get<2>(v[i]) << endl;
    }

    return 0;
}
