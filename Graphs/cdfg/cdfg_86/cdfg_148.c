#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 759437064
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, unsigned short p_7, unsigned short p_11,
           unsigned short p_13, short p_15)
{
  double v_25;
  long long v_23;
  unsigned short v_21;
  double v_19;
  signed char v_17;
  unsigned long long v_9;
  unsigned int v_5;
  unsigned long long v;
  double result;
  v_25 = 8489327055.05;
  v_21 = (unsigned short)18858;
  v_19 = (double)p_7;
  v_17 = (signed char)p;
  v_9 = 42428ULL;
  v_5 = (unsigned int)p_15;
  v = 30451ULL;
  result = (double)p_7;
  if ((int)(! p_13) <= ((int)(~ v_17) - (int)p_11) % (54541 * (int)(~ p_11) + 615)) {
    v_17 = (signed char)(- (- (- v_19)));
    v_5 = (unsigned int)(((-9643LL + (long long)result) | (long long)p_7) % (long long)(
                         (int)v_21 + 1013));
    v = ((unsigned long long)((int)p >> ((int)((unsigned short)v_19) & 15)) / (
         - v_9 + 13ULL)) / (unsigned long long)((long long)((int)p_7 / (
                                                            (int)((unsigned short)-7.53915419136e+37f) + 453)) % (
                                                (40315LL + (long long)p_13) + 181LL) + 69LL);
  }
  else {
    v_23 = (long long)((0. - ((double)v_5 + result)) + - v_25 * (double)(
                                                       (int)((short)v_19) / (
                                                       (int)p_15 + 484)));
    v_5 = 224U;
    v_17 = (signed char)(~ ((long long)(~ p) + (v_23 | (long long)p_13)));
  }
  if (((unsigned long long)p_7 / (v_9 + 95ULL)) % (unsigned long long)(
      ((int)p_11 / ((int)p_13 + 552) - (int)p_15) + 537) == (unsigned long long)p_15 % (
                                                            (v + (unsigned long long)(
                                                             (int)v_17 + (int)p_15)) + 1015ULL)) {
    result = (double)p;
    result = -863.128299734 - (double)(102 / ((int)((char)result) + 808) | (int)(
                                       1.84467440729e+19 * result));
  }
  else {
    result = (double)(~ (~ v_5));
    v = (unsigned long long)(! (signed char)-98);
    result = (double)(~ ((unsigned long long)result % (v + 258ULL) - 996254609ULL));
  }
  return result;
}


