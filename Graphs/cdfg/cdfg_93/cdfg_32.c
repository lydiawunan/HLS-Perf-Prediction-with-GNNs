#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 636697545
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, char p_7, double p_11[3], unsigned short p_17,
                  long p_21[1][5])
{
  float v_23;
  double v_19;
  char v_15;
  unsigned long long v_13;
  unsigned int v_9;
  double v_5;
  char v;
  unsigned long result;
  v_23 = (float)p_21[0][4];
  v_19 = -9114064237.24;
  v_15 = (char)2;
  v_9 = 872840884U;
  if (- (~ (~ p)) > (long long)(785151742UL * (unsigned long)v_19)) {
    v_9 = (unsigned int)(((int)5725763774.2 + (int)v_15 * (int)v_15) % (
                         (int)p_11[2] + 554));
    v_19 = (double)(((unsigned long)p_7 % 13235UL) / (unsigned long)(
                    (int)p_7 / ((int)p_7 + 575) + 318) << (((int)p_17 % 535916501 + -34304) & 31));
    v_5 = (double)p_7;
  }
  else {
    v_5 = (double)(~ v_9 % 5U);
    v_9 = (unsigned int)(- ((long long)p_7 / (p + 149LL)) + (long long)(
                         (long)(-35 * (int)((char)v_19)) / (p_21[0][2] * (long)v_5 + 265L)));
    v_5 = 9804104015.35;
  }
  if (- (v_19 / ((double)p + 582.) - (double)(p_21[0][4] % 117L)) == (double)(- (- v_23))) {
    v_13 = (unsigned long long)(((long long)v_15 | 14398LL) + p);
    v = (char)(6846 >> ((int)(- ((double)p_7 - v_5)) & 31));
    result = (unsigned long)((unsigned long long)((p * (long long)v) % (long long)(
                                                  (8376 >> ((int)((short)v_5) & 15)) + 928)) * (
                             (unsigned long long)((unsigned int)p_7 * v_9) ^ 
                             (unsigned long long)p_11[0] * v_13));
  }
  else result = (unsigned long)p_17;
  return result;
}


