#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 139603358
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p[1], short p_5, int p_7, unsigned short p_9[1][3],
           unsigned long p_25[4])
{
  unsigned long long v_29;
  unsigned char v_27;
  unsigned long v_23;
  long v_21;
  long v_19;
  short v_17;
  int v_15;
  int v_13;
  unsigned long long v_11;
  unsigned char v;
  double result;
  v_29 = 18446744073420939510ULL;
  v_27 = (unsigned char)p_5;
  v_21 = 192161114L;
  v_19 = (long)p_25[3];
  v_15 = (int)p[0];
  v = (unsigned char)p_7;
  result = -7349038873.74;
  if (((long)(((int)v & 25498) + ((int)p_9[0][1] + -121)) ^ ! v_21) > (long)(
      116 % (((int)((unsigned char)result) + (int)p[0]) * p_7 + 690))) {
    v_17 = (short)(32583UL % ((unsigned long)(- (result / ((double)v_21 + 669.))) + 421UL));
    v_13 = (int)(((long)(19872 / ((int)v_17 + 54)) + v_19) / (long)((
                                                                    (int)(~ p_5) - (int)(- v_17)) + 350));
    v_11 = (unsigned long long)(~ (~ (- v_15)));
  }
  else {
    v_23 = (unsigned long)v_29;
    v_11 = (unsigned long long)p[0];
    v_13 = (int)(v_11 + (unsigned long long)((v_23 - 41196UL) * (p_25[2] << (
                                                                 (int)v_27 & 31))));
  }
  if (-20695L % (long)((5 >> (((unsigned long long)p_9[0][1] | v_11) & 7ULL)) + 917) <= (long)(- v_13)) 
    result = (double)(- p[0]);
  else {
    v = (unsigned char)43;
    result = (double)(((int)v - -65) + - ((int)p_5 / (p_7 + 314)));
  }
  return result;
}


