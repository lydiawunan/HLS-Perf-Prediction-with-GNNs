#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 111922396
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, long p_7)
{
  long long v_11;
  unsigned char v_9;
  unsigned int v_4;
  unsigned int v;
  long result;
  v_11 = (long long)p;
  v_9 = (unsigned char)27;
  v_4 = 3965734297U;
  v = (unsigned int)p;
  result = p_7;
  while ((unsigned long)((long)(- ((int)p % ((int)p + 501))) | - p_7) <= (unsigned long)(
         (unsigned int)(418.599975801 - (double)(result % (long)((int)v_9 + 858))) * v)) {
    v_4 = v_11 / -63441LL;
    v_11 = (long long)((unsigned long)(~ (- v)) + ((unsigned long)result + (unsigned long)(
                                                   (unsigned int)p - v)));
    v = (unsigned int)((v_11 * -27907LL) * (v_11 * 53530LL) - (long long)(~ (! v)));
    v_9 = (unsigned char)(~ ((int)(- p) + ((int)v_9 & -58223)));
  }
  while_0_break: ;
  result = (long)(- ((8063U & v) / (~ v_4 + 967U)));
  return result;
}


