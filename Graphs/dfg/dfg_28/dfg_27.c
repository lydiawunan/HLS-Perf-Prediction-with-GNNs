#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 912781812
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(void)
{
  float v_8;
  char v_6;
  long long v_4;
  unsigned int v;
  short result;
  v_4 = -626323299LL;
  result = (short)-10205;
  v_8 = - -2.54405245173e+38f;
  v = (unsigned int)v_8;
  v_6 = (char)((unsigned int)result + v);
  result = (short)((float)(! (~ v)) * ((float)(v_4 / 3951694536LL) + - (
                                       (float)v_6 / 4.26881542451e+37f)));
  return result;
}


