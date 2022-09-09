#ifndef DEF_ITER_HPP
# define DEF_ITER_HPP
# include <cstddef>

template<typename T>
void iter(T *array, size_t tabLength, void (*fct)(T &))
{
    for (size_t i = 0; i < tabLength; i++)
        fct(array[i]);
}

#endif