#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 863035061
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, unsigned short p_7, unsigned int p_11,
                       int p_13, unsigned char p_15)
{
  unsigned int v_17;
  unsigned char v_9;
  unsigned long v_4;
  float v;
  unsigned long long result;
  v_9 = (unsigned char)16;
  v_17 = 4294936325U;
  v = (float)(4294904514UL / (unsigned long)(- (p_11 | 22570U) + 768U) + 
              (unsigned long)(((long)-6.35516716493e+37 + 42174L) + (long)(
                              (int)v_9 % (p_13 + 959))) / (unsigned long)(
              ((unsigned int)(~ p_15) + (v_17 - (unsigned int)p)) + 333U));
  v_4 = (unsigned long)((long long)((int)p % ((int)p_7 + 6)) / (- ((long long)p_7 - 9484LL) + 13LL));
  result = (unsigned long long)(- ((double)((unsigned long)v / (v_4 + 251UL)) - -369.481104671) / (double)(
                                (float)(- ((int)p & (int)p_7)) / (- v * (float)v_9 + 121.f) + 112.f));
  return result;
}


