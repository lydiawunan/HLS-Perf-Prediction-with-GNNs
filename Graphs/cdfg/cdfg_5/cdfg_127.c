#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 312661521
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, char p_5, char p_7, unsigned long long p_11,
                  unsigned long long p_13)
{
  signed char v_21;
  unsigned char v_19;
  signed char v_17;
  long v_15;
  unsigned char v_9;
  long long v;
  unsigned long result;
  v_21 = (signed char)p_5;
  v_19 = (unsigned char)24;
  if ((unsigned long long)(9192966144.f / ((float)(! (- v_21)) + 474.f)) < 
      ! p_11 % (201ULL % ((unsigned long long)v_21 / (p_11 + 356ULL) + 747ULL) + 928ULL)) {
    v_15 = (long)(0 - 481567062ULL);
    v_9 = (unsigned char)((p_11 | p_13) + (unsigned long long)(v_15 + (long)p));
    v = (long long)((((int)p_7 - 18) ^ (int)p) / ((int)v_9 + 152));
  }
  else {
    result = (unsigned long)(- (~ (p_13 / (unsigned long long)((int)v_19 + 472))));
    v_17 = (signed char)(~ (((unsigned long)p_5 % (result + 534UL)) / (unsigned long)(
                            (int)p_7 + 371)));
    v = (long long)((unsigned int)v_17 ^ 3857325557U);
  }
  result = (unsigned long)(((554025221LL * v) * (long long)((int)p % (
                                                            (int)p_5 + 23))) / (
                           (long long)5.91361724135e+37 + 867LL));
  return result;
}


