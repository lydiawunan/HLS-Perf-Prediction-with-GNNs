#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 958310330
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, char p_11, unsigned short p_15, float p_17,
          short p_19)
{
  unsigned short v_27;
  signed char v_25;
  unsigned long v_23;
  int v_21;
  unsigned int v_13;
  double v_9;
  float v_7;
  char v_5;
  unsigned int v;
  float result;
  v_27 = (unsigned short)p_17;
  v_25 = (signed char)p_17;
  v_23 = (unsigned long)p_15;
  v_21 = (int)p_17;
  v_13 = 137203892U;
  v_9 = -1.77421253477e+38;
  v_7 = (float)p_11;
  v_5 = (char)-77;
  v = 7606U;
  result = -5282004992.f;
  while ((long long)(0U % ((unsigned int)(- (243.f / (v_7 + 47.f))) + 281U)) < 
         ((-155159756LL - (long long)p_11) % (long long)(v_23 / (unsigned long)(
                                                         (int)v_25 + 99) + 71UL)) * (long long)(
         ((int)((unsigned short)v_9) / 34169) / ((int)p_11 / ((int)((char)v_9) + 360) + 27))) {
    v_9 = (double)(((2.66878014371e+38f - (float)p_19) / ((float)((int)v_5 * (int)v_27) + 364.f)) / (
                   (p_17 * (float)v_13 - 6.f) + 763.f));
    v_13 = (unsigned int)(- ((int)(! p_15)));
    v_23 = - ((unsigned long)((unsigned int)v_21 + v) % 3368813964UL);
  }
  while_0_break: ;
  if ((56119U * v_13 >> ((int)p / ((int)p_15 + 945) & 31)) / ((unsigned int)result + 284U) >= (unsigned int)(
      (5914571962.84 * v_9) / ((double)(((int)((short)p_17) - (int)p_19) * ! v_21) + 914.))) {
    v_5 = (char)(- (result - (float)p_11) * v_7);
    v = (unsigned int)(- (v_9 - 1.8446744073e+19));
    result = (float)(- (- p)) / (((float)(~ v) - (float)v_5 * v_7) + 39.f);
  }
  else result = (float)(~ ((unsigned long)(~ p_11) * 4294943775UL));
  return result;
}


