#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 378569797
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, signed char p_7, int p_9, signed char p_13,
                 unsigned short p_15[4][3])
{
  int v_19;
  float v_17;
  long v_11;
  unsigned int v_4;
  int v;
  unsigned int result;
  v_19 = (int)p_13;
  v_11 = 972278896L;
  v_4 = (unsigned int)p;
  v = 6158;
  v_19 = (int)(- (((unsigned int)p_15[2][2] * v_4 - (unsigned int)((int)p_15[2][1] << (
                                                                   v_19 & 15))) / (unsigned int)(
                  ((int)(- p_7) + -31218) + 933)));
  v_17 = (float)v_19;
  v_4 = (unsigned int)(- ((float)((int)p_15[1][2] * (int)p_7) + - v_17) / (
                       p + 330.f));
  result = (unsigned int)((long long)((44480U / (unsigned int)(v + 587)) % (
                                      (unsigned int)4620800551.43 + 992U) - (unsigned int)(
                                      (int)((float)v_4 - p) % (145 / (
                                                               (int)p_7 + 281) + 404))) - 
                          (long long)(535L * ((long)p_9 | v_11)) * (-800345585LL * (long long)(
                                                                    -183052747L + (long)p_13)));
  return result;
}


