#include <iostream>
#include "sliding_window.hpp"
#include <random>
#include <thread>
#include <chrono>

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> dist_index(3,10);
std::uniform_real_distribution<> dist_numbers(1,10);



using std::cout;
using std::endl;
using std::vector;

int main(){
    cout << "=== Sliding window ===" << endl;

    cout << "Generating vector..." << endl<<endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    size_t amount = static_cast<size_t>(dist_index(gen));
    vector<double> vec(amount);

    for( double& number: vec ){
          number = std::round(dist_numbers(gen) * 100.0) / 100.0;
    }


    cout<< "Generated Vector: ";

    cout << "{";
    for(size_t i = 0; i < vec.size() ;++i){
        cout << vec[i];
        if(i != vec.size() - 1){
            cout << ", ";
        }
    }
    cout << "}"<<endl<<endl;



    cout<< "Maximum sum of 3 elements sub array: "<< sliding_window_k_sub_array_sum(vec,3) << endl<<endl;
    vector<double> res = sliding_window_k_sub_array(vec,3);
    cout << "The sub array:" << endl;
      cout << "{";
    for(size_t i = 0; i < res.size() ;++i){
        cout << res[i];
        if(i != res.size() - 1){
            cout << ", ";
        }
    }
    cout << "}"<<endl<<endl;
    



    return 0;
}