#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 688798755
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, unsigned int p_7[3], long long p_9, int p_11,
                  int p_13)
{
  char v_17;
  int v_15;
  double v_4;
  int v;
  unsigned long result;
  v_17 = (char)p_11;
  v_15 = 423409112;
  result = (unsigned long)p;
  if (! ((unsigned long)p_13 - result) - (unsigned long)(v_15 / ((int)v_17 + 705) + 
                                                         249 % ((int)((unsigned char)7324352512.f) + 120)) >= (unsigned long)(
      ((p_7[1] | 65304U) / 58U) % 4294959612U)) {
    v_4 = (double)((long long)(-398210049 * (int)((float)p_7[2] - p)) - p_9);
    v = (int)(- (v_4 / -47.6245895492) + (double)(3282554112.f / (p + 829.f) - (float)(
                                                  (long)v_4 << 7L)));
  }
  else v = ~ (-123 * p_11 - -860058448);
  result = (unsigned long)((double)v + -37908899.8391);
  return result;
}


