#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 446316887
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, unsigned short p_5, short p_7, char p_9,
                  long p_15[5][3])
{
  float v_25;
  short v_23;
  int v_21;
  unsigned char v_19;
  unsigned short v_17;
  short v_13;
  unsigned int v_11;
  double v;
  unsigned char result;
  v_25 = (float)p_15[1][2];
  v_23 = (short)11624;
  v_21 = -18003233;
  v_19 = (unsigned char)105;
  v_17 = (unsigned short)p;
  v_13 = (short)p_15[1][0];
  v_11 = 12882U;
  v = 5896616127.35;
  result = (unsigned char)182;
  if ((long)(- ((int)((float)result * v_25) % ((int)p_5 % ((int)v_23 + 653) + 36))) != 
      ((long)((int)p_7 - -39) + p) * ~ ((long)p_9 % (p + 496L))) {
    v_17 = (unsigned short)(p_15[1][1] * (p_15[3][2] + (long)p_5) - (long)(
                            (int)((unsigned short)((double)v_21 / (v + 992.))) * (int)v_17));
    v_13 = (short)((int)(- (~ v_17)) + ~ (-8160 % ((int)p_5 + 715)));
    v_19 = (unsigned char)(~ -1108L);
  }
  else {
    v_11 = ! (((unsigned int)v_21 / (v_11 + 162U)) * (unsigned int)((int)p_7 / (
                                                                    (int)((short)v_25) + 441)));
    v_23 = (short)((long)((int)p_7 + (int)p_5) / (~ p + 126L));
    v_11 = (unsigned int)((unsigned long)((int)v_23 + (int)p_5 % ((int)v_17 + 241)) + 
                          14066UL % (unsigned long)(v_11 + 678U));
  }
  if ((unsigned long)((~ p_15[2][0] ^ (long)((int)v_13 ^ (int)v_17)) / (
                      (p & 55571L) / (p_15[0][2] + 843L) + 917L)) > 4294967191UL * (
                                                                    (unsigned long)(
                                                                    (double)v_19 * v) - 4183701735UL)) {
    v = (double)((unsigned int)(~ (47 & (int)p_9)) * v_11);
    result = (unsigned char)(- ((int)((unsigned short)v) % ((int)p_5 + 323)) + 
                             13018 * ((int)p_7 + -1017174850));
    result = (unsigned char)(52078LL + (long long)(p % (long)((int)result + 141)));
  }
  else {
    v_13 = (short)(! p_15[1][1]);
    result = (unsigned char)(~ v_13);
  }
  return result;
}


