#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 654120962
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, short p_5, unsigned short p_13)
{
  unsigned short v_11;
  float v_9;
  int v_7;
  long v;
  long result;
  v_11 = (unsigned short)43155;
  v_9 = (float)p;
  v_7 = (int)p;
  result = -253788433L;
  v = (long)((unsigned long long)(- p_13) & - (~ ((unsigned long long)p & 500408901ULL)));
  v = (long)((float)v / (- ((v_9 - (float)v_11) * (float)((long)p * result)) + 56.f));
  v = (long)(! p_5) * ((long)(v_7 * (int)v_9 & 15177) + (-14125L - v / (
                                                                   v + 773L)));
  result = (long)((((long long)(125 / ((int)p + 663)) * ((long long)v * -17704LL)) * -119LL) / 29LL);
  return result;
}


