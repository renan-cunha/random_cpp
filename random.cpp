#include "random.h"
#include <random>

std::random_device rd;     // only used once to initialise (seed) engine
std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)

int randint(int min, int max){
    std::uniform_int_distribution<int> uni(min,max); // guaranteed unbiased
    return uni(rng);
}

float uniform(float min, float max){
    std::uniform_real_distribution<> dis(min,max);
    return dis(rng);
}

float gauss(float mean, float stddev){
    std::normal_distribution<> d{mean, stddev};
    return d(rng);
}
