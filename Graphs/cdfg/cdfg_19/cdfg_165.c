#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 475145162
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, unsigned long p_4, unsigned char p_6[3],
           signed char p_8, int p_13)
{
  unsigned long long v_21;
  int v_19;
  int v_17;
  long long v_15;
  long long v_11;
  long v;
  double result;
  v_21 = 31924ULL;
  v_19 = (int)p;
  v_17 = -51772;
  v_15 = -735792748LL;
  v = (long)p;
  result = (double)p_6[1];
  if (v_19 == (int)p_6[0]) {
    v_11 = (long long)(- (~ ((unsigned long long)v_19 - v_21)));
    v = (long)(4294921175UL & ! p_4);
    v_15 = -864LL;
  }
  else {
    v_17 = (int)v_15;
    v_11 = 976321174LL;
    result = (double)(((int)((signed char)(result + (double)v_19)) | (int)(~ p_8)) % (
                      v_19 + 503));
  }
  while ((long long)(((long)p_8 - v) * (long)-3.12945600886e+36f) % (
         40LL / ((-338410176LL + v_11) + 774LL) + 753LL) <= ((long long)(
                                                             p_13 & (
                                                             (int)p + 22846)) ^ (
                                                             (long long)1.44000739967e+38 + 
                                                             4002823975LL % (
                                                             v_15 + 65LL)))) {
    v_15 = ~ (~ ((long long)p_8 + v_11));
    v = (long)(p_13 << (((3389068268U << (v_15 & 31LL)) + (unsigned int)(
                         (int)p_8 ^ (int)p_8)) & 31U));
    v = (long)((unsigned long)(-48L / ((v + (long)v_17) + 863L)));
  }
  while_0_break: ;
  return result;
}


