#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 113234051
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, unsigned long p_15)
{
  float v_17;
  unsigned long v_13;
  short v_11;
  int v_9;
  unsigned int v_7;
  unsigned long long v_5;
  long v;
  unsigned short result;
  v_17 = (float)p_15;
  v_13 = 4294902117UL;
  v_11 = (short)-6084;
  v_9 = (int)p_15;
  v_7 = 504648451U;
  v_5 = 18446744073602593195ULL;
  v = 389690925L;
  result = (unsigned short)p;
  while ((unsigned long long)(~ ((v_7 << (p & 31U)) * (p ^ p))) < 18446744072727132025ULL % (
                                                                  ! (
                                                                  18446744072983800091ULL % (unsigned long long)(
                                                                  p + 494U)) + 168ULL)) {
    v_13 = (unsigned long)(-2.21926271632e+38 - (double)(- v_7 ^ (unsigned int)(
                                                         (float)v_13 * v_17)));
    result = (unsigned short)p_15;
    v_7 = (unsigned int)((double)(- (! p)) / 141.00000514);
  }
  while_0_break: ;
  while ((unsigned long long)(! ((unsigned long)v * (unsigned long)p) - (unsigned long)(
                              -80 >> 3)) <= ! (~ (! v_5))) {
    v_11 = (unsigned int)v_11 - (unsigned int)v_9 % ((v_7 - (unsigned int)7332877190.38) + 492U);
    result = (unsigned short)0;
    v_7 = p;
    v_5 = (unsigned long long)(~ (- ((unsigned long)p | (unsigned long)v)));
  }
  while_0_break_0: ;
  return result;
}


