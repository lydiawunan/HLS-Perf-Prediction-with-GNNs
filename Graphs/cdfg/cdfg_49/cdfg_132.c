#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 445615140
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, double p_7, unsigned char p_9, char p_11[3], long long p_13)
{
  unsigned long long v_31;
  long v_29;
  int v_27;
  unsigned int v_25;
  float v_23;
  float v_21;
  float v_19;
  char v_17;
  unsigned long v_15;
  long long v_5;
  unsigned int v;
  int result;
  v_31 = 18446744073709500910ULL;
  v_29 = 16123L;
  v_27 = -478462410;
  v_25 = (unsigned int)p_13;
  v_23 = -6.40581218635e+37f;
  v_21 = -2221149440.f;
  v_17 = (char)57;
  v_5 = (long long)p_9;
  v = (unsigned int)p_11[2];
  result = -25824;
  while ((float)(18446744073709516210ULL + (unsigned long long)p) != - (
         ((float)v_25 - v_23) - (float)v_17)) {
    v_21 = v_31 + (unsigned long long)((long long)v_29 / 27362LL);
    result = (p - (int)-1.3049366581e+38) & result / (p + 909);
    v_23 = (float)((((long long)p_11[0] + v_5) | (long long)((unsigned int)p_11[0] ^ v_25)) % (
                   (long long)p_7 + 811LL));
    v_25 = (unsigned int)((long long)(((unsigned int)p_7 % (v + 117U)) / (unsigned int)(
                                      ((int)p_9 ^ 21) + 217)) - -306578063LL);
  }
  while_0_break: ;
  if (v_23 - (((float)v_25 + -7149954048.f) + (float)(- v_17)) >= (float)v_27) {
    v_5 = - ((long long)((int)p_9 | (int)p_11[0]) - p_13);
    v = (unsigned int)((long long)(-50986L / (long)(p + 401)) % (((long long)p % (
                                                                  v_5 + 885LL)) * (long long)(
                                                                 (int)p_7 + result) + 696LL));
    result = (int)(0U - (unsigned int)(! result) % ((v + (unsigned int)result) + 583U));
  }
  else {
    v_19 = (float)(((int)v_17 / ((int)((char)v_21) + 205)) % (- p + 840) - (int)(- (
                   p_7 / ((double)p_13 + 953.))));
    v_15 = (unsigned long)(- (v_19 - (float)p_13) / -2275788800.f);
    result = (int)((v_15 - (unsigned long)v_17) - (unsigned long)((int)((char)2606555657.97) - (int)v_17));
  }
  return result;
}


