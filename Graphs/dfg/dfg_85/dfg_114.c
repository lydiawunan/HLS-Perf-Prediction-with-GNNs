#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 936132559
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, unsigned long long p_5, double p_9,
         unsigned long long p_13[2][4][2], unsigned long long p_15[1][5][1])
{
  unsigned short v_17;
  unsigned int v_11;
  char v_7;
  short v;
  char result;
  v_17 = (unsigned short)17513;
  v_7 = (char)99;
  v_11 = (unsigned int)(! (18446744073709538350ULL % (! p_13[1][1][1] + 227ULL)) ^ 
                        (p_15[0][1][0] % (p_15[0][1][0] + 958ULL) + (unsigned long long)(! v_17)) / (
                        p_15[0][2][0] + 37ULL));
  v = (short)(- (- v_11));
  v = (short)((unsigned long long)((int)(- v) - (int)((short)((double)(~ v_7) - 
                                                              p_9 / 1033.))) * 906772136ULL);
  result = (char)((unsigned long long)(- (~ (725UL * p))) - (unsigned long long)(- (
                                                            -11 * (int)v)) % (
                                                            p_5 + 1006ULL));
  return result;
}


