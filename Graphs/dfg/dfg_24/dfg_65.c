#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 728484458
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, char p_5, unsigned long p_7[1], long p_13)
{
  long long v_15;
  unsigned long long v_11;
  unsigned short v_9;
  double v;
  unsigned short result;
  v_15 = 435981565LL;
  v_11 = 18446744073709502845ULL;
  v = -1.18540756706e+37;
  result = (unsigned short)p_13;
  v_11 = (((unsigned long long)(~ p_13) % ((9679ULL + v_11) + 103ULL)) / (
          (unsigned long long)((double)v_11 / (v + 579.) - - v) + 172ULL)) * (unsigned long long)(~ v_15);
  v_9 = (unsigned short)(p - (unsigned int)((double)p_5 / (- v + 811.) + (double)(
                                            (unsigned long long)v * v_11 & (unsigned long long)(
                                            3576761127UL % (p_7[0] + 878UL)))));
  v = (double)(char)76;
  result = (unsigned short)((unsigned long)(p + (unsigned int)v) % ((
                                                                    (unsigned long)(
                                                                    p % (unsigned int)(
                                                                    (int)p_5 + 201)) + 
                                                                    p_7[0] * (unsigned long)result) * (unsigned long)(~ v_9) + 603UL));
  return result;
}


