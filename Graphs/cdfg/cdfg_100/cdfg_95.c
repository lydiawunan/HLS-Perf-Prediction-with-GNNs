#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 585594737
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, unsigned int p_4, double p_7, short p_11[5][3][5],
          int p_17)
{
  unsigned long v_21;
  unsigned char v_19;
  short v_15;
  float v_13;
  char v_9;
  unsigned char v;
  short result;
  v_21 = (unsigned long)p_11[1][0][0];
  v_19 = (unsigned char)p;
  v_15 = (short)32648;
  v_13 = -3.10764301257e+38f;
  v_9 = (char)p_11[0][0][1];
  result = (short)p_17;
  if ((float)((int)(- v_19) % ((int)(! p_11[4][2][4]) + 283)) / (p + 934.f) != (float)v_15) {
    v_9 = (char)((unsigned int)(- v_19) / (p_4 + 1000U));
    v = (unsigned char)(((unsigned long)(p_4 % (unsigned int)(p_17 + 839)) + 
                         (unsigned long)p_4 % (v_21 + 433UL)) + 3502815244UL);
    v_19 = (unsigned char)52;
  }
  else {
    v = (unsigned char)(12 / (- (p_17 * 16008) + 327));
    result = (short)13824;
    v_13 = (float)(! (((int)p_11[3][2][0] * (int)result) % (((int)((short)p) + (int)v_15) + 287)));
  }
  while (((unsigned int)(-15918 ^ (int)p) + - p_4) - (unsigned int)((double)(
                                                                    (unsigned int)v * p_4) + - p_7) >= (unsigned int)(
         (212 % ((int)p_7 + 833)) / (((int)result - (int)v_9) % ((87 - (int)p_11[2][1][3]) + 1009) + 464))) {
    v = ! v_19;
    v_15 = (short)p_17;
    result = (short)(~ ((int)((short)(- v_13)) * (int)v_15));
  }
  while_0_break: ;
  return result;
}


