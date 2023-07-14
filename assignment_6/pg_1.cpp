answer-1:

#include <vector>
#include <string>
std::vector<int> reconstructPermutation(const std::string& s) {
    int n = s.size();
    std::vector<int> perm(n + 1);
    int low = 0, high = n;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'I') {
            perm[i] = low;
            ++low;
        } else if (s[i] == 'D') {
            perm[i] = high;
            --high;
        }
    }

    perm[n] = low; // or perm[n] = high

    return perm;
}
