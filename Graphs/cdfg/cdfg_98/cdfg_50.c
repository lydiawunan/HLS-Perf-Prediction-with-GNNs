#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 872543475
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p[2][4][3], unsigned int p_7[5], long p_11,
                signed char p_13)
{
  long v_17;
  float v_15;
  unsigned char v_9;
  short v_4;
  unsigned long long v;
  signed char result;
  v_17 = (long)p_13;
  v_15 = -1.43883565846e+38f;
  v_9 = (unsigned char)p_7[0];
  v = (unsigned long long)(~ (~ 6039LL));
  if ((long)((float)(p_11 / (long)((int)(- p_13) + 481)) + v_15) > v_17) 
    result = (signed char)-98;
  else {
    v_4 = (short)(- v | (unsigned long long)v_9);
    v = (unsigned long long)(~ ((unsigned long)v_4 % 3666652724UL)) * (
        (unsigned long long)((int)p[1][0][1] - (int)((unsigned short)-1.30272679657e+38f)) - v);
    result = (signed char)((18446744073303431470ULL / ((v + (unsigned long long)v_4) + 288ULL)) * (unsigned long long)(
                           (unsigned int)((int)p[0][3][1] * (int)p[0][2][0]) + p_7[1]));
  }
  return result;
}


