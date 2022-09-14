//
// Created by kwon on 22. 9. 14.
//

#ifndef ALGORITHM2_ALGORITHM_H
#define ALGORITHM2_ALGORITHM_H

namespace aiot {

    template<typename In>
    bool equal(In begin, In end, In dest) {
        while (begin != end) {
            if (*begin == *dest)
                break;


            ++begin;
            ++dest;
        }
        return (begin == end);
    }
template <typename In, typename T>
In find(In begin, In end, const T& val)
{
    while (begin != end){
        if (*begin == val)
            break;
        ++begin;
    }
    return begin;
}

template<typename In, typename T>
In find_if(In begin, In end, bool(*func)(const T& val) )
{
    while (begin != end){
        if (func(*begin))
            break;
            ++begin;
    }
    return begin;
}
template<typename For, typename T>
For remove(For begin, For end, const T& val)
{
    For result = begin;
    while (begin != end ){
        if(*begin == val) {
            if (begin != result){
                *result = *begin;
                ++result;
            }
        }
         ++begin;
    }
    return begin;
}

};
#endif //ALGORITHM2_ALGORITHM_H
