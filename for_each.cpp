#include <iostream>
#include <vector>

template<class Iterator, class Function>
void for_each(Iterator begin, Iterator end, Function func){
    for (;begin != end; begin++) {
        func(*begin);
    }
}

struct sum {
    int sum = 0;
    void operator()(int x) {
        sum += x;
        std::cout << sum << std::endl;
    }
};

int main(){
    std::vector<int> vector = {1, 2, 3, 4, 5};
    for_each(vector.begin(), vector.end(),[](int x){ std::cout << x << std::endl;});
    for_each(vector.begin(), vector.end(),sum());

    return 0;
}