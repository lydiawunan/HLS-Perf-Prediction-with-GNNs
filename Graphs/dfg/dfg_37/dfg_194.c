#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 280706525
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, unsigned int p_15[5])
{
  unsigned short v_12;
  short v_10;
  double v_8;
  long long v_6;
  long v_4;
  unsigned long long v;
  unsigned long long result;
  v_12 = (unsigned short)18035;
  v_10 = (short)p;
  v_6 = 14975LL;
  v = 3537ULL;
  result = 663564449ULL;
  v = ((unsigned long long)((int)p << (result & 7ULL)) - (v - 18446744073709536880ULL)) % (unsigned long long)(
      (unsigned long)(- p_15[4]) * (unsigned long)((long)p / -451425202L) + 467UL) - 18446744073709551604ULL;
  v_4 = (long)(! (! 724UL));
  v_8 = (double)(! 39271);
  result = v * (unsigned long long)v_4 >> (((v << (! v_6 & 63LL)) + (unsigned long long)(
                                            ((int)((short)v_8) - (int)v_10) * (int)(- v_12))) & 63ULL);
  return result;
}


