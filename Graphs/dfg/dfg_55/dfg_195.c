#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 417636474
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, unsigned short p_13, unsigned long long p_15,
                 unsigned char p_19)
{
  unsigned long v_17;
  unsigned short v_11;
  unsigned int v_8;
  unsigned char v_6;
  float v_4;
  long long v;
  unsigned int result;
  v_17 = (unsigned long)p;
  v_11 = p_13;
  v_8 = (unsigned int)p_19;
  v_6 = (unsigned char)4;
  v = -221275774LL;
  result = (unsigned int)(((unsigned long long)(4294962844UL * (v_17 + 4096462024UL)) % (
                           (p_15 / (unsigned long long)((int)p_19 + 39)) * 18819ULL + 850ULL)) % (
                          (unsigned long long)(-817.957885742f - (float)(
                                               (int)(! p_19) ^ -123)) + 937ULL));
  v = 0LL;
  v_4 = (float)(v_8 / ((unsigned int)(((int)p - 5690) << ((int)v_11 & 31)) % (
                       - (result + (unsigned int)p_13) + 386U) + 875U));
  result = (unsigned int)((int)((unsigned char)((float)(-621871281LL * (
                                                        v % 28727903LL)) * - (- v_4))) ^ (int)v_6);
  return result;
}


