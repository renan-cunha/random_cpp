#ifndef RANDOM_CPP_RANDOM
#define RANDOM_CPP_RANDOM

/* Return a random integer N such that a <= N <= b */
int randint(int min, int max);

/* Return a random floating point number N such that a <= N <= b */
float uniform(float min, float max);

/* Gaussian distribution. stddev is the standard 
 * deviation. */
float gauss(float mean, float stddev);

#endif
