#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <type_traits>
#include <concepts>
#include <cmath>

template<typename T>
typename std::enable_if<std::is_arithmetic<T>::value, T>::type
helper_for_sliding_window(const std::vector<T>& vec,int start, int end) noexcept{
    T curr_sum = 0;
    for(int i = start ; i < end ; ++i){
        curr_sum += vec[i];
    }

    return curr_sum;
}

template<typename T>
typename std::enable_if<std::is_arithmetic<T>::value, T>::type
sliding_window_k_sub_array_sum(const std::vector<T>& vec,size_t k) noexcept{
    if(k > vec.size()){
        return T(-1);
    }
    int n = vec.size();
    T sum = helper_for_sliding_window(vec,0,k);
    T max_sum = sum;
    

    for(int i = k ; i < n ; ++i){
        sum += vec[i] - vec[i - k];
        max_sum = std::max(sum,max_sum);
        
    }

    return max_sum;
}


template<typename T>
typename std::enable_if<std::is_arithmetic<T>::value, std::vector<T>>::type
sliding_window_k_sub_array(const std::vector<T>& vec,size_t k) noexcept{
    if(k > vec.size()){
        return {};
    }
    int n = vec.size();
    T sum = helper_for_sliding_window(vec,0,k);
    T max_sum = sum;

    int saved_end = k - 1;
    int saved_start = 0;

    for(int i = k ; i < n ; ++i){
        sum += vec[i] - vec[i - k];
        if(max_sum < sum){
            max_sum = sum;
            saved_end = i;
            saved_start = i - k + 1;
        }
    }

    return std::vector<T>(vec.begin() + saved_start, vec.begin() + saved_end + 1);
}

