#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 900515777
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, short p_7[4][5][5], unsigned long p_13,
                  double p_15, long long p_23)
{
  long v_21;
  int v_19;
  unsigned long v_17;
  unsigned short v_11;
  unsigned char v_9;
  unsigned int v_5;
  unsigned char v;
  unsigned long result;
  v_21 = 5993L;
  v_19 = 44515;
  v_17 = 51568UL;
  v_11 = (unsigned short)13667;
  v_9 = (unsigned char)132;
  v_5 = (unsigned int)p_23;
  while (p_15 / 18689. == (double)((unsigned int)((int)v_9 * v_19) - ~ v_5) * p_15) {
    v_5 = v_21 + 15L;
    v_21 = (long)p_15;
    v_11 = (unsigned short)((-125LL + (18668LL + p_23)) + ! (65051LL - (long long)v_21));
    v_19 = (int)(- p_13);
  }
  while_0_break: ;
  if (p_13 == (p_13 / ((unsigned long)p_15 + 212UL) + v_17 / (unsigned long)(
                                                      (int)p_7[2][2][4] + 2)) * (
              ((unsigned long)p_7[2][0][4] / (v_17 + 955UL)) * (unsigned long)v_5)) 
    result = (unsigned long)p;
  else {
    v = (unsigned char)((int)v_9 % ((12155 << ((int)p_7[0][4][0] & 15)) * (
                                    162 | (int)v_11) + 826));
    v = (unsigned char)((int)v * (-15818524 + (int)(~ p_7[2][0][0])));
    result = (unsigned long)(- (((unsigned int)v - v_5) | (unsigned int)(~ p_7[0][1][2])));
  }
  return result;
}


