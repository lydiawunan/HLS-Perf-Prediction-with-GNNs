#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 822147430
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, long p_11, short p_13)
{
  char v_15;
  char v_9;
  unsigned char v_7;
  short v_5;
  int v;
  long result;
  v_15 = (char)p_11;
  v_9 = (char)p_11;
  v_7 = (unsigned char)82;
  v = (int)p_11;
  result = p_11;
  v_5 = (short)(((long)p_13 * result) / (long)(((int)p_13 - -797246025) + 576) + -2512L);
  while (p <= (unsigned int)((v >> 24) | v)) {
    v_7 = (unsigned long)v_7 - (unsigned long)v_5 % 137694388UL;
    v_5 = (short)v_15;
    result = (long)(((int)(- v_9) >> (~ p & 7U)) % ((int)p_13 + 865));
    v = (int)((unsigned long)p_11);
  }
  while_0_break: ;
  return result;
}


