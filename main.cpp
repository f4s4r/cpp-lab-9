#include <iostream>
#include <utility>

template <typename T> std::pair<T, T> minmax(T* array, size_t size)
{
    if (size != 0)
    {
        T cur_max = array[0];
        for (size_t i = 1; i < size; ++i) {
            (array[i] > cur_max) ? cur_max = array[i] : 1;
        }
        T cur_min = array[0];
        for (size_t i = 1; i < size; ++i) {
            (array[i] < cur_min) ? cur_min = array[i] : 1;
        }
        std::pair <T, T> result (cur_min, cur_max);
        return result;
    }
    else
    {
        std::cerr << "Empty size" << std::endl;
    }
}


int main() {
    float a[4] = {100.0, 2, 3.0, 4};
    std::cout << "kk" << std::endl;
    std::cout << minmax(a, 4).first << " " << minmax(a, 4).second << std::endl;
    return 0;
}
