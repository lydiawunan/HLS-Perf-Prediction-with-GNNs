#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 489240723
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, short p_11[5][4][2])
{
  unsigned long v_17;
  short v_15;
  signed char v_13;
  char v_9;
  unsigned long long v_7;
  float v_5;
  long long v;
  unsigned char result;
  v_17 = (unsigned long)p_11[4][3][1];
  v_15 = p_11[0][1][1];
  v_13 = (signed char)p_11[1][2][0];
  v_9 = (char)p;
  v_7 = p;
  v_5 = 3.0925299807e+38f;
  v = -10055LL;
  result = (unsigned char)p;
  while ((unsigned long long)(~ result) > (133ULL ^ ~ v_7)) {
    v = (unsigned long)v_13 + 599940955UL;
    v_13 = (signed char)(((unsigned long long)((unsigned long)v_15 + v_17) * p) % (unsigned long long)(
                         ~ v_17 + 496UL));
    v_5 = (float)((int)((float)p_11[0][2][1] * - v_5) ^ ~ ((int)result << (
                                                           (int)p_11[4][3][0] & 7)));
    result = (unsigned char)(((unsigned long long)((int)((unsigned char)-548.561218262f) + (int)result) + ~ p) / 18446744073709491983ULL);
  }
  while_0_break: ;
  while (~ (p / (unsigned long long)((int)result + 912) | (unsigned long long)(
            v * 3416892489LL)) < 173201363ULL) {
    v = (long long)v_5 / -735710327LL;
    v_5 = (float)(- ((unsigned long long)(v % 4294952978LL) + (28694ULL ^ v_7)));
    v = (long long)(v_5 / ((float)((int)v_9 - (int)p_11[3][3][1] / ((int)p_11[2][2][1] + 447)) + 695.f));
    result = (unsigned char)p;
  }
  while_0_break_0: ;
  return result;
}


