#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1037288436
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, unsigned char p_4, unsigned int p_9,
                       unsigned long p_11, char p_15)
{
  long long v_25;
  float v_23;
  unsigned char v_21;
  unsigned long v_19;
  char v_17;
  unsigned char v_13;
  short v_7;
  double v;
  unsigned long long result;
  v_25 = (long long)p_11;
  v_23 = (float)p_9;
  v_21 = (unsigned char)245;
  v_7 = (short)22811;
  v = (double)p_15;
  result = 18446744073607480908ULL;
  if ((float)(- ((unsigned long long)((unsigned long)-2.561935594e+38 - p_11) - (
                 result - (unsigned long long)v_21))) >= (float)((unsigned int)p % (
                                                                 p_9 + 1024U)) - (
                                                         - v_23 - (float)(
                                                         v_25 % 76LL))) {
    v_17 = (char)(! (- p_9));
    v_13 = (unsigned char)v_17;
    v_7 = (short)p_11;
  }
  else {
    v_19 = 54709UL;
    v = -785.330154014;
    v_13 = (unsigned char)((unsigned long)((int)p | (int)v_7) * (- v_19 + 3410612911UL));
  }
  if ((unsigned long)((unsigned int)(- (- v)) / (- ((unsigned int)v_7 - p_9) + 1014U)) != 
      (p_11 - (unsigned long)((int)v_13 + (int)p_15)) % (unsigned long)(
      (int)(~ (- p_15)) + 1012)) result = 18446744073709551563ULL;
  else result = (unsigned long long)((long long)((int)p / (((int)p_4 << 3) + 690)) + -675062279LL);
  return result;
}


