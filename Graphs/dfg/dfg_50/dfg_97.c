#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 578050051
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, unsigned char p_5, float p_9, unsigned int p_11,
           unsigned long long p_13)
{
  double v_15;
  unsigned long long v_7;
  char v;
  double result;
  v_15 = (double)p_11;
  v = (char)-6;
  v_7 = ~ (! (! p_13)) * (unsigned long long)(- ((unsigned int)p_9 / (
                                                 p_11 + 283U)) % ((unsigned int)(
                                                                  - v_15 * -5785762885.16) + 764U));
  v = (char)(((double)v / 818.999998957) / ((double)(((unsigned long long)-169.294163761 - 
                                                      (unsigned long long)p_5 % (
                                                      v_7 + 407ULL)) / (unsigned long long)(
                                                     (unsigned int)(p_9 * 463.776885986f) % (
                                                     ~ p_11 + 440U) + 927U)) + 511.));
  result = (double)(702801077ULL * ~ ((unsigned long long)(- p) - 18446744073709494940ULL / (unsigned long long)(
                                                                  (int)v + 403)));
  return result;
}


