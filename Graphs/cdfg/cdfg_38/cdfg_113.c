#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 728291292
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, signed char p_5, unsigned char p_7,
              unsigned char p_9, long p_23)
{
  double v_27;
  float v_25;
  int v_21;
  char v_19;
  long long v_17;
  short v_15;
  long long v_13;
  unsigned char v_11;
  long long v;
  long long result;
  v_27 = 4677294180.11;
  v_25 = (float)p_9;
  v_21 = (int)p_5;
  v_19 = (char)-38;
  v_17 = -11197LL;
  v_15 = (short)-22553;
  v_13 = (long long)p;
  v_11 = p_9;
  while ((unsigned int)p_9 - (3280481173U - (unsigned int)p_7) * (unsigned int)v_21 != 4294947092U) {
    v_11 = (unsigned long long)v_25 % 589248910ULL;
    v_25 = (float)(- ((double)v_17 / (v_27 + 180.) - (double)(v_13 - v_13)));
    v_15 = (short)(~ ((p_23 % (long)((int)v_11 + 1021)) * (long)((int)p_9 % (
                                                                 (int)p_7 + 295))));
    v_21 = (int)((long long)v_11 - - (v_17 + (long long)v_11));
  }
  while_0_break: ;
  if (-470497LL % (long long)((int)v_11 + 204) != ((v_13 | (long long)v_15) * (
                                                   v_17 + (long long)v_19) ^ (long long)(
                                                   (long)v_21 % (p_23 + 271L) << (
                                                   ((int)p - 23) & 31)))) {
    v = (long long)((unsigned int)((int)(~ p_5) & (int)p * (int)p) * 3421358626U);
    result = ! (v * (long long)(! p));
  }
  else result = (long long)p_7 - 0LL % (long long)(((int)p_9 - (int)p_5) + 381);
  return result;
}


