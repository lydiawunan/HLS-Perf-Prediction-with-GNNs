#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1073480090
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p[2], long long p_9[2][4])
{
  unsigned long long v_19;
  float v_17;
  unsigned char v_15;
  short v_13;
  short v_11;
  char v_7;
  int v_5;
  double v;
  long long result;
  v_19 = 601768554ULL;
  v_17 = (float)p_9[0][3];
  v_15 = (unsigned char)33;
  v_13 = (short)p_9[1][1];
  v_11 = (short)-26219;
  v_7 = (char)-46;
  v_5 = 25361;
  v = (double)p[1];
  while ((int)((short)(- ((4294923912. * v) / -316307003.))) <= (int)v_11) {
    v = (int)v_13 - -33;
    v_7 = (char)(((long)v_5 - ~ p[1]) - (long)(~ (-1034773582 & (int)v_15)));
    v_15 = (unsigned char)((int)v_15 % ((int)((unsigned char)(v_17 / (
                                                              (float)v_19 + 882.f))) + 897));
    v_11 = (short)(-893.582496158 - (double)p_9[0][2]);
  }
  while_0_break: ;
  if ((long long)(~ (~ v_5)) < (long long)(3716 * (int)v_7) * ! (83LL / (
                                                                 p_9[1][1] + 589LL))) {
    v = (double)(! -432677802);
    result = (long long)(- (- ((double)p[1] - v)));
  }
  else result = 6271LL;
  return result;
}


