#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 318224691
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p[2][1][5], unsigned int p_7, short p_9,
          unsigned long long p_11)
{
  float v_5;
  unsigned char v;
  short result;
  v = (unsigned char)p_7;
  result = (short)-4557;
  v = v;
  v_5 = (float)(! (~ (18446744073709551557ULL / (p_11 + 730ULL) + (unsigned long long)result)));
  result = (short)(((unsigned int)(((int)v + (int)((unsigned char)v_5)) + (int)v) + 4294956728U) % (
                   (~ p_7 / ((unsigned int)(-3470061859.53 * (double)p_9) + 757U) + (unsigned int)(- (! p_9))) + 925U));
  result = (short)((float)((int)p[0][0][2] / 72684) * ((-5099.f + ((float)result - -517.88092041f)) * (float)(
                                                       ((int)p[1][0][3] >> (
                                                        (int)p[1][0][2] & 15)) + 295)));
  return result;
}


