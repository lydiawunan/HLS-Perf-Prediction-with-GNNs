#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 516088703
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, long p_7[1][5], unsigned short p_9,
                   long long p_11, unsigned long p_13)
{
  double v_19;
  unsigned short v_17;
  char v_15;
  long long v_5;
  short v;
  unsigned short result;
  v_19 = -2.33235125181e+38;
  v_15 = (char)p;
  v_17 = (unsigned short)((long long)p + ((long long)v_15 * p_11) % 28LL);
  if (-107 > ((int)(~ v_15) & -9) - ((int)(! v_17) >> ((int)((unsigned short)(
                                                       -557.632202148 / (
                                                       v_19 + 93.))) & 15))) {
    v_5 = (long long)(- p_9);
    v = (short)(((long long)(338UL / (p + 435UL)) + v_5) - (long long)p_7[0][1]);
    result = (unsigned short)(733124548L - (long)v);
  }
  else result = (unsigned short)(((p_11 & p_11) + (long long)(p_13 * (unsigned long)p_7[0][1])) * -11816LL);
  return result;
}


