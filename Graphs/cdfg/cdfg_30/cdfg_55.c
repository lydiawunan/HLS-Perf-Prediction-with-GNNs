#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 734377730
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, unsigned long p_5, signed char p_7[1][3][2],
         unsigned char p_13, signed char p_17[4][3])
{
  unsigned char v_21;
  int v_19;
  unsigned char v_15;
  signed char v_11;
  unsigned long v_9;
  unsigned char v;
  long result;
  v_21 = (unsigned char)127;
  v_19 = 8903;
  v_15 = (unsigned char)p_7[0][2][0];
  v_11 = p_17[0][1];
  v = (unsigned char)p;
  result = (long)p_13;
  v_9 = (unsigned long)((long)((int)((double)v - 9497863562.44) / ((46301 - (int)v_21) + 516)) - (
                        result % (long)(v_19 + 505) + (long)((int)v_21 ^ (int)p)));
  if (- v_9 % (unsigned long)(74 * (int)v_11 + 591) - (unsigned long)(
      (int)(~ p_13) - (int)v_15 / ((int)p_17[0][1] + 805)) == (unsigned long)(~ v_19)) {
    v = (unsigned char)p_5;
    result = (long)(((int)(~ p) - 25361) % ((int)v + 772));
  }
  else result = (long)p_7[0][1][1];
  return result;
}


