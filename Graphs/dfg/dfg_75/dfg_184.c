#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 807630375
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, long long p_7, long p_9, long long p_13)
{
  unsigned short v_11;
  double v_4;
  int v;
  short result;
  v_11 = (unsigned short)38716;
  result = (short)((long long)(~ ((unsigned long)v_11 / 778541376UL)) - ! (- p_13));
  v_4 = (double)result;
  v = (int)((long long)(- (-24703 & (int)((short)v_4)) / (514844031 % (
                                                          ((int)p + 5) + 171) + 550)) - 
            (long long)((int)p / ((int)result + 244)) * (- p_7 & (long long)p_9 * -388631814LL));
  result = (short)v;
  return result;
}


