//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 871845437
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, int p_4, char p_6, signed char p_8, char p_11)
{
  long long v_15;
  int v_13;
  unsigned short v;
  int result;
  v_15 = (long long)p_8;
  v_13 = (int)p;
  result = (int)(~ v_15);
  v = (unsigned short)(- (! result) / (v_13 + 1020) - (int)p_11);
  result = (-338984032 / ((int)v % ((int)p_11 + 234) + 884) & ~ (! result)) % (
           (int)(- p_6) + 59);
  result = (int)(((102LL ^ -434367006LL % (p + 12LL)) + (long long)p_4) & 
                 ((long long)p_6 - (long long)result / (p + 7LL)) / (long long)(
                 (p_4 * -7725) % ((int)p_8 + 145) + 886));
  return result;
}


