//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 181614172
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p[2][2][4], short p_5, unsigned char p_7, unsigned char p_9,
        unsigned char p_15)
{
  float v_17;
  long long v_13;
  double v_11;
  unsigned int v;
  int result;
  v_17 = -7521214464.f;
  v_11 = (double)p_5;
  v_13 = (long long)((((int)p_15 - (int)p_9) - -3) * 47323 << ((int)v_17 & 31));
  v = (unsigned int)v_13;
  v = (unsigned int)(- (((double)((int)p_7 - (int)p_9) / ((v_11 - (double)v) + 93.)) * v_11));
  result = (int)(~ ((v % (unsigned int)(~ p[1][0][3] + 622)) / (unsigned int)(
                    (int)(! p_5) + 512)));
  return result;
}


