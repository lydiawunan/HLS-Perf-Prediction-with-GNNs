#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 57124515
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, unsigned long p_5, char p_7,
                long p_15[5][4], unsigned short p_17)
{
  char v_19;
  unsigned short v_13;
  float v_11;
  signed char v_9;
  unsigned short v;
  signed char result;
  v_19 = (char)p;
  v_11 = 8457644032.f;
  v_13 = (unsigned short)((1074 & (int)p_17) * ((int)v_19 % ((int)p + 701) - (int)p_17));
  if ((long long)(- (~ p_7)) / ((476695295LL + (long long)((int)((unsigned short)v_11) | (int)v_13)) + 151LL) == (long long)(- p_15[0][1])) {
    result = (signed char)(~ 4023307087U);
    v = (unsigned short)((double)((unsigned long)((int)p + 75) / ((p_5 + (unsigned long)p_7) + 898UL)) - 2.37471405418e+38);
    result = (signed char)(! (! ((int)v + (int)result)));
  }
  else {
    v_9 = (signed char)(~ -10526L);
    result = - v_9;
  }
  return result;
}


