#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 482339159
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, unsigned short p_13, int p_15,
                       double p_19, unsigned int p_21)
{
  double v_23;
  double v_17;
  unsigned long v_10;
  long long v_8;
  char v_6;
  char v_4;
  float v;
  unsigned long long result;
  v_23 = p_19;
  v_17 = 7932506075.29;
  v_8 = -32358LL;
  v_4 = (char)p_13;
  if (~ (- (p_21 * (unsigned int)p)) == (unsigned int)(- ((int)p_13 - (
                                                          (int)((unsigned char)v_23) + 72)))) {
    v_6 = (char)v_8;
    v = (float)(- ((int)v_4 * (int)v_6));
    v = v;
  }
  else {
    v_6 = (char)((4294913246. + (double)p_13 * v_17) / 805.);
    v_10 = (unsigned long)(((long)((int)p * (int)p_13) & ((long)v_6 - 54903L)) - (long)(- (
                           p_15 / 12)));
    v = (float)v_10;
  }
  result = ~ (18446744073709551543ULL % (18446744073268343554ULL % ((unsigned long long)v + 882ULL) + 13ULL));
  return result;
}


