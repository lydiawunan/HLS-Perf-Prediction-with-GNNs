#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 218230171
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, unsigned long long p_5[3],
                  unsigned char p_7, unsigned short p_11, short p_13)
{
  unsigned long long v_15;
  long v_9;
  short v;
  unsigned long result;
  v_15 = (unsigned long long)p_11;
  v_9 = (long)(((34215ULL % (v_15 + 720ULL)) % 24ULL) % ((- p_5[1] + 51575ULL) + 526ULL));
  if ((long long)v_9 * ((long long)(- p_11) + ((long long)p_13 ^ -52900LL)) == (long long)(
      (long)(- ((int)p_13 - (int)p_7)) + v_9)) {
    v = (short)(p_5[1] / (unsigned long long)((int)p_7 + 885));
    result = (unsigned long)((double)((int)(! p) * (int)((unsigned char)(
                                      (double)v * -9119423761.32))) + -53876.1096768);
  }
  else result = 4294954299UL;
  return result;
}


