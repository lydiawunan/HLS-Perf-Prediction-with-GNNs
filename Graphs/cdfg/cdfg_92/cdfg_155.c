#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1042616700
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p)
{
  unsigned int v_13;
  int v_11;
  signed char v_8;
  unsigned short v_6;
  unsigned long long v_4;
  signed char v;
  double result;
  v_13 = 51520U;
  v_11 = -110929757;
  v_8 = (signed char)p;
  v_6 = (unsigned short)25111;
  v_4 = 54975ULL;
  result = 394.135152941;
  v = (signed char)(- (p * (double)v_11) * - (result - (double)v_13));
  while ((unsigned long long)v >= ~ (0ULL - v_4)) {
    v_6 = (int)v_8 % ((int)((signed char)((double)v_6 * 2.54927637807e+38)) + 857);
    v_11 = (int)(- p);
    v = (signed char)((int)(1814084132. - p) - (v_11 % ((int)v + 197)) / (
                                               -57 / ((int)((signed char)6.06447951513e+37f) + 486) + 838));
    v_4 = (unsigned long long)p;
  }
  while_0_break: ;
  return result;
}


