#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 543584179
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p[3][5][4], double p_5, int p_13, unsigned char p_17)
{
  unsigned long v_21;
  unsigned long v_19;
  short v_15;
  unsigned long long v_11;
  int v_9;
  unsigned int v_7;
  float v;
  long long result;
  v_21 = (unsigned long)p_17;
  v_15 = (short)p_13;
  v_11 = 50069ULL;
  v_7 = 4294941867U;
  v = -651.26184082f;
  result = (long long)p_17;
  if ((unsigned long)p_13 > v_21) {
    v = (float)((int)((unsigned char)-2.49221677227e+38) - (int)(! (- p_17)));
    v_9 = (int)(- ((double)v_15 - p_5) * 8.41040013387e+36);
    v_7 = (unsigned int)((long long)v_9 / (23828LL % ((37449LL & (long long)p_13) + 658LL) + 828LL));
  }
  else {
    v = (float)((double)(- v) * ((-1.25999264586e+38 / ((double)p_13 + 944.)) * - p_5));
    v_19 = (unsigned long)((unsigned long long)p_17 + (104ULL - - v_11));
    v_9 = (int)(62719UL & - (734742453UL % (v_19 + 445UL)));
  }
  while ((unsigned long)(0L / (p[2][0][0] + 494L)) < (unsigned long)(
         (unsigned int)(- v - 39605.f) - ! ((unsigned int)p_5 | v_7))) {
    v_11 = (unsigned long long)v_9 ^ 24506ULL;
    result = (long long)(~ v_11);
    v = (float)(p_5 * 10215.);
    v_7 = 33458U;
  }
  while_0_break: ;
  return result;
}


