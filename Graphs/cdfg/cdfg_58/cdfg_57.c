#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 284599243
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, short p_9, long long p_13, unsigned short p_15,
        signed char p_17)
{
  signed char v_19;
  unsigned long long v_11;
  float v_7;
  long long v_5;
  unsigned long v;
  int result;
  v_19 = (signed char)-60;
  v_11 = (unsigned long long)p_17;
  v_7 = 783.200439453f;
  v_5 = (long long)p_17;
  v = 3675715318UL;
  result = (int)p_15;
  if (((long long)(! p_17) * ((long long)v ^ p_13)) / (long long)(v + 463UL) > (long long)(
      ((int)(! p_17) + (int)(- v_19)) & (int)(~ p_17))) {
    v_7 = (float)(((long long)p + p_13) / (long long)((int)p_15 + 442));
    v_5 = (long long)((float)(~ (v >> (p & 31))) - 1.13605183635e+38f);
    v_11 = (unsigned long long)(- (! 1014079497L));
  }
  else {
    result = 15689;
    v_11 = v_11;
    v = (unsigned long)((int)((char)(v_7 + 38909.f)) - -14);
  }
  while ((127 & (result - 31381)) >= p) {
    v_5 = v_7 - (float)(v_5 - (long long)(v / 4294949514UL));
    v_7 = (float)v_11;
    v = (unsigned long)(114 % (((int)(~ p_9) + -27393) + 571));
    result = (int)(- (v_7 + 0.f));
  }
  while_0_break: ;
  return result;
}


