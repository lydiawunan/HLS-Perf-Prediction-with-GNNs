#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 852331037
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, signed char p_7, short p_11,
                unsigned long long p_13, unsigned char p_15)
{
  unsigned char v_21;
  signed char v_19;
  signed char v_17;
  char v_9;
  float v_5;
  unsigned short v;
  signed char result;
  v_21 = (unsigned char)p_11;
  v_19 = (signed char)-28;
  v_5 = (float)p_15;
  v_17 = (signed char)v_5;
  if ((int)((float)((unsigned long long)(~ v_17) * p_13) + -1.23177162611e+38f) >= - (
      (int)v_19 / ((int)v_21 + 289))) {
    v_5 = (float)(unsigned char)248;
    v = (unsigned short)(-92 | (int)p_7);
    result = (signed char)((int)(~ (~ v)) << (((unsigned long long)((int)p + (int)((unsigned char)v_5)) | 879552358ULL) & 15ULL));
  }
  else {
    v_9 = (char)-93;
    result = (signed char)(! (3976808621U * (unsigned int)v_9 + (unsigned int)(! p_11)));
  }
  return result;
}


