#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1003061600
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, long p_5, float p_9, unsigned int p_11[3],
                  double p_15)
{
  unsigned long long v_25;
  int v_23;
  int v_21;
  unsigned long long v_19;
  short v_17;
  unsigned char v_13;
  float v_7;
  unsigned short v;
  unsigned long result;
  v_25 = 18446744073709514109ULL;
  v_23 = (int)p;
  v_21 = 683221500;
  v_19 = 287003622ULL;
  v_17 = (short)p_9;
  v_13 = (unsigned char)p_5;
  v_7 = -907.83215332f;
  while ((float)((int)v_13 % (! ((int)v_17 * 828) + 220)) <= - v_7) {
    v_13 = (unsigned char)v_23;
    v_23 = (int)((short)((float)v_25 * p_9 + (float)((long)v_13 - p))) % (
           (int)v_17 + 1005);
    v_17 = (short)(! (- p_11[2] + 57480U));
  }
  while_0_break: ;
  if ((float)((unsigned long)(- (- p)) % (unsigned long)((unsigned int)v_17 * (
                                                         3255018581U >> (
                                                         p & 31L)) + 158U)) != 
      6644308480.f * (float)(v_19 / (unsigned long long)(p_11[1] + 314U) - (unsigned long long)(- v_21))) {
    v_7 = (float)((unsigned long)((unsigned int)-1.94226137937e+46 - (
                                  p_11[1] | (unsigned int)v_13)) / 278072063UL);
    v = (unsigned short)(- v_7 * (float)((long long)(- p_9) / 238047193LL));
    result = (unsigned long)((long)v / ((p % -104311700L << (! p_5 & 31L)) + 989L));
  }
  else {
    v_7 = - (- -8748352512.f);
    v_7 = (float)((double)(! (4294963265U | (unsigned int)1.45537707903e+38f)) + 
                  (double)(- v_7) * - p_15);
    result = (unsigned long)v_7;
  }
  return result;
}


