#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 66094395
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, char p_4, float p_7, short p_11[1][3][1], int p_13)
{
  short v_25;
  unsigned long long v_23;
  char v_21;
  short v_19;
  int v_17;
  signed char v_15;
  short v_9;
  unsigned short v;
  short result;
  v_25 = (short)p_4;
  v_23 = 33059ULL;
  v_21 = (char)p_7;
  v_19 = (short)-17085;
  v_17 = (int)p;
  v_15 = (signed char)p_13;
  v_9 = (short)p;
  v = (unsigned short)28935;
  result = (short)-6363;
  if (v_23 % (unsigned long long)((int)(! p_4) / (((int)v_25 + (int)v) + 572) + 595) < (unsigned long long)v_25) {
    v = (unsigned short)p_4;
    v_19 = (short)(((v_23 * (unsigned long long)v_25) % (unsigned long long)(
                    (p_13 | 754489674) + 363)) / (unsigned long long)(
                   (p_13 >> ((int)result & 31)) + 517));
    v_21 = (char)v_9;
  }
  else {
    v_9 = (short)-32731;
    v_23 = (unsigned long long)v;
    v_17 = (int)((v_23 % (unsigned long long)(((int)p_4 & (int)((char)-5665037052.64)) + 889)) % (unsigned long long)(
                 (int)v_15 + 394));
  }
  if ((unsigned long long)(- (v_17 | -73) | p_13) <= (unsigned long long)(
                                                     (int)(! v_9) ^ (int)v_19 * 59) / (
                                                     ((unsigned long long)(
                                                      p_7 - (float)v_21) - (
                                                      v_23 - (unsigned long long)p)) + 451ULL)) {
    v_9 = (short)((p - (long)(615 % (p_13 + 220))) + (long)(29325 * (int)p_4) % (
                                                     7839L % (long)((int)v_9 + 948) + 626L));
    result = (short)((-9717.f + 235.f / (p_7 + 120.f)) - (float)((37625U - (unsigned int)v_9) << (
                                                                 -2549476LL / (long long)(
                                                                 (int)p_11[0][1][0] + 215) & 31LL)));
    result = (short)(~ (p ^ (long)p_4) - (long)(-106 - ((int)result | (int)v)));
  }
  else {
    v_15 = (signed char)105;
    v_9 = (short)((long)((int)(- v_15) % ((int)(- v_15) + 506)) + ! (
                  p - -24537L));
    result = v_9;
  }
  return result;
}


