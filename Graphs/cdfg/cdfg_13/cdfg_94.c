#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071150462
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p[3][4], long long p_7, unsigned long p_9, int p_13,
                double p_15)
{
  unsigned long v_25;
  float v_23;
  unsigned int v_21;
  char v_19;
  long long v_17;
  char v_11;
  long long v_4;
  float v;
  signed char result;
  v_25 = (unsigned long)p[2][3];
  v_23 = (float)p[2][2];
  v_21 = 62996U;
  v_19 = (char)p_13;
  v_17 = -3799LL;
  v_11 = (char)p_7;
  v_4 = 18654LL;
  v = -8535626240.f;
  if ((long long)(p_13 >> (((-435LL + v_4) - 4294962809LL) & 31LL)) == 
      ((long long)(p_13 - (int)p_15) + 41661LL) + (long long)v_25) {
    result = (signed char)((unsigned long)((double)v_21 * p_15 - (double)p_13) - 4133920359UL);
    v_4 = (long long)(-(unsigned short)34235);
    v = (float)((~ v_4 + (long long)((unsigned long)v_19 * p_9)) * (long long)(! p_9));
  }
  else {
    v_11 = (char)31;
    v_19 = (char)(! p_9 - ~ (p_9 - 72769566UL));
    result = (signed char)(((double)(243781837LL | (long long)v_19) * 711.744370788) * (double)(- (
                           (int)((char)v_23) % ((int)v_19 + 982))));
  }
  if ((long long)((int)(! result) + (int)p[2][1] * (int)p[0][0]) - ~ (
      (long long)v_11 ^ v_17) < (long long)2.25407739487e+38) {
    result = (signed char)(- (p_7 + (long long)v) ^ (long long)((p_9 / (unsigned long)(
                                                                 (int)v_11 + 59)) / (unsigned long)(
                                                                p_13 + 287)));
    v_4 = (long long)p[0][0];
    result = (signed char)((long long)((unsigned long)result / 3754076453UL - (unsigned long)(- v)) - v_4);
  }
  else result = (signed char)p_15;
  return result;
}


