#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 871204734
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, unsigned long long p_13, unsigned short p_15,
                   unsigned short p_17, long p_21)
{
  unsigned int v_23;
  char v_19;
  unsigned long long v_10;
  unsigned long v_8;
  long long v_6;
  char v_4;
  unsigned int v;
  unsigned short result;
  v_23 = 3260483372U;
  v_19 = (char)63;
  v_10 = 18446744072665694369ULL;
  v_8 = (unsigned long)(((p_13 + (unsigned long long)p_15) * (unsigned long long)(! p_17)) / (unsigned long long)(
                        ((unsigned long)v_19 + ((unsigned long)p_21 - (unsigned long)v_23)) + 726UL));
  if ((unsigned long long)v_8 == (((v_10 - (unsigned long long)p) + (unsigned long long)-942160768.f) | 28475ULL)) {
    v_4 = (char)-2.50241402546e+38;
    v = (unsigned int)v_4;
    result = (unsigned short)v;
  }
  else {
    v_6 = (long long)(- (- 8.20160452053e+37));
    result = (unsigned short)v_6;
  }
  return result;
}


