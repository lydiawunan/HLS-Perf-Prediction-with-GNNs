#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 852700543
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, long long p_13, char p_17)
{
  double v_23;
  int v_21;
  unsigned short v_19;
  int v_15;
  long long v_10;
  unsigned long long v_8;
  signed char v_6;
  long v_4;
  unsigned short v;
  unsigned long result;
  v_23 = (double)p;
  v_21 = (int)p;
  v_19 = (unsigned short)46626;
  v_15 = (int)p;
  v_10 = 29601LL;
  v_4 = 37696L;
  result = (unsigned long)p_13;
  while (0 >= ! (0 / (((int)p_17 + (int)v_19) + 948))) {
    v_21 = v_23 * 8.00477341215e+37;
    v_23 = (double)(~ (- (v_15 + (int)-5862880768.f)));
    result = (unsigned long)(! (99 * (int)p));
    v_19 = (unsigned short)((-957 - (int)p / 214) + v_15);
  }
  while_0_break: ;
  if ((long long)(((55328UL - (unsigned long)p) + ~ result) * 8580UL) > 
      p_13 % (long long)(- v_15 + 794) + (long long)(! p_17)) {
    v = (unsigned short)14650;
    result = (unsigned long)(! (((long long)v * 806360328LL) % 81394357LL));
    result = ~ (- ((unsigned long)v - result));
  }
  else {
    v_6 = (signed char)p;
    v_8 = (unsigned long long)(-147261LL / (v_10 + 376LL));
    result = (unsigned long)((unsigned long long)v_4 + ((unsigned long long)(~ v_6) - v_8));
  }
  return result;
}


