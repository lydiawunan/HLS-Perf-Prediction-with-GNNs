#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 403685059
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, unsigned long long p_5[2][3][4], unsigned long p_7,
         unsigned short p_11[5], long long p_13)
{
  signed char v_15;
  char v_9;
  int v;
  long result;
  v_15 = (signed char)p_11[3];
  v = (int)p_7;
  result = -35206L;
  v_9 = (char)(~ ((int)p_11[4] >> (~ v & 15)) >> ((125ULL * (32490ULL - (unsigned long long)v_15) - (unsigned long long)(! (! p_13))) & 31ULL));
  v = (int)((long long)((unsigned long)(! (~ result)) | (p_7 - (unsigned long)p) / 208UL) % (
            ((long long)((int)v_9 * (int)p_11[4]) * (p_13 / (long long)(
                                                     v + 745)) - (long long)v_15) + 73LL));
  result = (long)(! (! ((unsigned long long)(- p) - (unsigned long long)v * p_5[0][2][3])));
  result = - p / (result + 153L);
  return result;
}


