#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 608680937
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, short p_5, unsigned short p_7, long long p_9,
              float p_11)
{
  unsigned char v_13;
  unsigned short v;
  long long result;
  v_13 = (unsigned char)44;
  if ((double)((40236 - ((int)p_7 - -112)) - (int)((double)(! p_9) + (
                                                   (double)p_11 - p))) < - (
      ((double)p_5 + p) - (double)((int)v_13 + (int)p_7))) v = (unsigned short)(
                                                           104922175. / (
                                                           - p + 404.) + (
                                                           -9. - p));
  else v = (unsigned short)p_5;
  result = (long long)v;
  return result;
}


