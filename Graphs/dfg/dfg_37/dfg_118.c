#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 154981885
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, char p_11)
{
  double v_9;
  int v_6;
  long v_4;
  double v;
  unsigned char result;
  v_9 = 200.97723369;
  v_4 = (long)p;
  v = -2.85357612262e+38;
  v_6 = (int)(v_9 - (double)((36 - (int)(- p_11)) / ((int)(- p) + 352)));
  result = (unsigned char)((762807259U << ((unsigned int)-5725848501.17 & 31U)) * (unsigned int)(- (
                           (int)p * (int)((unsigned char)(- v)))));
  v = (double)(v_4 - (long)result);
  result = (unsigned char)((-54. / ((v - (double)v_4) + 147.) + -29136.) + (double)(! (
                           24683 + v_6)));
  return result;
}


