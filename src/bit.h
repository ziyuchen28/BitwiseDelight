#ifndef BIT_MANIP_LIB_H
#define BIT_MANIP_LIB_H


bool is_even(int n);
bool is_bit_set(int n, int k);
void set_bit(int &n, int k);
void clear_bit(int &n, int k);
void xor_swap(int &a, int &b);
int count_set_bits(int n);
bool is_power_of_two(int n);
int get_lowest_set_bit(int n);
int safe_add(int a, int b);
int safe_mul(int a, int b);
bool has_alternating_bits(int);
int get_msb(int);

#endif // BIT_MANIP_LIB_H
