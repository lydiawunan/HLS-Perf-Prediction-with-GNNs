#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 651400975
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, short p_5[1][4], int p_9, long long p_11,
                  short p_13)
{
  double v_17;
  short v_15;
  short v_7;
  long long v;
  unsigned char result;
  v_17 = 1643736168.77;
  v_7 = (short)-11127;
  v_15 = (short)v_17;
  v = (long long)(((int)p_13 * (int)(! v_15)) % ((int)(~ p_13) + 492) + (int)v_15);
  result = (unsigned char)((long long)((int)p_5[0][1] / ((int)(! v_7) + 295) << (
                                       37875LL / (long long)((int)p_5[0][0] % (
                                                             p_9 + 794) + 755) & 31LL)) & 
                           ((long long)v_7 * (39484LL / (p_11 + 241LL))) * (long long)(
                           0 / (((int)p + (int)v_7) + 235)));
  result = (unsigned char)(7033LL % (~ ((long long)((int)result >> ((int)p & 7)) * (
                                        215LL / (v + 84LL))) + 258LL));
  return result;
}


