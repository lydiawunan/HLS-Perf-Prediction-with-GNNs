#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 699086103
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, unsigned short p_9)
{
  long long v_17;
  long v_15;
  char v_13;
  char v_11;
  double v_6;
  float v_4;
  unsigned long long v;
  unsigned long result;
  v_17 = 46482LL;
  v_15 = 1021370699L;
  v_13 = (char)44;
  v_11 = (char)p_9;
  v_4 = (float)((unsigned long long)((long long)1.03671548272e+38 / (
                                     -207528738LL / (long long)((int)(! v_11) + 731) + 182LL)) - 
                (unsigned long long)(~ ((int)v_11 % ((int)v_13 + 1014))) / (
                ((unsigned long long)((long long)v_15 | v_17) + 18446744073709491420ULL) + 992ULL));
  v_6 = (double)p_9;
  v = (unsigned long long)(v_6 / ((double)p + 80.) - 704.421936035);
  result = (unsigned long)(v * (unsigned long long)v_4);
  return result;
}


