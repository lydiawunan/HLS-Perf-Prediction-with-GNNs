#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 545874035
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p[4], unsigned int p_7[1][4], long p_11,
                 char p_13, double p_19)
{
  unsigned long long v_23;
  unsigned long v_21;
  long v_17;
  unsigned short v_15;
  double v_9;
  unsigned short v_4;
  char v;
  unsigned int result;
  v_23 = (unsigned long long)p_19;
  v_21 = (unsigned long)p[2];
  v_17 = 186461197L;
  v_15 = (unsigned short)p_19;
  v_9 = 1020296749.81;
  v_4 = (unsigned short)p_19;
  v = (char)p_11;
  result = 626384295U;
  while (v_21 >= (unsigned long)(- (~ (result | (unsigned int)p[3])))) {
    v_21 = (unsigned long)((90 + (int)((unsigned char)(p_19 * (double)v_23))) * (int)v_4);
    v_23 = (unsigned long long)((long)((int)((unsigned short)v_9) / (
                                       (int)(~ v_15) + 513)) % (p_11 + 251L));
    result = (unsigned int)((((int)v_4 << (v_23 & 15ULL)) - (int)(! p[1])) % (
                            (int)v + 578));
  }
  while_0_break: ;
  if ((unsigned long)(- result * (p_7[0][2] >> ((int)p[0] & 31)) - 450451320U) == (unsigned long)(- (
      v_17 - (long)((int)v_15 * (int)((unsigned short)v_9))))) result = (unsigned int)141.978256226f;
  else {
    v = (char)(184866101LL * (long long)((unsigned long)v_15 | (4294938599UL - (unsigned long)v_17)));
    v_4 = (unsigned short)((double)((unsigned int)p[3] / (p_7[0][3] + 1U)) + (
                           (v_9 + (double)p_11) + (double)(-1171 >> (
                                                           (int)p_13 & 15))));
    result = (unsigned int)(! ((int)v / ((int)v_4 + 713) - (int)-8547558400.f));
  }
  return result;
}


