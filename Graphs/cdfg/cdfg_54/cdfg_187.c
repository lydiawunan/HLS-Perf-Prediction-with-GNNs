#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 861103962
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p[2][3], unsigned short p_4, unsigned long p_7,
                unsigned char p_13, short p_15)
{
  float v_23;
  long long v_21;
  unsigned int v_19;
  int v_17;
  long long v_11;
  long v_9;
  double v;
  signed char result;
  v_23 = 909.723815918f;
  v_21 = 20894LL;
  v_19 = 38346U;
  v_9 = -631047815L;
  result = (signed char)79;
  if (((long long)(((int)p_13 & (int)((unsigned char)-103.936439514f)) * (int)p_13) | (
       7552536271LL + (v_21 - (long long)v_23))) < (long long)p_13) {
    v_11 = 118238966LL;
    v = (double)v_11;
    v_9 = (long)((int)result % (- ((int)p_13 + (int)p_15) + 374));
  }
  else {
    v = (double)(~ ((unsigned int)(- p[1][2]) % (v_19 + 630U)));
    result = (signed char)p_15;
    v_11 = (long long)p_4;
  }
  while ((int)(~ (! (- result))) != (int)((signed char)((p[1][2] - (double)p_4) * (double)(
                                                        (unsigned long)v / (
                                                        p_7 + 1023UL)) - (double)v_9))) {
    v_17 = v_11 - -114LL;
    v = (double)(((int)p_15 * -2755) % ((int)(- ((double)v_17 / (p[0][2] + 773.))) + 214));
    v_11 = -839550085LL;
    result = (signed char)(((long)p_13 % (v_9 % 27520L + 81L)) / (long)(
                           -30179 / ((int)((short)(- p[0][2])) + 494) + 33));
  }
  while_0_break: ;
  return result;
}


