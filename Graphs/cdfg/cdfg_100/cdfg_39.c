#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 997592594
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, unsigned int p_7, int p_9,
                  unsigned char p_13[1][5][3], long p_17[2][2][3])
{
  double v_23;
  char v_21;
  unsigned char v_19;
  char v_15;
  double v_11;
  signed char v_4;
  unsigned char v;
  unsigned char result;
  v_23 = -3.0179444363e+38;
  v_21 = (char)6;
  v_15 = (char)p_9;
  v_11 = (double)p_17[1][0][0];
  v_4 = (signed char)p;
  result = (unsigned char)p;
  if ((unsigned long)((int)(~ v_21) % (((int)v_21 << (p_9 & 7)) + 759) >> (
                      (((int)v_15 - (int)p) >> ((int)(v_23 * (double)p_17[0][0][1]) & 31)) & 31)) < 0UL) {
    v = (unsigned char)(! (- (57409LL / (long long)((int)p_13[0][3][1] + 258))));
    result = (unsigned char)(~ (- p_17[1][1][1]));
    v_15 = (char)-30;
  }
  else {
    v_4 = (signed char)(- (- (v_11 * (double)v_21)));
    v_19 = (unsigned char)(! ((unsigned long)p_13[0][4][2] % 30606UL) + (unsigned long)v_21);
    v = (unsigned char)((int)((unsigned char)(-6.9562818536e+37 + v_11)) / (
                        (int)v_19 + 945));
  }
  if (! (p_9 % ((int)v_4 + 437)) % ((28468 * (int)result - - p_9) + 418) >= (int)(- (! (! v_4)))) {
    v_4 = (signed char)(233U - ~ (p_7 / (unsigned int)((int)v + 619)));
    v = (unsigned char)(- ((int)v_4 / 235 - (int)p));
    result = - (~ v);
  }
  else {
    v = (unsigned char)(1179 / ((((int)p_13[0][0][2] >> ((int)v_4 & 7)) - 117261639) + 372));
    v_11 = (double)(407569274UL * (unsigned long)((long)p_13[0][2][0] + 269161493L) | (unsigned long)(
                    p_9 / ((int)(~ v_15) + 536)));
    result = (unsigned char)(((int)v * (int)result & p_9) % ((int)v_11 + 224));
  }
  return result;
}


