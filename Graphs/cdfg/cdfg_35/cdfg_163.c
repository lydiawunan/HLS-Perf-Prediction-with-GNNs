#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 977081804
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, unsigned char p_5[4][4], unsigned long p_9,
                 int p_13, unsigned char p_17)
{
  long long v_27;
  signed char v_25;
  unsigned long v_23;
  int v_21;
  unsigned char v_19;
  unsigned long long v_15;
  short v_11;
  short v_7;
  unsigned short v;
  unsigned int result;
  v_27 = (long long)p_13;
  v_25 = (signed char)p_17;
  v_23 = 23882UL;
  v_21 = -53673;
  v_19 = (unsigned char)5;
  v_11 = (short)p_17;
  v = (unsigned short)p_17;
  if ((long long)(p_9 + (unsigned long)p_5[2][1]) > v_27) {
    v_15 = (unsigned long long)p_5[2][0];
    v_11 = (short)((unsigned long)p_17 % (p_9 + 421UL));
    v_7 = (short)(! (~ v));
  }
  else {
    v_19 = (unsigned char)(! (12111 + (int)v_25) / ((-72213162 * (int)v_11 - (int)(- p_5[1][1])) + 683));
    v_7 = (short)((long long)(520697506U * (unsigned int)v_19) / (-14011886LL / (long long)(
                                                                  v_23 + 669UL) + 551LL) + (long long)(
                  (int)(~ p_17) >> ((int)p_17 & 7)));
    v_15 = 196793408ULL;
  }
  if ((double)((int)(- v_7) / ((int)v_19 / ((int)p_17 + 314) + 899)) != 
      (double)v_21 + 2.09633003037e+38) result = (unsigned int)((int)((short)(
                                                                - p / 554.f)) / 1555);
  else {
    v_7 = (short)((unsigned long long)((int)v_11 / (p_13 + 459)) % (v_15 * (unsigned long long)p_5[2][1] + 312ULL) ^ (unsigned long long)(- (
                  p_9 + (unsigned long)p_17)));
    v = (unsigned short)(- (- (~ p_9)));
    result = (unsigned int)(~ (((int)v - (int)v) | ((int)p_5[2][2] >> (
                                                    (int)v_7 & 7))));
  }
  return result;
}


