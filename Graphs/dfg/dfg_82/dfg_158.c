#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 671346811
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, double p_15, unsigned short p_17)
{
  long long v_13;
  unsigned char v_11;
  unsigned long long v_9;
  unsigned short v_7;
  char v_4;
  long v;
  long long result;
  v_13 = (long long)p_17;
  v_11 = (unsigned char)p_17;
  v_9 = (unsigned long long)p;
  v_4 = (char)117;
  result = (long long)p_17;
  v_7 = (unsigned short)((unsigned long long)((long long)((unsigned long)(
                                              (int)v_11 + 126)) - v_13) % (
                         (unsigned long long)(82LL % (result + 184LL) | (long long)(
                                              p_15 - p)) % ((unsigned long long)v_13 * 33544ULL + 809ULL) + 439ULL));
  v = (long)((unsigned long long)(((int)(! v_4) % ((int)v_4 * (int)((char)p) + 21)) * (int)v_7) / (
             (18446744072997242637ULL + ((unsigned long long)(- p) - ~ v_9)) + 29ULL));
  result = (long long)(! v);
  return result;
}


