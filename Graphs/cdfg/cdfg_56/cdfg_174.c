#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 730512993
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, short p_9[2], unsigned char p_13,
                   long long p_19, short p_21)
{
  char v_25;
  float v_23;
  long long v_17;
  signed char v_15;
  unsigned short v_11;
  unsigned short v_7;
  signed char v_5;
  unsigned short v;
  unsigned short result;
  v_25 = (char)p_13;
  v_23 = -306.442901611f;
  v_17 = p_19;
  v_15 = (signed char)p_19;
  v_11 = (unsigned short)36276;
  v_5 = (signed char)21;
  v = (unsigned short)13497;
  result = (unsigned short)6523;
  if ((long long)(- (33836 % ((int)p_13 + 16)) * ((76 + (int)p_21) % -140)) <= 
      ((v_17 * -503586240LL) / (long long)((int)v + 78)) % (long long)(
      ~ ((unsigned long)p_9[1] % 4294947369UL) + 459UL)) {
    v_17 = (long long)((double)((int)p * (int)v_11 | (int)(~ v_5)) * -2795819470.77);
    v_5 = (signed char)result;
    v_23 = (float)p_21;
  }
  else {
    v_11 = (unsigned short)((int)((unsigned char)(- (-2101083392.f / (
                                                     (float)p_21 + 163.f)))) - (int)(~ p_13));
    v_17 = (226LL * p_19 + (long long)(- p)) & (long long)(! ((int)v_15 % (
                                                              (int)p_9[0] + 875)));
    v_5 = (signed char)(~ ((int)v_25 % ((int)v_25 + 492)) * (0 % (((int)v_11 - -32185) + 621)));
  }
  if ((long long)p_21 + ! (v_17 - p_19) <= (long long)(((float)(-9140LL / (long long)(
                                                                (int)v_5 + 212)) - v_23) - (
                                                       59.6631774902f - (float)v_25))) {
    v_7 = (unsigned short)p_9[0];
    v = (unsigned short)((int)(~ p) / ((((int)v_5 + (int)v_7) + -18381) + 887));
    result = v;
  }
  else {
    v_15 = (signed char)59;
    v_11 = (unsigned short)((long long)(- ((int)p_13 & (int)v_15)) % (
                            (v_17 - p_19) * (long long)(24873 % ((int)p_9[1] + 757)) + 118LL));
    result = v_11;
  }
  return result;
}


