#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 579189863
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, double p_15, long p_19)
{
  float v_17;
  signed char v_13;
  unsigned int v_11;
  char v_9;
  unsigned long long v_7;
  int v_5;
  double v;
  unsigned int result;
  v_17 = 75.0386810303f;
  v_13 = (signed char)p_19;
  v_9 = (char)p;
  v_7 = (unsigned long long)p_15;
  v_5 = (int)p_15;
  v = -757.762264232;
  result = 376353430U;
  if (- ((double)p - p_15) + - (p_15 + (double)v_13) >= (double)(- (- v_17) * (float)(~ p_19))) {
    v_7 = (unsigned long long)(! p / ((unsigned long)(- p_15) + 242UL) << (
                               v_5 & 31));
    v_11 = (unsigned int)(~ ((unsigned long long)(p + (unsigned long)result) + 18446744072890135274ULL));
    v = (double)((float)(p + (unsigned long)result) * 8586554880.f - -25574.f);
  }
  else {
    v_11 = 38207U;
    v_9 = (char)(! (- (192UL / (p + 37UL))));
    v_5 = (int)(- p_15);
  }
  while ((unsigned long long)((unsigned long)((v + (double)p) / 681735412.) % (
                              (376234698UL / (p + 366UL) ^ (unsigned long)(~ v_5)) + 585UL)) == v_7) {
    v_13 = v_11 * (unsigned int)((int)v_9 / -38014);
    result = (unsigned int)(975064679 + (int)(- v_13) / -1017462549);
    v_9 = (char)(~ (short)-31276);
    v_7 = (unsigned long long)(~ (p % (unsigned long)((int)v_13 + 268)) | 
                               (unsigned long)-1.94510802835e+38f * (
                               p / (p + 720UL)));
  }
  while_0_break: ;
  return result;
}


