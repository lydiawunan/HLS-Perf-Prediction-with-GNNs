#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 809054167
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, unsigned int p_15, char p_17)
{
  short v_19;
  unsigned char v_13;
  long long v_11;
  unsigned long v_8;
  short v_6;
  double v_4;
  double v;
  long result;
  v_19 = (short)-32683;
  v_13 = (unsigned char)p;
  v_11 = 17944LL;
  v_8 = (unsigned long)p_17;
  v_4 = -2.64959209339e+38;
  v = 533.018813809;
  result = (long)p_15;
  v_13 = (unsigned char)((unsigned long)((p_15 * (p_15 % (p_15 + 177U))) % (unsigned int)(
                                         ((int)p_17 % ((int)v_13 + 425)) / (
                                         (int)v_19 + 487) + 953)) % (
                         (unsigned long)(0L - (result << 20)) % (- (- v_8) + 74UL) + 692UL));
  v_6 = (short)((long long)(742543432UL * (v_8 | (unsigned long)p) - (unsigned long)(- p)) & 
                -65248LL * ((v_11 % (long long)((int)v_13 + 169)) / (
                            (long long)v + 874LL)));
  v = (double)(- v_6);
  result = (long)(- (55738. * v + 777619584.) * v_4);
  return result;
}


