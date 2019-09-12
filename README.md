# Random Methods for C++

Simple methods. Seed and generators aren't necessary

## Methods Implemented

- [x] Random Integer
- [x] Uniform Random Real
- [x] Normal/Gaussian Random Real

## Usage

```cpp
#include "random.h"
#include <iostream>

int main(){
    // Random integer
    int var = randint(-1, 1);
    std::cout << "\nRandom Integer: " << var;

    // Random Uniform Distribution
    float var2 = uniform(-1, 1);
    std::cout << "\nRandom Uniform Real: " << var2;
    
    // Random Normal Distribution (mean, stddev)
    float random_normal = gauss(0, 1);
    std::cout << "\nRandom Normal Real: " << random_normal;
}
```
