#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 719130641
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, unsigned long p_5[3][4])
{
  int v_7;
  unsigned short v;
  signed char result;
  v = (unsigned short)56258;
  v_7 = (int)((unsigned int)v - 272960863U * (unsigned int)(81 / ((int)((unsigned char)-1.72723128625e+38) + 991)));
  v = (unsigned short)(p_5[2][1] / (unsigned long)(~ v_7 + 740));
  result = (signed char)((unsigned long long)(3584 % (-19209 * (int)p + 570)) % (
                         (((unsigned long long)v - 18446744072997806217ULL) & (unsigned long long)(- (
                          p_5[0][3] - 34506UL))) + 306ULL));
  return result;
}


