#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 209534290
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, long p_7, unsigned int p_13, double p_15)
{
  short v_21;
  char v_19;
  unsigned char v_17;
  signed char v_11;
  long v_9;
  long long v_5;
  unsigned char v;
  long long result;
  v_21 = (short)p_7;
  v_19 = (char)p_15;
  v_17 = (unsigned char)p_7;
  v_5 = -5530391LL;
  v = (unsigned char)p;
  result = (long long)p_7;
  if ((unsigned long long)((unsigned int)((int)(~ v) / ((int)v_19 / (
                                                        (int)v_21 + 818) + 287))) < 
      (19107ULL - (unsigned long long)((int)v_19 + (int)v_17)) + (unsigned long long)(
      6988LL * result ^ 0LL)) {
    v_11 = (signed char)result;
    v = (unsigned char)(((long long)v_11 / (v_5 + 96LL) - (long long)(~ p_13)) / (long long)(
                        (- p_13 & (unsigned int)((int)((signed char)p_15) % -106)) + 999U));
    v_5 = ~ 470040247LL;
  }
  else {
    v_5 = (long long)(((long)(~ v_17) + 19371L) + 43343L);
    result = 67LL;
    v = (unsigned char)-920.225585938f;
  }
  while ((unsigned long long)(-1283 * ((int)(! p) - (int)(~ v))) == 449386685ULL) {
    v_9 = v_5 - 4294926547LL;
    v_5 = (long long)v_9;
    result = result;
    v = (unsigned char)(291 * - ((int)p << (p_7 & 15L)));
  }
  while_0_break: ;
  return result;
}


