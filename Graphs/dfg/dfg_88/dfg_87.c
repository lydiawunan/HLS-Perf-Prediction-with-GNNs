#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 101514561
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, char p_9[5], unsigned long p_11)
{
  signed char v_15;
  unsigned long long v_13;
  float v_7;
  long long v_4;
  signed char v;
  double result;
  v_15 = (signed char)p_11;
  v_13 = (unsigned long long)p;
  result = (double)p_9[2];
  v_7 = (float)((unsigned long long)(-998092032 * ((int)p + (int)p_9[0])) ^ 
                (((unsigned long long)p_11 % (v_13 + 878ULL)) * (unsigned long long)(
                 (int)p_9[2] & (int)v_15)) % (unsigned long long)(- (
                                                                  (int)p - (int)v_15) + 979));
  v_4 = (long long)(((int)((char)(- ((float)p - v_7))) - (int)(- p_9[1])) + (int)(
                    (float)(23676 ^ ((int)p_9[4] - 439)) / -4084074496.f));
  v = (signed char)(18446744073709551514ULL + ! (((unsigned long long)-1.65331449263e+38 * 10302ULL) * (unsigned long long)v_4));
  result = 0. * ((double)v - - (- result));
  return result;
}


