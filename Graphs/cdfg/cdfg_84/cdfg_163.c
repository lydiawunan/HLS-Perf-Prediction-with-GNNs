#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 35807635
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, char p_5, float p_7[3][2], unsigned char p_11,
          unsigned char p_23)
{
  unsigned char v_29;
  unsigned long v_27;
  unsigned long v_25;
  short v_21;
  long long v_19;
  float v_17;
  unsigned int v_15;
  unsigned long long v_13;
  unsigned long long v_9;
  unsigned int v;
  float result;
  v_29 = (unsigned char)117;
  v_27 = 3552743919UL;
  v_25 = (unsigned long)p_5;
  v_21 = (short)p_23;
  v_19 = (long long)p_7[0][0];
  v_15 = (unsigned int)p;
  v_13 = (unsigned long long)p_23;
  v_9 = 448129912ULL;
  result = 3613671168.f;
  if ((! v_9 ^ (unsigned long long)((unsigned long)p_5 * v_27)) % (unsigned long long)(
      ((unsigned long)p_5 + v_27 % (v_27 + 81UL)) + 748UL) <= (unsigned long long)v_29) {
    v_9 = (unsigned long long)(((float)(v_25 * (unsigned long)p_5) * (
                                result / (p_7[1][0] + 804.f))) * - (p_7[1][1] - 44497.f));
    v_21 = (short)(~ (152814004ULL - (unsigned long long)p_23));
    v = (unsigned int)(- (((int)p_5 + (int)((char)-6.27047690924e+37)) / 382));
  }
  else {
    v = 11880U;
    v_9 = (unsigned long long)((v_27 + (unsigned long)((unsigned int)p_5 - 8982U)) - (unsigned long)(
                               1065223044U | v_15 % (unsigned int)((int)v_29 + 80)));
    v_15 = (unsigned int)(- (((unsigned long long)p_23 * v_9) / ((unsigned long long)(
                                                                 (double)v_13 - -541948122.809) + 1009ULL)));
  }
  if ((unsigned long long)(! v_21) <= (unsigned long long)(! (v % 23151U)) + 
                                      251555895ULL / ((v_9 - (unsigned long long)p_23) + 935ULL)) 
    result = (float)17896ULL;
  else {
    v_17 = (float)v_19;
    v = (unsigned int)(- ((unsigned long long)p_7[0][0] * v_9) - ((unsigned long long)p_11 / (
                                                                  v_13 + 897ULL)) * (unsigned long long)(
                                                                 v_15 / (
                                                                 (unsigned int)v_17 + 308U)));
    result = (float)((unsigned long)(v * (unsigned int)p & (unsigned int)(! p_5)) / 34636UL);
  }
  return result;
}


