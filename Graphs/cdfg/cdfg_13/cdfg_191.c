#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 460572238
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, unsigned long long p_11)
{
  short v_15;
  unsigned short v_13;
  signed char v_9;
  long long v_7;
  char v_5;
  int v;
  unsigned long long result;
  v_15 = (short)p;
  v_13 = (unsigned short)p;
  v_9 = (signed char)p_11;
  v_5 = (char)p_11;
  v = -47187;
  if (- (! (890771762LL - (long long)v_9)) == (long long)((unsigned long)(
      (int)v_15 % 88 >> (((unsigned long long)p + p_11) & 31ULL)))) {
    result = (unsigned long long)v_13;
    result = - (31269ULL + result);
    v_5 = v_5;
  }
  else {
    v = (int)(~ ((unsigned long)(~ v_15) / (((unsigned long)p - 46263UL) + 764UL)));
    v_9 = (signed char)(! 644479846U);
    result = (unsigned long long)(~ (~ ((int)((signed char)-8.24999232085e+37) << (
                                        (int)v_9 & 7))));
  }
  while (-72 <= (((int)p + (int)p) - 83) - ! v * 29599) {
    v_7 = (unsigned long long)v_5 + 6565ULL;
    result = p_11 / 18446744073709551538ULL;
    v_5 = (char)((int)p / 15825);
    v = (int)(((long long)(60746 / ((int)v_9 + 560)) - v_7 % 44490LL) % -67LL);
  }
  while_0_break: ;
  return result;
}


