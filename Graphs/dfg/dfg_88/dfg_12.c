#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 681817567
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, unsigned long long p_5[2][2],
                   long long p_7, unsigned short p_11, signed char p_15)
{
  float v_19;
  unsigned char v_17;
  long v_13;
  unsigned char v_9;
  double v;
  unsigned short result;
  v_19 = 996617280.f;
  v_17 = (unsigned char)p_15;
  v_13 = -685606775L;
  v_9 = (unsigned char)(((25185L | v_13) / (long)((int)(~ v_17) + 920)) % (long)(
                        ((int)p + (int)p) % ((int)p + 400) + 873) - (long)(
                        v_19 * -94.f));
  v_13 = (long)((int)p_15 % 26598);
  v = (double)((p_7 >> ((int)p & 63)) + (long long)((unsigned long)(27164U % (unsigned int)(
                                                                    (int)v_9 + 458) + 240U) - (unsigned long)(
                                                    (long)p_11 * v_13 - -983L)));
  result = (unsigned short)(- (- ((v / ((double)p + 130.)) / ((double)p_5[1][0] * -681.617800485 + 363.))));
  return result;
}


