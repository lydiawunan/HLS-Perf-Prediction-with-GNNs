#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 52193590
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p[5][3], double p_7, char p_9[1][4][5], char p_11,
              unsigned char p_13)
{
  int v_23;
  float v_21;
  unsigned short v_19;
  float v_17;
  long v_15;
  unsigned long v_5;
  signed char v;
  long long result;
  v_23 = -946507290;
  v_21 = (float)p_9[0][2][3];
  v_19 = (unsigned short)52083;
  v_17 = (float)p_11;
  v_15 = (long)p_13;
  v = (signed char)p[2][1];
  result = -946362945LL;
  while (- (- ((double)v_15 * p_7)) <= (double)(- (- p_9[0][0][3]))) {
    v_17 = v_23 / ((int)3282433024.f + 214);
    v_21 = (float)(~ p_11);
    v_19 = (unsigned short)((float)p[1][2] / (v_21 + 864.f));
    v_15 = (long)(- (((int)v_19 / ((int)v + 54)) % ((int)p_13 + 724)));
  }
  while_0_break: ;
  if ((float)(~ ((int)((char)v_17) % ((int)p_9[0][0][0] + 466) - (int)(~ v_19))) <= - (
      (v_21 - 3608092416.f) + -1514006528.f)) {
    v = (signed char)-94;
    result = (long long)(- (-3296 / ((int)(~ v) + 36)));
  }
  else {
    result = ! (-851270246LL / (result + 369LL)) - (long long)(((long)p_13 + v_15) - 
                                                               (long)v % (
                                                               p[2][2] + 256L));
    v_5 = (unsigned long)(((long long)p_7 * ((long long)p_9[0][3][1] + result)) % (long long)(
                          (int)p_11 / 124 + 1021));
    result = ~ ((592046119LL % (long long)(p[2][1] + 464L)) % (long long)(
                (151UL + v_5) + 362UL));
  }
  return result;
}


