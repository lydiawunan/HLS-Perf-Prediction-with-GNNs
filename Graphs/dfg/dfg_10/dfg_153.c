#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 41182596
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, unsigned short p_5, char p_11,
              unsigned short p_13[4][1][4], unsigned char p_17)
{
  int v_19;
  unsigned short v_15;
  float v_9;
  unsigned long long v_7;
  int v;
  long long result;
  v_19 = (int)p_11;
  v_9 = -1.29236370221e+38f;
  v_7 = 352048258ULL;
  v_15 = (unsigned short)(- ((int)p_13[0][0][3] + ! ((int)p_13[2][0][3] - v_19)));
  result = (long long)p_17;
  v = (int)(v_7 / (unsigned long long)(((int)v_9 / (((int)p_11 >> ((int)p_13[3][0][2] & 7)) + 215) + 
                                        -5979 / ((int)v_15 + 555)) + 795));
  result = (~ ((long long)p % (result + 663LL)) - (result % 31997LL) % (long long)(
                                                  108 % (v + 543) + 277)) * (long long)(! (~ (
           (int)p_5 + (int)p)));
  return result;
}


