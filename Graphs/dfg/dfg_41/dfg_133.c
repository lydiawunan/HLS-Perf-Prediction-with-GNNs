#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 160434015
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, int p_5, char p_7, signed char p_11,
          unsigned long long p_19)
{
  short v_17;
  unsigned long v_15;
  int v_13;
  double v_9;
  unsigned char v;
  short result;
  v_17 = (short)p;
  v_15 = (unsigned long)p_7;
  v_13 = (int)((float)(- (204 * (int)(! v_17))) + - ((float)p_19 - ((float)p_7 + -296.966125488f)));
  v_9 = (double)v_15;
  v = (unsigned char)(! ((-1018916380L % (long)(v_13 + 313)) * (long)(
                         11522 / (v_13 + 608))) ^ 113L);
  result = (short)(((unsigned long long)v + (- p - (unsigned long long)(
                                             p_5 + (int)p_7))) / (unsigned long long)(
                   (-370410689LL - (140336585LL + (long long)(v_9 + (double)p_11))) + 605LL));
  return result;
}


