#include <iostream>
#include <vector>

template<class Iterator, class Predicate>
int count_if(Iterator begin, Iterator end, Predicate p) {
    int count = 0;
    for (; begin != end; begin++) {
        if (p(*begin)) {
            count++;
        }

    }
    return count;
}


bool isEven(int x) {
    return x % 2 == 0;

};

int main() {
    std::vector<int> v = {2, 34, 5, 6, 7, 7, 8, 9, 45, 86};
    int c = count_if(v.begin(), v.end(), isEven);
    std::cout << c << std::endl;
    return 0;
}