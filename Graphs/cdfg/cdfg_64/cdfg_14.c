#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 860417535
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, float p_4[2][3][5], unsigned int p_6, char p_9,
           unsigned char p_13)
{
  unsigned long long v_31;
  unsigned long long v_29;
  long long v_27;
  double v_25;
  int v_23;
  double v_21;
  float v_19;
  unsigned long long v_17;
  char v_15;
  unsigned char v_11;
  long long v;
  double result;
  v_31 = 18446744073411792165ULL;
  v_29 = (unsigned long long)p_4[1][0][2];
  v_27 = (long long)p_6;
  v_25 = 1.6721083421e+38;
  v_21 = (double)p_9;
  v_19 = 2.67792284548e+38f;
  v_17 = (unsigned long long)p_4[1][1][1];
  if (v_17 + 64483ULL == ((18446744073709515518ULL * (unsigned long long)p_6 + (unsigned long long)(- v_27)) | (
                          v_29 - (unsigned long long)((int)p << (v_31 & 7ULL))))) {
    v_23 = (int)((unsigned long long)((double)(-78 | (int)p_9) / (v_25 * 1.84467440735e+19 + 326.)) >> 2ULL);
    v_15 = (char)((double)((float)(62 & (int)((char)v_21)) - ((float)v_23 - p_4[0][0][1])) / (
                  v_21 + 15.));
    v_11 = (unsigned char)((float)(- p_6 + (unsigned int)v_15) * - ((float)v_17 - v_19));
  }
  else v_11 = (unsigned char)172;
  if ((12135 - (int)p_9) - (int)(- (~ v_11)) == (int)p_13) result = (double)p;
  else {
    v = (long long)(~ (- (! p_9)));
    result = (double)v;
    result = - ((double)(-80 - (int)((signed char)p_4[1][2][4])) * ((double)p_6 / (
                                                                    result + 259.)));
  }
  return result;
}


