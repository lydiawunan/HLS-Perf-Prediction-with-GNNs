#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 666383434
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, unsigned short p_5, unsigned long p_11)
{
  long long v_9;
  char v_7;
  long v;
  long long result;
  v = 40585L;
  v_9 = (long long)(! (! ((unsigned long)((int)p_5 % 15322) * (p_11 * 39UL))));
  v_7 = (char)((unsigned long long)(p / (long)((int)(! p_5) + 362)) % (
               - (18446744073709530520ULL / (unsigned long long)(p + 748L) ^ 6702ULL) + 350ULL));
  result = (long long)(- v) | ((long long)(! (p - (long)p_5)) | (((long long)v_7 | v_9) - (long long)(
                                                                 3819266125U % (
                                                                 (unsigned int)6049294848.f + 248U))));
  return result;
}


