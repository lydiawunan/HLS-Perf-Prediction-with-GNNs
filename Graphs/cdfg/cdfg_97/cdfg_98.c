#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 987573771
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, long long p_4[3][1][5], long p_6[1][4],
              int p_9, int p_11)
{
  char v_29;
  long long v_27;
  unsigned char v_25;
  unsigned char v_23;
  double v_21;
  signed char v_19;
  float v_17;
  unsigned int v_15;
  signed char v_13;
  long v;
  long long result;
  v_27 = -726442061LL;
  v_25 = (unsigned char)191;
  v_23 = (unsigned char)p_4[2][0][4];
  v_21 = (double)p_11;
  v_19 = (signed char)-6;
  v_17 = (float)p_9;
  v_15 = 4294916312U;
  v_13 = (signed char)28;
  while (- (v_17 / ((float)v_19 + 463.f) + (float)(p_11 / ((int)v_21 + 299))) < (float)(
         ((unsigned long long)((long long)v_13 + p_4[0][0][1]) + 2ULL) / (unsigned long long)(
         (int)(! v_23) / ((int)v_25 + 54) + 280))) {
    v_29 = v_27 - 4294956910LL;
    v_21 = (double)((unsigned long long)((float)v_29 - -9779344384.f) / (
                    46530ULL * (unsigned long long)v_13 + 970ULL) - (unsigned long long)(
                    (long long)p_11 / (((long long)v_13 - -30219LL) + 897LL)));
    v_17 = (float)(~ 0U);
    v_23 = (unsigned char)(~ ((unsigned long long)(- p_6[0][0])));
  }
  while_0_break: ;
  if ((long long)(- (p_11 - (int)v_13)) + (p_4[1][0][4] + (long long)p_9) % (long long)(
                                          ! v_15 + 621U) != 124LL) result = 
                                                                   (long long)(- (
                                                                   53U % (
                                                                   p + 355U))) * ! p_4[2][0][4];
  else {
    v = 32715L;
    result = (long long)p;
    result = (long long)(~ p_6[0][2] - ! v) & ((long long)p * result) * (long long)(
                                              v % (long)(p_9 + 812));
  }
  return result;
}


