#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 857977113
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, long long p_5, int p_7, signed char p_13[4][2][1],
         unsigned int p_15)
{
  short v_21;
  unsigned char v_19;
  short v_17;
  signed char v_11;
  unsigned short v_9;
  short v;
  char result;
  v_21 = (short)25300;
  v_19 = (unsigned char)p_5;
  if ((unsigned int)((int)v_21 % (p_7 + 28) | (int)(! p_13[1][0][0])) % (
      p_15 + 677U) < (unsigned int)((~ p - (int)(~ v_19)) * (int)v_19)) {
    v_17 = (short)p_7;
    v_11 = (signed char)((unsigned long)(~ v_17) % 4294967232UL);
    v_9 = (unsigned short)((int)(- p_13[2][0][0]) * (int)((signed char)-740.98034668f));
  }
  else {
    v_11 = (signed char)(! p_15);
    v_9 = (unsigned short)(~ (unsigned char)93);
    v_11 = (signed char)(~ ((62565 << ((int)v_11 & 15)) * (int)v_19));
  }
  if (p_7 % (((int)v_9 + (int)v_9) + 374) == (int)(((double)((int)v_11 | (int)p_13[3][1][0]) + 9817268489.03) - (double)(~ (
                                                   p_15 << (p_15 & 31U))))) {
    v = (short)(! (29LL + - p_5));
    result = (char)((int)v % ((p - 6172) + 113));
  }
  else result = (char)p;
  return result;
}


