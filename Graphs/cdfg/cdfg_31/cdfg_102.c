#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 245409738
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, int p_5, unsigned long long p_9,
              long long p_11[4][4][5], float p_13[2])
{
  short v_15;
  unsigned short v_7;
  int v;
  long long result;
  v_15 = (short)-28071;
  result = 31269LL;
  v_7 = (unsigned short)v_15;
  if ((unsigned long long)(- (266796196LL % (result + 122LL))) % (((unsigned long long)(~ p_11[2][0][0]) | 
                                                                   p_9 % (
                                                                   p_9 + 138ULL)) + 565ULL) == (unsigned long long)(~ (
      (unsigned long)(p_13[1] / ((float)result + 987.f)) % 607744UL))) 
    result = (long long)(13282 - (int)p);
  else {
    v = (int)(~ result);
    v_7 = (unsigned short)((unsigned long)p | ((unsigned long)(~ v_7) + 84010545UL));
    result = (long long)((unsigned long long)((result + (long long)v) - (long long)(
                                              p_5 / ((int)v_7 + 491))) / (
                         p_9 / (unsigned long long)(p_5 % (p_5 + 637) + 787) + 613ULL));
  }
  return result;
}


