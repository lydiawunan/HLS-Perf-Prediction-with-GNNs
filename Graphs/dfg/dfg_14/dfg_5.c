#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 129298863
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p[4], double p_7, float p_9)
{
  float v_5;
  unsigned long v;
  unsigned short result;
  v_5 = -834.695556641f;
  v = (unsigned long)p_7;
  v = (unsigned long)(-799834171LL + (long long)(((double)(v - 3720486575UL) - p_7) - -36355.));
  result = (unsigned short)(((unsigned long)(((double)p[2] - p_7) / 410.) ^ (
                             v - (unsigned long)p_9)) * (unsigned long)v_5);
  v = (unsigned long)(- (-1 | ((int)v_5 - ((int)result + -37))));
  result = (unsigned short)((unsigned long)((long)(- ((double)p[2] * -2808172214.24))) - (
                            v << (v % 3225741420UL & 31UL)));
  return result;
}


