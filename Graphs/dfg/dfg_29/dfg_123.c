#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 256565441
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, double p_11[3][2][1])
{
  unsigned int v_15;
  signed char v_13;
  float v_9;
  char v_7;
  unsigned long long v_4;
  double v;
  signed char result;
  v_15 = (unsigned int)p_11[2][0][0];
  v_13 = (signed char)p;
  v_9 = -328.210784912f;
  v = (double)p;
  v_7 = (char)(227 << (v_15 & 7U));
  v_4 = (unsigned long long)(~ ((unsigned long)v_9 * 4294913541UL) % (unsigned long)(
                             ((90 / ((int)((signed char)p) + 95) + (int)(
                               p_11[1][0][0] * v)) - (int)v_13) + 930));
  v = (double)((unsigned long)(~ ((int)((unsigned char)6393611370.51) + 253)) / (
               - ((unsigned long)9172904960.f / (181126390UL * (unsigned long)v_7 + 738UL)) + 453UL));
  result = (signed char)(- (((v - 16734.) - 172.011566162) - (double)(
                            40656ULL * (v_4 - (unsigned long long)p))));
  return result;
}


