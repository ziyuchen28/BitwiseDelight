#include "bit.h"
#include <climits>


bool is_even(int n) 
{
    return (n & 1) == 0;
}


bool is_bit_set(int n, int k) 
{
    return (n & (1 << k)) != 0;
}


void set_bit(int &n, int k) 
{
    n |= (1 << k);
}


void clear_bit(int &n, int k) 
{
    n &= ~(1 << k);
}


void xor_swap(int &a, int &b) 
{
    if (&a == &b) return;
    a ^= b;
    b ^= a;
    a ^= b;
}

int count_set_bits(int n) 
{
    int count = 0;
    while (n > 0) {
        n &= (n - 1);
        count++;
    }
    return count;
}


bool is_power_of_two(int n) 
{
    return n > 0 && (n & (n - 1)) == 0;
}


int get_lowest_set_bit(int n) 
{
    return n & -n;
}


int safe_add(int a, int b) 
{
    int r = a + b;
    if (((a ^ r) & (b ^ r)) < 0) return INT_MAX;
    return r;
}

int safe_mul(int a, int b)
{
    int r = a * b;
    if (r / a != b) return INT_MAX;
    return r;
}

bool has_alternating_bits(int n) {
  int result = n ^ (n >> 1);
  return (result & (result + 1)) == 0;
}

int get_msb(int n) {
  n |= n >> 1;
  n |= n >> 2;
  n |= n >> 4;
  n |= n >> 8;
  n |= n >> 16;
  n = n + 1;
  return n >> 1;
}




