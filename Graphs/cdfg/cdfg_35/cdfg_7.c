#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 237265660
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p[3], unsigned short p_4[2][4][3], unsigned short p_6,
          unsigned long long p_9, int p_11)
{
  unsigned long v_25;
  float v_23;
  char v_21;
  unsigned long long v_19;
  unsigned short v_17;
  unsigned long long v_15;
  unsigned long v_13;
  unsigned short v;
  short result;
  v_23 = 274218240.f;
  v_21 = (char)45;
  v_19 = 494750207ULL;
  v_17 = (unsigned short)p[1];
  v_15 = (unsigned long long)p_6;
  result = (short)p_6;
  while ((int)((char)p[1]) > (int)v_21) {
    v_25 = v_23 - -110.f;
    v = (unsigned short)v_25;
    v_23 = (float)((int)(~ (! p_6)) - (int)v);
    v_21 = (char)(- (p[2] / 4294926080.f - (float)p_6));
  }
  while_0_break: ;
  if ((unsigned long long)((float)result * (p[1] * (float)((unsigned int)v_17 - 4294948421U))) == ! (! (
      v_19 + 18446744073709551514ULL))) {
    result = (short)((unsigned long long)((int)(- p_4[0][0][0]) + (int)p_6 / (
                                                                  (int)p_6 + 980)) % 18446744073529460023ULL);
    result = (short)(~ ((int)((short)p[1]) % ((int)(~ result) + 291)));
  }
  else {
    v_13 = (unsigned long)((unsigned long long)((int)result) - v_15);
    v = (unsigned short)(((p_9 + (unsigned long long)p_11) * (29474ULL % (
                                                              p_9 + 285ULL))) * (unsigned long long)v_13);
    result = (short)v;
  }
  return result;
}


