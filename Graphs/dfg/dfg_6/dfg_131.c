//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 502603199
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, unsigned int p_7, float p_9[5][2][2],
                   unsigned char p_11, float p_13)
{
  double v_17;
  char v_15;
  unsigned long v_5;
  signed char v;
  unsigned short result;
  v_17 = (double)p;
  v_15 = (char)69;
  v_5 = (unsigned long)p_9[3][1][0];
  result = (unsigned short)((int)(~ (! v_15)) & ! (! ((int)((unsigned char)v_17) / (
                                                      (int)p_11 + 347))));
  v_5 = ((unsigned long)(p_7 ^ (unsigned int)p_9[2][0][1]) % (v_5 * (unsigned long)p + 729UL) - (unsigned long)(! (
         (int)p - (int)p_11))) + (unsigned long)(- (- p_13));
  v = (signed char)((long long)(- (- ((unsigned int)p + p_7))) % (- (
                                                                  -17503LL + (long long)result) % (long long)(
                                                                  (int)(- p) + 332) + 501LL));
  result = (unsigned short)(- ((unsigned long)((int)(~ v) % ((int)(~ p) + 851)) * (
                               v_5 * (unsigned long)p + - v_5)));
  return result;
}


