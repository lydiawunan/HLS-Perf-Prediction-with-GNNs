#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 913428727
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, unsigned long long p_7, signed char p_9[1][4][3],
        double p_13[3][5][3], unsigned int p_17)
{
  char v_23;
  long long v_21;
  int v_19;
  short v_15;
  long v_11;
  signed char v_5;
  short v;
  int result;
  v_23 = (char)p_17;
  v_21 = -5685LL;
  v_15 = (short)31179;
  v_11 = (long)p_9[0][2][2];
  v_5 = (signed char)26;
  v = (short)32235;
  result = (int)p_9[0][2][0];
  while ((unsigned long long)(- p) > ((p_7 ^ (unsigned long long)p) * (unsigned long long)(
                                      (long long)p_13[1][2][2] * v_21)) / (unsigned long long)(
                                     (int)(! p) + 41)) {
    v = (short)p;
    v_11 = (long)(((unsigned long long)p_9[0][0][0] % (p_7 + 524ULL)) * (unsigned long long)(
                  (int)p % ((int)v_23 + 55)) + p_7 * p_7);
    v_21 = (long long)(~ (~ (~ (unsigned short)28773)));
  }
  while_0_break: ;
  if ((6 / ((int)(- v_5) + 95)) % (~ (result % ((int)v_15 + 520)) + 581) > (int)p) {
    v = (short)((84LL - (long long)((long)p_9[0][3][2] / (v_11 + 192L))) * (long long)(
                (p_13[2][2][2] - (double)v) + (double)p));
    v_5 = (signed char)(p_7 - 14975ULL);
    result = (int)((long long)((int)v * -12) / (((long long)p - 1013088511LL) + 265LL) << (
                   (int)(~ (~ v_5)) & 63));
  }
  else {
    v_19 = (int)(~ (v_21 >> (p_7 & 63ULL)) + (848997436LL - (long long)(! v_11)));
    v_15 = (short)(- (~ (v_19 / (result + 298))));
    result = (int)((unsigned int)v_15 | - (p_17 + 49078U));
  }
  return result;
}


