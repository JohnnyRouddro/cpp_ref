#include <bits/stdc++.h>
using namespace std;

bool sort_by_second(const pair<int, float> &a, const pair<int, float> &b){
    return (get<1>(a) < get<1>(b));
}

// ======= for reverse, we only return if it's "greater than" the other

bool sort_by_second_rev(const pair<int, float> &a, const pair<int, float> &b){
    return (get<1>(a) > get<1>(b));
}

int main(){

    int a[] = {5, 4, 3, 2, 1};
    float b[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    vector <pair<int, float>> v;

    for(int i=0; i<5; i++){
        v.push_back(make_pair(a[i], b[i]));
//        v.push_back({a[i], b[i]}); // this works too
    }

    sort(v.begin(), v.end()); // ascending sort by first element
    sort(v.rbegin(), v.rend()); // descending sort by first element

    sort(v.begin(), v.end(), sort_by_second); // ascending sort by second element
    sort(v.rbegin(), v.rend(), sort_by_second); // descending sort by second element
    sort(v.begin(), v.end(), sort_by_second_rev); // descending sort by second element

    for(int i=0; i<5; i++){
        cout << get<1>(v[i]) << endl;
    }

    return 0;
}
