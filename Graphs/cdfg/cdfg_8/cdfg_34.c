#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 870515174
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, unsigned int p_7, unsigned long long p_11,
                   unsigned int p_13, int p_15[1][1][1])
{
  unsigned short v_21;
  unsigned int v_19;
  float v_17;
  int v_9;
  unsigned int v_5;
  int v;
  unsigned short result;
  v_21 = (unsigned short)p;
  v_19 = 4294908199U;
  v_17 = -1.26556668405e+38f;
  v_9 = 2658213;
  result = (unsigned short)p;
  if (((unsigned int)(- v_17) - (p_13 + (unsigned int)result)) + 57126U != 
      (42713U * (unsigned int)-8053490748.53 - 41031U) * (v_19 * (unsigned int)(! v_21))) {
    v_5 = (unsigned int)(! ((unsigned long long)(36 % (v_9 + 142)) / (
                            p_11 + 895ULL)));
    v = (int)(! p_7);
    result = (unsigned short)v_5;
  }
  else {
    v_9 = (int)((long)(61 << (p_11 / 58ULL & 7ULL)) | (long)(471097890 / (
                                                             (int)result + 576)) / 368066683L);
    result = (unsigned short)(~ (p_13 | (unsigned int)p_15[0][0][0]) ^ ~ (
                              (unsigned int)v_9 + 3455464658U));
    v = (int)(- 263.116148365);
  }
  result = (unsigned short)(! (54 * (int)p) / (~ ((int)result * v) + 375));
  return result;
}


