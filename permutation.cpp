#include<bits/stdc++.h>

using namespace std;

//permutation with repeats

void permutation(string str, int start_idx, int end_idx){

    if(start_idx == end_idx)
        cout << str << endl;
    else{
        for(int i = start_idx; i <= end_idx; i++){
            swap(str[start_idx], str[i]);
            permutation(str, start_idx+1, end_idx);
            swap(str[start_idx], str[i]);
        }
    }
}

int main(){

    string input;

    cin >> input;

    int l = input.length();

    permutation(input, 0, l-1);

    return 0;
}
