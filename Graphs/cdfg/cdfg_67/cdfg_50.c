#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 767266222
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, long long p_13[1])
{
  long long v_15;
  float v_10;
  double v_8;
  unsigned int v_6;
  long v_4;
  long v;
  unsigned long result;
  v_15 = (long long)p;
  v_10 = (float)p;
  v_8 = (double)p_13[0];
  v_6 = (unsigned int)p_13[0];
  v_4 = (long)p;
  v = (long)p_13[0];
  result = (unsigned long)p;
  if (! (p * (unsigned long long)-1428411202.3 - (unsigned long long)(
         p_13[0] * (long long)v_10)) >= 0ULL) {
    v_10 = (float)(! p << ((- p - 18446744073709497648ULL) & 63ULL));
    v_4 = (long)((p * (unsigned long long)p_13[0]) * (unsigned long long)(
                 (long long)v_4 & v_15) + (unsigned long long)((float)p_13[0] + v_10));
    v_10 = (float)((unsigned long)(v_8 * (double)(! p_13[0])) * 4294959813UL);
  }
  else {
    v_6 = (unsigned int)(~ ((p_13[0] * 26117LL) % 4294967191LL));
    v_8 = (double)(! (~ (p_13[0] - p_13[0])));
    v_8 = (double)((int)v_8 % 379);
  }
  while ((unsigned long)(v << 29ULL) % (((unsigned long)v_4 + result) + 439UL) < (unsigned long)v_6) {
    v_10 = (double)v_10 + (v_8 - 1.84467440733e+19);
    result = (unsigned long)(- (- v));
    v_8 = (double)result;
    v_4 = (long)(3944439451ULL / (p + 366ULL));
  }
  while_0_break: ;
  return result;
}


