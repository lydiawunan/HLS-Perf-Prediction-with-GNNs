#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 903217687
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p[4], float p_9[1][1], unsigned int p_11, long p_13)
{
  char v_19;
  float v_17;
  float v_15;
  float v_7;
  long long v_5;
  long long v;
  unsigned char result;
  v_19 = (char)-90;
  v_17 = 1849097984.f;
  v_15 = p_9[0][0];
  v_7 = p_9[0][0];
  v_5 = (long long)p_11;
  v = -301301674LL;
  result = (unsigned char)p_11;
  if (4294942783UL / (((unsigned long)p_13 & 4294903092UL) + 88UL) + (unsigned long)p_13 > 
      (unsigned long)((int)(- v_19) * - p[2]) / 4294943853UL) {
    v_7 = (float)(signed char)-1;
    v = (long long)((unsigned int)(- p_9[0][0]) >> (((unsigned int)(- p_9[0][0]) - 
                                                     (unsigned int)v_19 / 40240U) & 31U));
    result = (unsigned char)p_13;
  }
  else {
    v_17 = (float)(! result);
    result = (unsigned char)126;
    v_5 = (long long)(- (- p_9[0][0]));
  }
  while (~ v != (long long)((float)(-469 << 13L) * (-218.474639893f + (float)p[1]) + 1.84467440737e+19f)) {
    v_7 *= (float)v_5 + -1.81883055746e+38f;
    v_5 = (long long)(- ((float)((unsigned long)result * 38557UL) * - p_9[0][0]));
    result = (unsigned char)v_17;
    v = (long long)(p_9[0][0] / ((float)((unsigned long)p_11 | (unsigned long)(
                                         p_13 / ((long)v_15 + 735L))) + 297.f));
  }
  while_0_break: ;
  return result;
}


