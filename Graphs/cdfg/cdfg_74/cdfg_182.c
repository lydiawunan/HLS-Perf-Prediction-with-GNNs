#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106657115
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, char p_4, int p_6, long long p_8,
                  signed char p_11)
{
  unsigned char v_23;
  unsigned long v_21;
  long long v_19;
  long v_17;
  unsigned long long v_15;
  long long v_13;
  int v;
  unsigned char result;
  v_23 = (unsigned char)85;
  v_19 = 39830LL;
  v_17 = (long)p_6;
  v_13 = (long long)p_4;
  if ((float)(! ((long long)v_23 + -62910LL)) <= (float)(p_8 - 189LL) * (
                                                 141.f + (float)v_13 * 3.35510483849e+38f)) {
    v = -23;
    v_15 = (unsigned long long)(- (! (v_17 ^ -234231935L)));
    result = (unsigned char)(- ((double)v_13 * p + (double)v_15));
  }
  else {
    v_21 = (unsigned long)p;
    result = (unsigned char)((long long)(! v_21) - (long long)(-67 >> 5) * ! p_8);
    v = (int)((long long)(~ (-13696787L * (long)p_11)) * (v_19 % -1248LL));
  }
  if ((long long)result == ((long long)p_6 % (p_8 + 965LL)) % (long long)(
                           v + 970) + (long long)(~ p_11)) result = (unsigned char)206;
  else {
    result = (unsigned char)((unsigned long)(~ p_4) / ((4294959444UL - (unsigned long)(- p)) + 474UL));
    result = (unsigned char)(((double)result * 3.35166229688e+38 + (8.23940122834e+37 - p)) - 45676.);
  }
  return result;
}


