#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 607823646
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p[4][5][5], char p_9, char p_11,
                  double p_17, unsigned char p_19[1][5][5])
{
  unsigned long v_25;
  int v_23;
  double v_21;
  short v_15;
  unsigned short v_13;
  float v_7;
  long long v_5;
  char v;
  unsigned char result;
  v_25 = (unsigned long)p_19[0][3][3];
  v_23 = -37745;
  v_21 = (double)p[2][2][3];
  v_15 = (short)p_17;
  v_13 = (unsigned short)56975;
  v_7 = 9530340352.f;
  v_5 = (long long)p_17;
  v = p_11;
  result = p_19[0][0][0];
  if (40286 == ! (((int)v_15 / -497098058) * (int)p_17)) {
    v_15 = (short)(4193944457UL * (unsigned long)((int)(! v_15) - (int)p_11));
    v_21 = (double)((unsigned long long)((int)(! v) + (int)((char)(-438.753997803f - (float)p_11))) % (
                    (unsigned long long)p_11 % (53783505ULL / (p[0][0][1] + 534ULL) + 790ULL) + 926ULL));
    v_5 = (long long)((((long)p_9 * -37302L) % 10057L) % ((long)(p_17 * (double)p[2][1][1] - (double)(- p_9)) + 342L));
  }
  else {
    v_13 = (unsigned short)((unsigned long)(- v_7 + (float)v_5) - ! v_25);
    v_7 = (float)((unsigned long)((int)v_13 / ((int)p_19[0][1][0] + 898) | 
                                  (int)p_17 * v_23) + (873981547UL * (unsigned long)p_9) / (unsigned long)(
                                                      (int)(~ p_11) + 758));
    v = (char)(! (((int)p_9 + -115) / (((int)p_11 ^ (int)result) + 881)));
  }
  if (- (v_7 + 49832.f) + 0.f >= (float)((long long)((int)(- p_17) * (
                                                     (int)p_9 - (int)((char)v_21))) ^ v_5)) {
    v = (char)(~ (~ v_5 % 58220LL));
    v = (char)(~ (p[3][2][0] - (unsigned long long)v));
    result = (unsigned char)v;
  }
  else {
    v_13 = (unsigned short)(-123. / (p_17 / ((double)v_13 + 975.) + 210.) - (double)(
                            (int)p_9 / ((int)p_19[0][2][4] + 487) & (int)p_9));
    v_7 = (float)((int)v_13 | ((int)v_15 + 1 % ((int)v + 165)));
    result = (unsigned char)(-17 - (int)(v_7 - -3.18291083179e+38f) / (
                                   ((int)p_9 << ((int)p_11 & 7)) + 390));
  }
  return result;
}


