#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 333830775
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p[5], unsigned int p_7)
{
  unsigned short v_9;
  unsigned short v_5;
  unsigned int v;
  long result;
  v_9 = (unsigned short)p[1];
  v_5 = (unsigned short)(! (-28935 | (int)(- v_9)) % -107);
  result = (long)(- (- -854.675170898f));
  v = (unsigned int)(~ (! v_5)) - (unsigned int)(-1.41302477106e+38f * (float)(
                                                 p_7 % (p[3] + 455U))) * (
                                  (p[1] - p[2]) % 26465U);
  result = (long)((unsigned long)((- p[0] % 4294941095U) / (! v + 40U)) - (unsigned long)(
                  result * (long)v_5));
  return result;
}


