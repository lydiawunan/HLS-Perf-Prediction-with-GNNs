#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 72950229
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned long p_7[3][5][5], signed char p_9)
{
  unsigned long v_4;
  long long v;
  double result;
  v_4 = ! ((4294966074UL * p_7[1][0][3] - 4294939911UL) % (unsigned long)(
           ! ((int)p_9 / 20345) + 115));
  result = (double)(-19764 / ((int)((short)((float)v_4 - 4440407040.f)) + 725) + (
                    (int)p - (int)p));
  v = 392347774LL;
  result = (double)((long)(390341570. * ((result + (double)v) * 597200173.)) % -1L);
  return result;
}


