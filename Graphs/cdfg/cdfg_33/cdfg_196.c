#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 312635819
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, short p_4, float p_6, unsigned long long p_8,
                   signed char p_10)
{
  unsigned int v_19;
  unsigned short v_17;
  unsigned long long v_15;
  double v_13;
  float v;
  unsigned short result;
  v_19 = 4294907692U;
  v_17 = (unsigned short)p_4;
  v_15 = p_8;
  v = (float)p_10;
  result = (unsigned short)11997;
  while ((float)((unsigned long long)(- p_4) + ((unsigned long long)(- v_17) - 81482936ULL)) != 
         (p_6 - 0.f) / 468.f) {
    result = v_19 % 4U;
    v_19 = (unsigned int)(- p_6);
    v_15 = (unsigned long long)(- ((float)(~ v_15) + - v));
    v_17 = (unsigned short)p;
  }
  while_0_break: ;
  while (94 <= (int)((unsigned char)((float)((int)(- result) % ((int)p_10 % (
                                                                (int)((signed char)p) + 779) + 575)) + 
                                     p / 4294930944.f))) {
    v = (float)(! (32211ULL + ((unsigned long long)v + 815860077ULL)));
    v_13 = (double)(v_15 / 212546649ULL);
    result = (unsigned short)((unsigned long)((27947. - v_13) * (double)(
                                              p_6 - (float)p_4)) + 3411471563UL);
  }
  while_0_break_0: ;
  return result;
}


