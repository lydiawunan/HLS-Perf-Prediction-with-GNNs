//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 401548106
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p[1], unsigned short p_5,
                 unsigned int p_11[5][3][5])
{
  char v_13;
  unsigned short v_9;
  long long v_7;
  unsigned short v;
  unsigned int result;
  v_13 = (char)6;
  v_7 = -934898856LL;
  result = (unsigned int)p_5;
  v = (unsigned short)(! (v_7 * 378610331LL + 940545598LL) + (long long)v_13);
  v_9 = (unsigned short)result;
  result = (unsigned int)((long long)v / (((22981LL - (long long)p[0]) - 
                                           (long long)p_5 * v_7) + 163LL) - (long long)(- (
                          ((unsigned int)v_9 % (p_11[4][1][0] + 981U)) % 3647545466U)));
  result = result;
  return result;
}


