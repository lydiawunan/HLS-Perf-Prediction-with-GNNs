#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 744768899
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p[4], short p_4, unsigned long p_6, double p_9,
                unsigned char p_13)
{
  unsigned long long v_17;
  char v_15;
  int v_11;
  double v;
  signed char result;
  v_17 = 18446744073575794887ULL;
  v_15 = (char)-9;
  v_11 = 61098;
  result = (signed char)116;
  if ((unsigned long long)result / (((unsigned long long)(- v_11) - v_17) + 252ULL) > v_17) {
    v_11 = (int)v_15;
    v = (double)p_13;
    v = - p_9 * -19752. + (double)((unsigned long)(v_11 % ((int)v + 275)) - (
                                   (unsigned long)p_13 ^ p_6));
  }
  else {
    v = - ((double)((unsigned long long)p_13 / 18446744073709544352ULL) * (
           p_9 + -62888.));
    v = (double)((unsigned long)(! ((int)p_4 % ((int)((short)v) + 670))) % (
                 (~ p_6 ^ (unsigned long)(! p_4)) + 924UL));
    result = (signed char)-12;
  }
  result = (signed char)(((unsigned long)(p[1] - 991940796U) - ((unsigned long)p_4 + p_6)) + (unsigned long)(
                         0 / ((int)((short)((double)result * v)) + 886)));
  return result;
}


