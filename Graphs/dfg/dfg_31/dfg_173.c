#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 411899022
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, char p_4, unsigned int p_6, float p_8, unsigned int p_13)
{
  double v_11;
  long long v;
  int result;
  v_11 = (double)(2143 | (int)p / -9753);
  v = (long long)((unsigned long)-2.26905147429e+36f + 0UL / (unsigned long)(
                                                       ~ (- p_13) + 792U));
  v = (long long)(! (- (18446744072871867284ULL * (unsigned long long)v_11) / (unsigned long long)(
                     ! v + 296LL)));
  result = (int)((unsigned int)p / (! ((unsigned int)p_4 % (p_6 + 398U)) + 418U) + (unsigned int)(- (
                 p_8 / ((float)(~ v) + 782.f))));
  return result;
}


