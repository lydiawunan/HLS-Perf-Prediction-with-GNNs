//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1072683808
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, unsigned char p_5[3][4], int p_7, unsigned long long p_11,
          float p_15)
{
  unsigned char v_13;
  short v_9;
  signed char v;
  float result;
  v_13 = (unsigned char)54;
  v_9 = (short)(-3.35553786793e+38 / (double)(p_15 + 847.f));
  v = (signed char)(- (- (p_11 % 563541720ULL) / (unsigned long long)(
                       (int)v_13 + 429)));
  v = (signed char)(77 / ((((int)p * (int)p_5[0][2]) % (((int)v + p_7) + 303) & (int)v_9) + 316));
  result = (float)v;
  return result;
}


