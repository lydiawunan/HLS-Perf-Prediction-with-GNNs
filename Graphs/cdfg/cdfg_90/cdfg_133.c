#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 358306098
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, short p_17)
{
  char v_19;
  unsigned long v_15;
  unsigned int v_13;
  float v_11;
  unsigned int v_8;
  unsigned long v_6;
  unsigned long v_4;
  unsigned short v;
  long result;
  v_19 = (char)p;
  v_15 = 4294958476UL;
  v_11 = (float)p_17;
  v_8 = (unsigned int)p_17;
  v_6 = (unsigned long)p_17;
  v_4 = (unsigned long)p_17;
  result = -875208297L;
  if ((unsigned long)(! (! p) * ~ (18U % (v_8 + 658U))) == 4235010909UL) {
    v = (unsigned short)((91UL * ((unsigned long)v_11 / (v_15 + 919UL))) * (unsigned long)(
                         - p / 831U));
    v_6 = (unsigned long)((unsigned int)((float)(- v_6) - v_11) + p);
    v_11 = (float)29401L;
  }
  else {
    v = (unsigned short)(~ (((long long)v_19 + -24871LL) - (long long)p));
    v_4 = (unsigned long)(- ((unsigned int)((int)p_17 / 56871) - p % 497024945U));
    v_6 = ! (v_4 % 880600740UL) % (~ v_4 + 972UL);
  }
  while ((unsigned long)(772200814 + (int)(- (- v))) >= (v_4 * v_6) % (unsigned long)(
                                                        v_8 + 1014U) >> (
                                                        p & 31U)) {
    v_6 = (unsigned long long)v_11 + 18446744073145556668ULL;
    v_13 = ! v_8;
    v_11 = (float)v_6;
    v = (unsigned short)(0UL % (unsigned long)(- v_13 + 747U));
  }
  while_0_break: ;
  return result;
}


