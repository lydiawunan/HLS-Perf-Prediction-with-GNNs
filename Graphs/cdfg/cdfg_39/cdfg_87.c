#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 732312979
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, unsigned short p_4, unsigned int p_6, signed char p_8,
           signed char p_10)
{
  int v_17;
  unsigned long long v_15;
  signed char v_13;
  short v;
  double result;
  v_17 = (int)p_4;
  v_15 = (unsigned long long)p;
  if (- (18446744070769910575ULL - 31048ULL / (v_15 + 156ULL)) <= (unsigned long long)v_17) {
    v_13 = (signed char)(! (~ (unsigned char)20));
    v = (short)(! p_6 / (unsigned int)(~ ((int)p_4 + (int)v_13) + 901));
  }
  else {
    result = (double)18446744073144772219ULL;
    result = (double)((unsigned int)(result / ((result + (double)p_6) + 634.)) % 4294950528U);
    v = (short)((unsigned int)(! ((int)p_8 % ((int)((signed char)result) + 1009))) / (
                p_6 + 447U));
  }
  if (4294966808U != (((unsigned int)p_4 * p_6) / (unsigned int)((int)(~ p_8) + 792) & (unsigned int)(
                      (int)p_10 + (-90 + (int)v)))) result = p;
  else result = (double)(~ ((int)((char)6553474994.74) - 44));
  return result;
}


