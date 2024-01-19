#include <iostream>

template <typename T> T* minmax(T* array, size_t size)
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
        T* res = new T[2]; // не очень понимаю почему в одной функции должно быть и мин и макс если честно
        res[0] = cur_min;
        res[1] = cur_max;
        return res;
    }
    else
    {
        std::cerr << "Empty size" << std::endl;
    }
}


int main() {
    float a[4] = {100.0, 2, 3.0, 4};
    std::cout << "kk" << std::endl;
    std::cout << minmax(a, 4)[0] << " " << minmax(a, 4)[1] << std::endl;
    return 0;
}
