#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 311446357
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, unsigned int p_4, unsigned char p_7,
         unsigned char p_9, long long p_11)
{
  unsigned long v_21;
  unsigned char v_19;
  long v_17;
  char v_15;
  char v_13;
  float v;
  char result;
  v_21 = (unsigned long)p_9;
  v_19 = (unsigned char)69;
  v_17 = 1018391150L;
  v_15 = (char)p_11;
  v_13 = (char)-114;
  v = 1.02158815916e+38f;
  while ((long long)(! ((int)v_13 | 37886)) * ((long long)p + ((long long)v_15 & p_11)) == (long long)v_17) {
    v_15 = (char)((p_11 + (long long)(- v_19)) * (long long)(! (440UL - v_21)));
    v_13 = (char)-91;
    v_17 = (long)(-(signed char)107);
  }
  while_0_break: ;
  if ((p_11 % ((long long)(- v) + 452LL)) / (long long)((int)p_9 + 273) >= (long long)p_7) 
    result = (char)p;
  else {
    v = (float)(! (4294955827U - (unsigned int)p_9));
    result = (char)(- (p_4 + (unsigned int)v) % (unsigned int)((int)p_7 * 223 + 750));
  }
  return result;
}


