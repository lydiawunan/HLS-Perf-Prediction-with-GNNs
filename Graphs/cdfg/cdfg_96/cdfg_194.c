#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 204105465
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, float p_4, float p_7, unsigned long long p_9,
           unsigned int p_13)
{
  signed char v_15;
  signed char v_11;
  signed char v;
  double result;
  v_15 = (signed char)p_9;
  v_11 = (signed char)-63;
  if ((- p_9 ^ (unsigned long long)((int)v_11 | 441725609)) % (unsigned long long)(
      ! p_13 + 103U) == (~ (p_9 - 18446744073709551611ULL) & (unsigned long long)(! (
                         209 - (int)v_15)))) {
    v = (signed char)p_7;
    result = (double)v;
    result = (double)(- (p_4 / -20992.f)) / (-2501320192. / (result + 26.) + 670.);
  }
  else result = (double)(unsigned char)167;
  result = ((double)(! p) / ((result - 955311964.) + 227.)) * (double)(
           (int)p / 855);
  return result;
}


