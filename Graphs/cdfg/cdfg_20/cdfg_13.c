#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 934220309
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, unsigned long p_13, unsigned int p_17)
{
  float v_15;
  unsigned short v_11;
  short v_9;
  signed char v_7;
  long v_5;
  short v;
  unsigned long long result;
  v_15 = -1.17399931201e+38f;
  v_11 = (unsigned short)p_13;
  v_9 = (short)7578;
  v_7 = (signed char)p_13;
  v_5 = 287852764L;
  v = (short)-19145;
  result = (unsigned long long)p;
  if (result > 146046476ULL) {
    v_15 = (float)p_13;
    v_9 = (short)(~ (result * ((unsigned long long)p_13 | result)));
    v_11 = (unsigned short)((int)v_11 / (((int)v_7 / ((int)p + 92) + (int)v_15) + 195));
  }
  else {
    v_7 = (signed char)(- (! 1182934ULL));
    v_5 = (long)(4294954804UL / (unsigned long)(p_17 + 84U));
    v = (short)(- (v_15 - v_15 / -8514.f));
  }
  while ((unsigned int)p + 4198854349U == (unsigned int)((int)p & (int)(! (- v)))) {
    v_7 = (long long)v_7 % -391734794LL;
    result = - (~ result | 18446744073709547181ULL);
    v_11 = (unsigned short)(((result >> ((int)v_11 & 63)) - 90ULL) / (
                            18446744073709538628ULL % (200ULL * result + 476ULL) + 232ULL));
    v = (short)((unsigned long)(! ((int)p + (int)v_9)) + (((unsigned long)v_11 & p_13) - (unsigned long)(~ v_5)));
  }
  while_0_break: ;
  return result;
}


