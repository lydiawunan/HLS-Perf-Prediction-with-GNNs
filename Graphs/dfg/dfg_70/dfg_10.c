#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1034161497
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, float p_5, unsigned int p_7, char p_11,
              unsigned long long p_13)
{
  char v_15;
  unsigned char v_9;
  long v;
  long long result;
  v_9 = (unsigned char)103;
  v = (long)p_5;
  result = -459089078LL;
  v_15 = (char)((long long)(6162 % (25892 * (int)v_9 + 807)) / (result + 741LL));
  v_9 = (unsigned char)((unsigned long)(p_5 + (float)p_13) / ((4294967212UL + (
                                                               (unsigned long)(
                                                               (float)v * 1.70667593119e+38f) - (
                                                               (unsigned long)v_15 - 4294943006UL))) + 601UL));
  v = (long)(- (p_13 % (unsigned long long)(p_7 + 737U) & (18446744073709519957ULL | (unsigned long long)p_7)) ^ (unsigned long long)(! result));
  result = (long long)((float)((-24868L + ((long)p + v)) / (long)((int)((char)(
                                                                  p_5 + (float)p_7)) % 720 + 1020)) + 
                       (float)((int)v_9 & 46307 % ((int)p_11 + 739)) * -2.06933149963e+38f);
  return result;
}


