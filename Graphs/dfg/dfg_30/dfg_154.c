#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 471089009
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, double p_9[4][3][1], signed char p_13)
{
  unsigned int v_11;
  long long v_6;
  double v_4;
  short v;
  unsigned long result;
  v_11 = 4294951111U;
  v_4 = -4.29585058943e+36;
  v = (short)p_13;
  v_6 = (long long)(((int)((signed char)(p_9[0][0][0] * 14. + (double)(
                                         v_11 / 8533U))) | (int)(- (~ p_13))) & 36);
  v = (short)((int)((short)(p / -38571.f)) ^ (int)v);
  v = (short)(~ ((unsigned long)((double)((float)v * -9.38458776573e+37f) / (
                                 v_4 / ((double)v_6 + 469.) + 386.)) ^ 333333013UL));
  result = (unsigned long)v;
  return result;
}


