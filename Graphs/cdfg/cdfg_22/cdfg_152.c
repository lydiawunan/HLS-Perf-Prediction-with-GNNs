#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 603409669
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, char p_5, char p_11, int p_15, int p_17)
{
  float v_21;
  char v_19;
  unsigned char v_13;
  short v_9;
  short v_7;
  char v;
  short result;
  v_21 = -4.2879310885e+37f;
  v_7 = (short)9754;
  v = (char)p_15;
  result = (short)p;
  if (((int)(~ p_5) * (int)(! p_5)) / (~ ((int)result + p_15) + 987) >= (int)(- (! v))) {
    v_13 = (unsigned char)(! (p_15 - (int)p) % (~ p_15 % 66 + 981));
    v_13 = (unsigned char)((0 / ((int)v_13 * 308662722 + 624)) % ((7782 - p_15) % (
                                                                  -26081 / (
                                                                  p_17 + 475) + 358) + 267));
    v_13 = (unsigned char)(~ ((unsigned int)((int)v_13 ^ 43487) + (unsigned int)p_5 * 4294938216U));
  }
  else {
    v_19 = (char)(~ (~ (24726 * p_15)));
    v_7 = (short)(~ ((unsigned int)(8644 % ((int)p_11 + 85)) / ((4294953501U & (unsigned int)p_17) + 605U)));
    v_13 = (unsigned char)((int)(! (- v_19)) + (int)((char)(- (- v_21))));
  }
  if ((unsigned long)v_13 > ((unsigned long)(~ (p_15 - 25)) & 61448144UL)) {
    result = (short)(~ ((int)p_5 ^ 232) << (- ((int)v_7 / -55) & 31));
    v = (char)((long long)(((int)v - (int)v) % -47796) - ! ((long long)p | 61423LL));
    result = (short)((int)result | ! ((int)v / -263553981));
  }
  else {
    v_9 = (short)p_11;
    result = v_9;
  }
  return result;
}


