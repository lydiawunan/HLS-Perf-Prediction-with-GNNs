#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 952345024
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, unsigned long p_11, int p_13[1][2],
                   long long p_17)
{
  char v_19;
  short v_15;
  unsigned short v_9;
  float v_6;
  long v_4;
  signed char v;
  unsigned short result;
  v_19 = (char)p_13[0][0];
  v_15 = (short)20172;
  v_9 = (unsigned short)47916;
  v_6 = 82.4483184814f;
  v_4 = (long)p_13[0][1];
  result = (unsigned short)p;
  if ((float)(- v_4) + - v_6 > (float)(((unsigned long long)p_17 / 789248649ULL - (unsigned long long)(
                                        p_11 / (unsigned long)((int)v_19 + 664))) * (unsigned long long)(
                                       3587678576UL * ~ p))) {
    v_6 = (float)(p_13[0][1] % 144);
    v = (signed char)(((p_11 + p_11) + (p + (unsigned long)p_13[0][1])) + (unsigned long)(~ (
                      -39 / ((int)((char)6462482944.f) + 177))));
    v_4 = (long)v;
  }
  else {
    v_6 = (float)result;
    v_4 = (long)((int)((short)((double)v_15 - 914.21119202)) * (int)v_15);
    v = (signed char)-96;
  }
  while ((unsigned long)(((long)((int)v | (int)v) * v_4) * (long)(- v_6 * (float)(
                                                                  p % 4294949338UL))) < 4054138450UL) {
    v_9 = (int)v_9 - -41;
    result = ! (unsigned short)55555;
    v_6 = (float)(! (unsigned short)26570);
    v_6 = (float)(((unsigned long)((int)((char)v_6) | -102) + (p + p)) / (
                  ((unsigned long)(4294953546U >> (p_11 & 31UL)) & 4294939604UL) + 170UL));
  }
  while_0_break: ;
  return result;
}


