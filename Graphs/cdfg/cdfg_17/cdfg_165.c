#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 815937417
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, unsigned char p_4[1][5], unsigned long p_9,
                 long p_11, unsigned long long p_13)
{
  short v_27;
  double v_25;
  int v_23;
  double v_21;
  unsigned long v_19;
  unsigned long v_17;
  unsigned char v_15;
  unsigned long v_7;
  float v;
  unsigned int result;
  v_27 = (short)p_9;
  v_25 = (double)p_11;
  v_23 = 19762;
  v_21 = (double)p;
  v_17 = 3289357802UL;
  v_15 = (unsigned char)p;
  result = (unsigned int)p_4[0][3];
  if (((unsigned long long)((unsigned long)result % (unsigned long)(p_11 + 406L)) - 11335ULL) / (
      (unsigned long long)((unsigned long)p_4[0][2] * p_9) % (p_13 + 386ULL) + 417ULL) <= 
      (unsigned long long)(((int)v_15 ^ -25349) % ((int)p_4[0][3] + 744)) + 
      (59072ULL % (p_13 + 215ULL)) % (unsigned long long)((p_9 + (unsigned long)v_27) + 765UL)) {
    v_15 = (unsigned char)(0L ^ p_11);
    v_17 = (unsigned long)p - ~ ((unsigned long)p / (p_9 + 182UL));
    v_7 = (unsigned long)(((unsigned long long)((unsigned long)p_11 % 17592UL) + 
                           p_13 * (unsigned long long)v_17) - ((unsigned long long)(
                                                               -929017168 % (
                                                               (int)p_4[0][0] + 725)) + (
                                                               (unsigned long long)p_4[0][4] & 18446744073046558867ULL)));
  }
  else {
    v_19 = (unsigned long)((double)((unsigned long)(v_21 / ((double)v_23 + 937.)) + 
                                    v_17 % (p_9 + 1021UL)) + - (v_25 / (
                                                                (double)p_4[0][0] + 63.)));
    v_7 = - (- ((unsigned long)p * v_19));
    v_15 = (unsigned char)(! 4294935096UL);
  }
  if (0UL == p_9) {
    result = (unsigned int)(((unsigned long long)(~ v_7) | 18446744073709495323ULL * (unsigned long long)p_9) - 
                            (unsigned long long)-3987404965.1 % 54902ULL);
    v = (float)(6502 | (int)p);
    result = (unsigned int)(((int)p - (int)p_4[0][3]) % ((int)(4002679808.f * v) + 491)) * (
             3835695740U * result);
  }
  else {
    result = (unsigned int)(! (~ ((unsigned long long)p_11 / (p_13 + 645ULL))));
    result = result;
  }
  return result;
}


