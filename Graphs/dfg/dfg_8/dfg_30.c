//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 402010661
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, float p_5, unsigned int p_7, long long p_11)
{
  signed char v_13;
  long long v_9;
  unsigned char v;
  long long result;
  v_13 = (signed char)p_11;
  v_9 = -544046217LL;
  v = (unsigned char)(v_9 % (~ ((p_11 - (long long)p_7) + (long long)(~ v_13)) + 433LL));
  result = (long long)((unsigned long)((unsigned int)((int)(! v) - (int)((unsigned char)p_5)) % (
                                       p_7 + 316U)) * (unsigned long)(
                       -612728079L + (long)p));
  v = (unsigned char)(~ ((long long)p / ((21875LL - (result + 46255LL)) + 918LL)));
  result = (long long)v;
  return result;
}


