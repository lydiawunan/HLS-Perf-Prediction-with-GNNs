#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 260641484
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p[2][2][2], double p_4, double p_13, unsigned char p_15,
          unsigned char p_21)
{
  char v_19;
  short v_17;
  unsigned char v_11;
  long v_9;
  unsigned char v_7;
  unsigned char v;
  float result;
  v_19 = (char)p[1][1][0];
  v_17 = (short)16459;
  v_9 = (long)p[0][0][0];
  v_7 = (unsigned char)203;
  v_11 = (unsigned char)((unsigned long long)(-3.49627600227e+18f * (float)(~ v_17)) * (
                         ((unsigned long long)p_15 * 482953673ULL) / (unsigned long long)(
                         (int)v_19 * (int)p_21 + 104)));
  if ((unsigned long long)(((int)v_7 * ((int)p_15 * (int)p_15)) * (int)(- p[1][1][1])) <= 23417ULL) 
    result = (float)(p[0][0][0] * - (p_4 / -4399097344.));
  else {
    v_9 = ~ (~ v_9) - (long)(- (32 - (int)((unsigned char)p_4)));
    v = (unsigned char)(((unsigned long)((unsigned int)v_7 / 186262740U) / (unsigned long)(
                         (v_9 - 684152137L) + 82L)) % (unsigned long)(
                        56426U / (unsigned int)((int)(~ v_11) + 160) + 505U));
    result = (float)v;
  }
  return result;
}


