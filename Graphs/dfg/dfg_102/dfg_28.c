#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 581819617
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, double p_7[2], short p_9, int p_13[2][5], char p_17)
{
  short v_15;
  unsigned long v_11;
  unsigned short v_4;
  double v;
  short result;
  v_15 = (short)p;
  v_11 = 3278353065UL;
  v_4 = (unsigned short)p_17;
  result = (short)(((((unsigned long)p_9 - v_11) | (unsigned long)(~ p_13[0][4])) & (unsigned long)(- (! v_15))) * ! (
                   ((unsigned long)p_9 % (v_11 + 420UL)) * (unsigned long)(- p_17)));
  v_4 = (unsigned short)(0. / (((double)(((unsigned int)result % 206314892U) / (unsigned int)(
                                         ! p + 384)) - (9730. + p_7[1] / (
                                                                (double)v_4 + 217.))) + 278.));
  v = (double)((unsigned long long)v_4 * 25915ULL);
  result = (short)(- v);
  return result;
}


