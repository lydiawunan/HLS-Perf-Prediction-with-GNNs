#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 793129611
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p)
{
  double v_19;
  unsigned char v_17;
  int v_15;
  long long v_13;
  short v_11;
  unsigned long long v_9;
  unsigned long v_7;
  unsigned int v_5;
  float v;
  long result;
  v_19 = (double)p;
  v_17 = (unsigned char)p;
  v_13 = (long long)p;
  v_11 = (short)p;
  v_9 = 746980261ULL;
  v_7 = 361040195UL;
  v_5 = 3492642085U;
  v = (float)p;
  v_9 = - v_9 * (unsigned long long)(- v) - (unsigned long long)p;
  if ((long)(~ (62784 % ((int)v_17 + 860)) + (int)(-731.967590332f + (float)p)) > 
      ! p + (long)((int)((short)(- v_19)) % 17370)) {
    v_9 = ((unsigned long long)(- v_13) % (v_9 + 535ULL)) / (unsigned long long)(
          ! (~ v_13) + 421LL);
    v = (float)(85ULL * ((unsigned long long)(965671601UL * v_7) / ((
                                                                    v_9 - (unsigned long long)v_11) + 652ULL)));
    result = (long)((- v - (float)((unsigned long)p + 3313953297UL)) / (
                    (float)(- ((unsigned long)v_5 - v_7)) + 19.f));
  }
  else {
    v_15 = -9;
    result = (long)v_15;
  }
  return result;
}


