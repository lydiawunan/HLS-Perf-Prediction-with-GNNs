#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 927686297
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, int p_9, unsigned short p_13, int p_17)
{
  float v_19;
  double v_15;
  char v_11;
  unsigned long v_7;
  int v_5;
  float v;
  long result;
  v_19 = -765.95690918f;
  v_11 = (char)p_9;
  v_7 = (unsigned long)p_13;
  v_5 = -50726;
  v = -88.3901138306f;
  v_15 = (double)(- (((float)((unsigned int)v_11 % 4294944440U) + v_19) * - (
                     v_19 - (float)v_5)));
  v_5 = ((int)p_13 - (int)((unsigned short)(- (- v_15)))) >> (- p_17 & 31);
  v = (float)(((unsigned long long)(~ (! v_11)) + 19900ULL) / ((unsigned long long)v % (
                                                               (! p + (unsigned long long)(! p_13)) + 704ULL) + 5ULL));
  result = (long)((int)(- (v + (float)p) / ((float)(- ((unsigned long)v_5 % (
                                                       v_7 + 619UL))) + 995.f)) / (
                  (- (p_9 % ((int)v_11 + 666)) + -3374) + 726));
  return result;
}


