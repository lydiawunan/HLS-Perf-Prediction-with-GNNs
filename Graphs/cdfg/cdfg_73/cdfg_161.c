#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 244981480
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, unsigned int p_9, unsigned long p_11)
{
  int v_19;
  signed char v_17;
  unsigned long v_15;
  float v_13;
  char v_6;
  int v_4;
  unsigned short v;
  double result;
  v_19 = (int)p_9;
  v_17 = (signed char)-51;
  v_15 = 54868UL;
  v_6 = (char)p;
  v = (unsigned short)p;
  v_13 = (float)(((long long)((int)v_17 << (v_19 & 7)) + -16790LL * (long long)p) / (long long)(
                 p_11 + 86UL));
  if (64159 >= (int)((unsigned short)(- (v_13 / ((float)v_15 + 432.f))))) {
    v = (unsigned short)((unsigned int)((int)p - (int)v * (int)p) * (
                         p_9 / (unsigned int)(((int)((char)627.650784496) + (int)v_6) + 628)));
    v_4 = (int)v_6;
    result = (double)((int)v + v_4);
  }
  else result = (double)p_11;
  return result;
}


