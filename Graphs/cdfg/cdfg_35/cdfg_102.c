#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 85395747
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, long p_7, unsigned char p_11,
                  char p_15[4][2][4], char p_17)
{
  unsigned long long v_29;
  long v_27;
  double v_25;
  long long v_23;
  float v_21;
  unsigned long v_19;
  int v_13;
  short v_9;
  unsigned char v_4;
  float v;
  unsigned char result;
  v_29 = (unsigned long long)p_17;
  v_27 = (long)p_15[0][1][3];
  v_25 = (double)p_15[1][1][0];
  v_23 = 695712726LL;
  v_21 = 8380177408.f;
  v_19 = (unsigned long)p_17;
  v_9 = (short)p_7;
  while (((~ v_23 - 53268LL) & (long long)((int)((char)((double)p_17 / (
                                                        v_25 + 292.))) / (
                                           (int)(- p_15[2][0][1]) + 440))) >= v_23) {
    v_23 = v_29 - (unsigned long long)((unsigned long)v_27 - 315484131UL);
    v_29 = (unsigned long long)-2.28294702104e+38 % (((unsigned long long)p_11 ^ 3060ULL) + 505ULL) ^ (unsigned long long)(
           58 / ((int)p_11 * (int)((unsigned char)-5810316242.65) + 604));
    v_25 = (double)(p_7 * (long)p);
    v_25 = v_25;
  }
  while_0_break: ;
  if ((v_19 << ((int)p & 31)) % (unsigned long)((int)p + 123) > (unsigned long)(- v_21) - 
                                                                (unsigned long)(
                                                                p_7 >> (
                                                                (int)p_15[2][1][2] & 31)) / (
                                                                v_19 + 338UL)) {
    v_4 = (unsigned char)v_9;
    v = (float)2627075100U;
    result = (unsigned char)((long)(- (- v)) / ((long)((int)v_4 * (int)p) % (
                                                ((long)p - p_7) + 686L) + 776L));
  }
  else {
    v_13 = (int)p_17;
    result = (unsigned char)((-798102606LL + (long long)((long)p_11 % (
                                                         p_7 + 465L))) % (long long)(
                             ! (v_13 % ((int)p_15[1][1][2] + 246)) + 855));
  }
  return result;
}


