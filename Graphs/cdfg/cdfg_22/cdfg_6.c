#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 429260932
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, unsigned short p_11, float p_13, int p_17)
{
  unsigned long v_23;
  long long v_21;
  long long v_19;
  char v_15;
  signed char v_9;
  char v_7;
  unsigned int v_5;
  short v;
  int result;
  v_23 = 190997676UL;
  v_21 = -48628LL;
  v_19 = (long long)p_17;
  v_15 = (char)-17;
  v_7 = (char)1;
  v_5 = 319305847U;
  v = (short)23726;
  result = -22660;
  if (v_23 >= (unsigned long)((unsigned int)v % (v_5 + 282U))) {
    v = (short)((float)((long long)p_13 >> (p * 191LL & 63LL)) / (((float)(
                                                                   35LL & p) + 
                                                                   p_13 / (
                                                                   (float)v_15 + 782.f)) + 606.f));
    v_5 = 852U;
    result = - ((int)(! v) / ((int)(! v_7) + 895));
  }
  else {
    v_21 = ! (- (~ v_21));
    v_7 = (char)((long long)p_13 * ((long long)p_17 % (v_19 + 606LL)) - (
                 v_21 % (v_21 + 956LL) | (-1000380888LL >> ((int)v & 63))));
    v_5 = (unsigned int)642.530777802;
  }
  while (p == 190869874LL / (long long)((int)(- v) + 571)) {
    v = (unsigned long long)v_5 * 30029ULL;
    v_9 = (signed char)(~ (38744UL - (unsigned long)p_11) + (383548789UL + (unsigned long)v));
    result = -36188;
    v = (short)(- (315676711ULL >> ((int)v_7 & 63)) / (unsigned long long)(
                (int)v_9 + 294));
  }
  while_0_break: ;
  return result;
}


