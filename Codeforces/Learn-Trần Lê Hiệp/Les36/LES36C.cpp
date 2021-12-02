#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int Q;
    string S;
    cin >> S >> Q;

    vector<pair<int, char>> query(Q);
    for(int i = 0; i < Q; ++i) {
        int T;
        cin >> T;

        int F = 0;
        char C = ' ';

        if(T == 2) { cin >> F >> C; }
        query.at(i) = pair<int, char>(F, C);
    }

    string head = "";
    string tail = "";
    int reverse_num = 0;

    for(int i = 0; i < Q; ++i) {
        int T = query.at(i).first;

        if(T == 0) { ++reverse_num; }

        if(T == 1) {
            char C = query.at(i).second;

            if((reverse_num % 2) == 0) { head.push_back(C); }
            else { tail.push_back(C); }
        }

        if(T == 2) {
            char C = query.at(i).second;

            if((reverse_num % 2) == 0) { tail.push_back(C); }
            else { head.push_back(C); }
        }
    }

    reverse(head.begin(), head.end());

    string ans = head + S + tail;

    if((reverse_num % 2) == 1) { reverse(ans.begin(), ans.end()); }

    cout << ans << endl;

    return 0;
}
