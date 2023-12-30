#include <iostream>
#include <list>
#include <vector>

template <class T>
void impl(T& data) {
    data.push_back(0);
    auto iterator = data.begin();

    for (size_t i = 1u; i < 100u; ++i) {
        data.push_back(i);
    }

    std::cout << "First = " << *iterator << std::endl;
}

int main() {
    std::list<int> data_1;
    impl(data_1);

    std::vector<int> data_2;
    impl(data_2);
}