#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 580696714
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, unsigned long p_5, float p_15)
{
  unsigned long v_19;
  double v_17;
  unsigned int v_13;
  unsigned char v_11;
  unsigned long v_9;
  signed char v_7;
  unsigned char v;
  long long result;
  v_19 = (unsigned long)p;
  v_17 = 160.198464142;
  v_13 = (unsigned int)p_5;
  v_9 = (unsigned long)p_15;
  v_7 = (signed char)p;
  v = (unsigned char)21;
  result = (long long)p;
  if ((long long)(! v) < 89LL / (result + 60LL)) {
    v = (unsigned char)p;
    result = (long long)v_9;
    v_7 = (signed char)(! (p_5 % 80UL));
  }
  else {
    v_11 = (unsigned char)(! ((long long)v_9 + -102124630LL) + (long long)(
                           75UL & - v_19));
    v = (unsigned char)((unsigned long long)v_13 * - p & (unsigned long long)(
                        (41066 - (int)((unsigned short)p_15)) % ((int)((unsigned char)v_17) * 66 + 65)));
    v = (unsigned char)(! ((int)(~ v) * ((int)v_11 - 886931498)));
  }
  result = (long long)((((unsigned long long)result - p) - (unsigned long long)(
                        (unsigned long)v + p_5)) ^ (unsigned long long)v_7);
  return result;
}


