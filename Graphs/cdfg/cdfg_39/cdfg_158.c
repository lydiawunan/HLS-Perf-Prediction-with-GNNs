#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 126218232
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, unsigned short p_11[1], double p_13,
                  long long p_19, unsigned short p_21[4][3])
{
  float v_23;
  unsigned char v_17;
  unsigned long long v_15;
  short v_9;
  unsigned char v_7;
  char v_5;
  unsigned char v;
  unsigned long result;
  v_23 = (float)p;
  v_17 = (unsigned char)85;
  v_15 = (unsigned long long)p_21[1][1];
  v_9 = (short)31025;
  v_7 = (unsigned char)p_19;
  v = (unsigned char)133;
  if ((int)v_9 <= 8616) {
    v_7 = (unsigned char)(~ ((unsigned long long)(-16688 * (int)v_7) * (
                             v_15 / (unsigned long long)((int)v_17 + 674))));
    v_9 = (short)(~ (~ p));
    v_5 = (char)(3680335874UL + (unsigned long)(((int)v_9 / ((int)p_11[0] + 127)) % (
                                                (int)p_13 + 662)));
  }
  else {
    v_7 = (unsigned char)(((float)((int)p_21[1][2] - (int)p_21[3][2]) + (
                           v_23 + (float)p_11[0])) * (float)((int)p / 64 + (
                                                             (int)p_11[0] | (int)p)));
    v_5 = (char)p_11[0];
    v = (unsigned char)(~ ((unsigned long long)(-948.372135651 / ((double)p_19 + 451.)) % 731ULL));
  }
  result = (unsigned long)(((unsigned int)((int)p & (int)v) + (21081U ^ (unsigned int)v_5)) - (unsigned int)(- v_7));
  return result;
}


