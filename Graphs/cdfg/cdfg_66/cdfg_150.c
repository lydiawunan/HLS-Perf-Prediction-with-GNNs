#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 93343131
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p[1], int p_4, float p_6, long long p_8,
         unsigned long p_15[3][4])
{
  long v_23;
  int v_21;
  unsigned long long v_19;
  char v_17;
  unsigned short v_13;
  unsigned short v_11;
  char v;
  char result;
  v_23 = 283467553L;
  v_21 = p_4;
  v_11 = (unsigned short)p_4;
  v = (char)-26;
  if (- (16112U * (unsigned int)(-76 % ((int)((char)2.47228534163e+38) + 45))) < (unsigned int)(~ (
      v_21 + ~ p_4))) {
    v_19 = (unsigned long long)(- (- p_6) * -2250976768.f);
    v_13 = (unsigned short)v_19;
    result = (char)(37 % ((int)((unsigned char)((float)v_11 - p_6)) + 209));
  }
  else {
    v_13 = (unsigned short)((long)(! p_4) + ((long)(v_21 * v_21) - v_23));
    v_11 = (unsigned short)(~ (unsigned char)55);
    result = (char)(19581 / (p_4 + 951));
  }
  while ((int)p[0] * (int)((signed char)(((float)p_4 + p_6) - (float)(- p_8))) == (int)v) {
    v_13 = (int)v_13 + ((int)v_11 & 33);
    v_17 = (char)((-37 % (p_4 + 995) + (int)result) * (int)(- (- p_6)));
    v_11 = (unsigned short)((-3499167232.f / ((float)(p_15[1][1] % (p_15[1][0] + 271UL)) + 942.f)) / (
                            (float)(~ ((int)((char)p_6) * (int)v_17)) + 479.f));
    v = (char)(-127-1);
  }
  while_0_break: ;
  return result;
}


