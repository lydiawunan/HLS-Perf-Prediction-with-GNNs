#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 599969312
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, unsigned char p_5, long long p_7[1][5],
                  float p_17, unsigned long long p_23)
{
  unsigned char v_27;
  signed char v_25;
  char v_21;
  double v_19;
  int v_15;
  unsigned long long v_13;
  float v_11;
  short v_9;
  unsigned char v;
  unsigned long result;
  v_27 = (unsigned char)p_23;
  v_25 = (signed char)p_23;
  v_21 = (char)124;
  v_15 = (int)p_5;
  v_13 = p_23;
  v_11 = (float)p_5;
  v = (unsigned char)p_7[0][3];
  if (~ (p_23 / (unsigned long long)((int)v_25 + 916)) != 12179ULL / (
                                                          (p_23 | p_23) % (unsigned long long)(
                                                          (int)v_21 + 425) + 171ULL)) {
    v_21 = (char)v_25;
    v_19 = (double)23775;
    v_13 = (unsigned long long)(((double)(16 % ((int)((signed char)p_17) + 1015)) - - v_19) * (double)(
                                ((unsigned long long)v_21 - p_23) + (unsigned long long)(
                                v_15 % ((int)p_5 + 1001))));
  }
  else {
    v_19 = (double)(~ (v_13 & (unsigned long long)v_27) + 95ULL);
    v_11 = (float)((long long)((int)((unsigned short)(- v_19)) ^ (int)(- p)) * (
                   0LL - p_7[0][3] / -1895LL));
    v_13 = (unsigned long long)(- v_11 * (float)(114ULL - ((unsigned long long)v - p_23)));
  }
  if (~ ((long long)(~ p_5) - p_7[0][3]) <= (long long)(~ v_15)) {
    result = (unsigned long)(- (~ p));
    v = (unsigned char)result;
    result = (unsigned long)v;
  }
  else {
    v_9 = (short)(- (((double)v_15 * -829388790.883) / (double)(v_11 + 764.f)));
    v = (unsigned char)((unsigned long long)((long long)p_5 | (p_7[0][4] - (long long)v_9)) + 
                        (unsigned long long)v_11 * v_13);
    result = (unsigned long)(! (((unsigned long long)p / 18446744073417498180ULL) % (unsigned long long)(
                                (int)v + 817)));
  }
  return result;
}


