#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 589653352
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, unsigned short p_4[4], unsigned long long p_11,
         unsigned int p_13)
{
  char v_19;
  char v_17;
  unsigned char v_15;
  unsigned char v_9;
  unsigned int v_7;
  signed char v;
  long result;
  v_19 = (char)114;
  v_17 = (char)p;
  v_15 = (unsigned char)p;
  v_9 = (unsigned char)96;
  v_7 = (unsigned int)v_19;
  result = (long)((long long)((p_13 >> 21U) - (unsigned int)v_15 * v_7) - 
                  (long long)v_17 % (p + 559LL));
  v = (signed char)((unsigned long long)(- ((v_7 >> ((int)p_4[2] & 31)) % (unsigned int)(
                                            (int)v_9 + 200))) + 4294984642ULL / (
                                                                p_11 + 124ULL));
  result = (long)((! ((long long)result | p) ^ 6LL) / (long long)(((int)(! p_4[3]) % (
                                                                   (int)v / (
                                                                   (int)((signed char)3.38051038193e+38f) + 48) + 480) & (int)-1.0626460094e+38) + 344));
  return result;
}


