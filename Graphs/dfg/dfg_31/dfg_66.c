#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 756324020
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, double p_9, char p_11)
{
  long long v_13;
  unsigned int v_7;
  float v_5;
  char v;
  double result;
  v_13 = 22996LL;
  v_7 = (unsigned int)p;
  v = (char)p;
  result = (double)v_13;
  v_5 = (float)((unsigned long long)v_7 % ((18446744073709551578ULL + 
                                            ~ p % (unsigned long long)(
                                            (int)p_11 * (int)((char)result) + 157)) + 880ULL));
  v_7 = (unsigned int)p;
  result = (double)((int)((float)v + ((float)p / (v_5 + 81.f)) * (float)v_7) | 
                    (int)(- (- p_9)) % -1);
  return result;
}


