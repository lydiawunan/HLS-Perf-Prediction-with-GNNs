//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1027872975
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, char p_4, unsigned short p_11)
{
  unsigned long v_15;
  unsigned long v_13;
  unsigned short v_9;
  unsigned long v_7;
  int v;
  signed char result;
  v_15 = 35618UL;
  v_9 = (unsigned short)35884;
  v_13 = (unsigned long)-1.03713028874e+37;
  v_7 = ((unsigned long)p * ((unsigned long)((int)v_9 / ((int)p_11 + 629)) ^ 
                             v_13 / (v_15 + 592UL))) % 225UL;
  v = ~ 275338367;
  result = (signed char)((long long)p * ((long long)((int)p_4 * ~ v) + - (
                                         (long long)v_7 - 189888208LL)));
  return result;
}


