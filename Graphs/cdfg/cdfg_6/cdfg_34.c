#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 957506043
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, char p_5, unsigned long p_7, double p_11[5][3],
                  unsigned char p_13)
{
  unsigned short v_21;
  unsigned int v_19;
  unsigned long v_17;
  long long v_15;
  double v_9;
  unsigned char v;
  unsigned char result;
  v_21 = (unsigned short)p_7;
  v_19 = (unsigned int)p_11[1][2];
  v_17 = (unsigned long)p_13;
  v = (unsigned char)p;
  if ((unsigned long)p_13 * ((unsigned long)(- v_21) | v_17 % (p_7 + 283UL)) > (unsigned long)p_5) {
    v_9 = (double)v;
    result = (unsigned char)((long long)(13 * (int)p_5) % (((long long)p_11[3][1] << 27LL) + 412LL) + 4294928896LL);
    v = (unsigned char)((p + (double)((int)result & (int)p_5)) * (double)(
                        ((unsigned long long)p_7 - 18446744073709532896ULL) * (unsigned long long)(
                        138655359UL + (unsigned long)v_9)));
  }
  else {
    v_17 = (unsigned long)v_19;
    v_15 = (long long)(! (~ (4365UL + v_17)));
    v = (unsigned char)((long long)((7452 + (int)p_13) - (int)p_5 % (
                                                         (int)((char)p_11[2][1]) + 69)) + v_15);
  }
  result = ~ v;
  return result;
}


