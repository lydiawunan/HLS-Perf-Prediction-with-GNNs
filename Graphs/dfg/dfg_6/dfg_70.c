//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 44985297
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, short p_7)
{
  short v_9;
  unsigned long long v_5;
  unsigned short v;
  long long result;
  v_9 = (short)p;
  v_5 = (unsigned long long)p_7;
  v_5 = v_5;
  v = (unsigned short)(~ (! v_9));
  result = (long long)p;
  result = (long long)((unsigned long long)(result - (long long)v) * (
                       ((unsigned long long)(p * 20831) - v_5 % (v_5 + 301ULL)) - (unsigned long long)(
                       (result + (long long)p) + (long long)(4294918333UL + (unsigned long)p_7))));
  return result;
}


